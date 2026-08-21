.class public Lcom/tkay/core/common/b/m;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field private static volatile j:Lcom/tkay/core/common/b/m;


# instance fields
.field private final A:Ljava/lang/String;

.field private B:Z

.field private C:Z

.field private D:J

.field private E:J

.field private F:Ljava/lang/String;

.field private G:Ljava/lang/String;

.field private H:Z

.field private I:Z

.field private J:Z

.field private K:Lcom/tkay/core/common/g/c;

.field private L:Landroid/location/Location;

.field private M:Ljava/lang/String;

.field private N:Lorg/json/JSONArray;

.field private O:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private P:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private Q:Ljava/lang/String;

.field private R:Lcom/tkay/core/api/ATDebuggerConfig;

.field private S:Z

.field private T:I

.field private U:Z

.field private V:Z

.field private W:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/ITYAdFilter;",
            ">;"
        }
    .end annotation
.end field

.field private X:Ljava/lang/String;

.field private Y:Lcom/tkay/core/api/ATPrivacyConfig;

.field private Z:I

.field private aa:Lcom/tkay/core/common/f/al;

.field private ab:J

.field c:Ljava/lang/Boolean;

.field d:J

.field e:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private f:I

.field private final g:Ljava/lang/String;

.field private final h:Ljava/lang/String;

.field private i:Z

.field private k:Landroid/content/Context;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:Landroid/os/Handler;

.field private o:Ljava/lang/String;

.field private p:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private q:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation
.end field

.field private r:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/TYCustomAdapterConfig;",
            ">;"
        }
    .end annotation
.end field

.field private s:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private t:Ljava/lang/String;

.field private u:Lorg/json/JSONObject;

.field private v:Landroid/content/BroadcastReceiver;

.field private w:Ljava/lang/String;

.field private x:Ljava/lang/String;

.field private y:Ljava/lang/String;

.field private z:Lcom/tkay/core/api/IExHandler;


# direct methods
.method private constructor <init>()V
    .locals 5

    .line 228
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SDK.init"

    .line 111
    iput-object v0, p0, Lcom/tkay/core/common/b/m;->g:Ljava/lang/String;

    const-string v0, "com.tkay.pd.ExHandler"

    .line 112
    iput-object v0, p0, Lcom/tkay/core/common/b/m;->h:Ljava/lang/String;

    const/4 v0, 0x0

    .line 113
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->i:Z

    .line 144
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->B:Z

    .line 145
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->C:Z

    const-wide/16 v1, 0x0

    .line 147
    iput-wide v1, p0, Lcom/tkay/core/common/b/m;->D:J

    .line 148
    iput-wide v1, p0, Lcom/tkay/core/common/b/m;->E:J

    .line 156
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->J:Z

    const-string v3, ""

    .line 161
    iput-object v3, p0, Lcom/tkay/core/common/b/m;->M:Ljava/lang/String;

    const/4 v4, 0x1

    .line 170
    iput v4, p0, Lcom/tkay/core/common/b/m;->T:I

    .line 172
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->U:Z

    .line 173
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->V:Z

    .line 178
    iput-object v3, p0, Lcom/tkay/core/common/b/m;->X:Ljava/lang/String;

    .line 184
    iput v4, p0, Lcom/tkay/core/common/b/m;->Z:I

    .line 1037
    iput-wide v1, p0, Lcom/tkay/core/common/b/m;->d:J

    .line 229
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->n:Landroid/os/Handler;

    .line 230
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->q:Ljava/util/concurrent/ConcurrentHashMap;

    .line 231
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    .line 233
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "tkay.test"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->A:Ljava/lang/String;

    .line 235
    iput-boolean v4, p0, Lcom/tkay/core/common/b/m;->H:Z

    .line 236
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->P:Ljava/util/concurrent/ConcurrentHashMap;

    .line 237
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    .line 239
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/b/m;->ab:J

    return-void
.end method

.method private M()V
    .locals 2

    .line 560
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/b/m$1;-><init>(Lcom/tkay/core/common/b/m;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private N()V
    .locals 3

    .line 987
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    .line 988
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 989
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;)V

    :cond_0
    const/4 v0, 0x0

    .line 991
    iput-object v0, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 997
    :catchall_0
    :try_start_1
    new-instance v0, Lcom/tkay/core/common/b/m$10;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/b/m$10;-><init>(Lcom/tkay/core/common/b/m;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    .line 1025
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 1026
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "tkay_log_agent"

    .line 1027
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 1028
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 1030
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void
.end method

.method private O()V
    .locals 5

    .line 1780
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 1782
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->A:Ljava/lang/String;

    invoke-direct {v0, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    .line 1784
    :try_start_1
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->A:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    goto :goto_0

    :catchall_1
    move-exception v0

    move v4, v1

    move-object v1, v0

    move v0, v4

    .line 1787
    :goto_0
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_1
    move v1, v0

    .line 1791
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/core/common/b/m;->B:Z

    return-void
.end method

.method private P()Z
    .locals 1

    .line 1815
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->H:Z

    return v0
.end method

.method private Q()J
    .locals 2

    .line 2261
    iget-wide v0, p0, Lcom/tkay/core/common/b/m;->ab:J

    return-wide v0
.end method

.method private static a(J)J
    .locals 2

    .line 1799
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0, p0, p1}, Ljava/util/Date;-><init>(J)V

    .line 1800
    new-instance p0, Ljava/util/Date;

    invoke-virtual {v0}, Ljava/util/Date;->getYear()I

    move-result p1

    invoke-virtual {v0}, Ljava/util/Date;->getMonth()I

    move-result v1

    invoke-virtual {v0}, Ljava/util/Date;->getDate()I

    move-result v0

    invoke-direct {p0, p1, v1, v0}, Ljava/util/Date;-><init>(III)V

    invoke-virtual {p0}, Ljava/util/Date;->getTime()J

    move-result-wide p0

    return-wide p0
.end method

.method static synthetic a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;
    .locals 0

    .line 105
    iget-object p0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    return-object p0
.end method

.method public static a()Lcom/tkay/core/common/b/m;
    .locals 2

    .line 191
    sget-object v0, Lcom/tkay/core/common/b/m;->j:Lcom/tkay/core/common/b/m;

    if-nez v0, :cond_1

    .line 192
    const-class v0, Lcom/tkay/core/common/b/m;

    monitor-enter v0

    .line 193
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/b/m;->j:Lcom/tkay/core/common/b/m;

    if-nez v1, :cond_0

    .line 194
    new-instance v1, Lcom/tkay/core/common/b/m;

    invoke-direct {v1}, Lcom/tkay/core/common/b/m;-><init>()V

    sput-object v1, Lcom/tkay/core/common/b/m;->j:Lcom/tkay/core/common/b/m;

    .line 195
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 197
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/b/m;->j:Lcom/tkay/core/common/b/m;

    return-object v0
.end method

.method private a(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfig;)V
    .locals 6

    if-nez p2, :cond_0

    .line 2003
    new-instance p2, Lcom/tkay/core/api/TYNetworkConfig;

    invoke-direct {p2}, Lcom/tkay/core/api/TYNetworkConfig;-><init>()V

    .line 2006
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/api/TYNetworkConfig;->getTYInitConfigList()Ljava/util/List;

    move-result-object p2

    if-nez p2, :cond_1

    .line 2008
    new-instance p2, Ljava/util/ArrayList;

    const/4 v0, 0x2

    invoke-direct {p2, v0}, Ljava/util/ArrayList;-><init>(I)V

    .line 2011
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->u()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 2012
    invoke-interface {p2}, Ljava/util/List;->clear()V

    .line 2015
    :cond_2
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-lez v0, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->J:Z

    .line 2020
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    const/4 v4, 0x0

    if-eq v0, v3, :cond_4

    :try_start_0
    const-string v0, "com.tkay.network.facebook.FacebookTYInitConfig"

    .line 2025
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-class v3, Lcom/tkay/core/api/TYInitConfig;

    .line 2026
    invoke-virtual {v0, v3}, Ljava/lang/Class;->asSubclass(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object v0

    .line 2028
    move-object v3, v4

    check-cast v3, [Ljava/lang/Class;

    invoke-virtual {v0, v3}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    .line 2029
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    new-array v3, v2, [Ljava/lang/Object;

    .line 2030
    invoke-virtual {v0, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYInitConfig;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 2032
    :try_start_1
    invoke-interface {p2, v2, v0}, Ljava/util/List;->add(ILjava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-object v4, v0

    .line 2045
    :catchall_1
    :cond_4
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_5
    :goto_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYInitConfig;

    if-eqz v0, :cond_5

    if-eqz v4, :cond_6

    .line 2051
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_6

    if-nez v2, :cond_5

    move v2, v1

    .line 2059
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v3

    new-instance v5, Lcom/tkay/core/common/b/m$5;

    invoke-direct {v5, p0, v0, p1}, Lcom/tkay/core/common/b/m$5;-><init>(Lcom/tkay/core/common/b/m;Lcom/tkay/core/api/TYInitConfig;Landroid/content/Context;)V

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_7
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/b/m;Landroid/content/Context;)V
    .locals 21

    const-string v0, ""

    const-string v1, "playRecord"

    const-string v2, "tkay_sdk"

    move-object/from16 v3, p0

    .line 9901
    iget-wide v3, v3, Lcom/tkay/core/common/b/m;->d:J

    const-wide/16 v5, 0x0

    .line 9903
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    .line 10343
    iget-object v7, v7, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 9903
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v2, v8, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 9905
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_2

    .line 9906
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8, v7}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v7, "start_time"

    .line 9907
    invoke-virtual {v8, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v15

    const-string v7, "end_time"

    .line 9908
    invoke-virtual {v8, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v17

    const-string v7, "psid"

    .line 9909
    invoke-virtual {v8, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v7, "launch_mode"

    .line 9910
    invoke-virtual {v8, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    cmp-long v8, v3, v5

    const-wide/16 v19, 0x3e8

    if-eqz v8, :cond_1

    const/4 v8, 0x1

    if-ne v7, v8, :cond_0

    const/4 v7, 0x4

    goto :goto_0

    :cond_0
    const/4 v7, 0x2

    :goto_0
    move v9, v7

    move-wide v10, v15

    move-wide/from16 v12, v17

    .line 9913
    invoke-static/range {v9 .. v14}, Lcom/tkay/core/common/k/c;->a(IJJLjava/lang/String;)V

    .line 9914
    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "Create new psid, SDKContext.init to send playTime:"

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v17, v17, v15

    div-long v8, v17, v19

    invoke-virtual {v7, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_1

    .line 9917
    :cond_1
    :try_start_1
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "Psid is old, use pervioud statime,close before:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v17, v17, v15

    div-long v7, v17, v19

    invoke-virtual {v3, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-wide v3, v15

    .line 9919
    :goto_1
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    .line 11343
    iget-object v7, v7, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 9919
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v2, v8, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_0
    move-wide v3, v15

    .line 9923
    :catch_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    .line 12343
    iget-object v7, v7, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 9923
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v7, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    cmp-long v0, v3, v5

    if-nez v0, :cond_3

    .line 9927
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "SPU_INIT_TIME_KEY"

    move-object/from16 v7, p1

    invoke-static {v7, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    goto :goto_3

    :cond_3
    move-object/from16 v7, p1

    :goto_3
    cmp-long v0, v3, v5

    if-nez v0, :cond_4

    .line 9931
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 9935
    :cond_4
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    new-instance v1, Lcom/tkay/core/common/b/d;

    invoke-direct {v1, v3, v4}, Lcom/tkay/core/common/b/d;-><init>(J)V

    .line 9936
    invoke-virtual {v0, v1}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/b/m;Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfig;)V
    .locals 6

    if-nez p2, :cond_0

    .line 14003
    new-instance p2, Lcom/tkay/core/api/TYNetworkConfig;

    invoke-direct {p2}, Lcom/tkay/core/api/TYNetworkConfig;-><init>()V

    .line 14006
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/api/TYNetworkConfig;->getTYInitConfigList()Ljava/util/List;

    move-result-object p2

    if-nez p2, :cond_1

    .line 14008
    new-instance p2, Ljava/util/ArrayList;

    const/4 v0, 0x2

    invoke-direct {p2, v0}, Ljava/util/ArrayList;-><init>(I)V

    .line 14011
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->u()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 14012
    invoke-interface {p2}, Ljava/util/List;->clear()V

    .line 14015
    :cond_2
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-lez v0, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->J:Z

    .line 14020
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    const/4 v4, 0x0

    if-eq v0, v3, :cond_4

    :try_start_0
    const-string v0, "com.tkay.network.facebook.FacebookTYInitConfig"

    .line 14025
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-class v3, Lcom/tkay/core/api/TYInitConfig;

    .line 14026
    invoke-virtual {v0, v3}, Ljava/lang/Class;->asSubclass(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object v0

    .line 14028
    move-object v3, v4

    check-cast v3, [Ljava/lang/Class;

    invoke-virtual {v0, v3}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    .line 14029
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    new-array v3, v2, [Ljava/lang/Object;

    .line 14030
    invoke-virtual {v0, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYInitConfig;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 14032
    :try_start_1
    invoke-interface {p2, v2, v0}, Ljava/util/List;->add(ILjava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-object v4, v0

    .line 14045
    :catchall_1
    :cond_4
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_5
    :goto_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYInitConfig;

    if-eqz v0, :cond_5

    if-eqz v4, :cond_6

    .line 14051
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_6

    if-nez v2, :cond_5

    move v2, v1

    .line 14059
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v3

    new-instance v5, Lcom/tkay/core/common/b/m$5;

    invoke-direct {v5, p0, v0, p1}, Lcom/tkay/core/common/b/m$5;-><init>(Lcom/tkay/core/common/b/m;Lcom/tkay/core/api/TYInitConfig;Landroid/content/Context;)V

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_7
    return-void
.end method

.method static a(Landroid/content/Context;Ljava/util/List;)Z
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 1362
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 1363
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v2, 0x0

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1365
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v4

    new-instance v5, Landroid/content/Intent;

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v6

    invoke-direct {v5, p0, v6}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v6, 0x20000

    invoke-virtual {v4, v5, v6}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-gtz v4, :cond_1

    const-string v0, ", "

    .line 1369
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v3, ", error: "

    .line 1373
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    move v0, v2

    goto :goto_0

    .line 1376
    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    const/4 p1, 0x2

    if-le p0, p1, :cond_3

    .line 1377
    invoke-virtual {v1, v2, p1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_3
    const-string p0, "tkay"

    if-eqz v0, :cond_4

    const-string p1, "Activities : VERIFIED"

    .line 1381
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 1383
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "Activities : Missing "

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " declare in AndroidManifest"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return v0
.end method

.method static a(Landroid/content/Context;Ljava/util/List;Z)Z
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;Z)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-eqz p1, :cond_b

    .line 1608
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_6

    :cond_0
    const-string v1, ""

    const/4 v2, 0x0

    .line 1616
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    move v5, v0

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_8

    .line 1618
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 1621
    :try_start_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 1622
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "_"

    invoke-virtual {v6, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    aget-object v8, v8, v2

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_*"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1626
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v7

    const-string v8, "layout"

    .line 1627
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v9

    .line 1626
    invoke-virtual {v7, v6, v8, v9}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    if-gtz v6, :cond_2

    goto :goto_4

    :cond_2
    const/4 v7, 0x0

    .line 1636
    :try_start_2
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v8

    invoke-virtual {v8, v6}, Landroid/content/res/Resources;->getLayout(I)Landroid/content/res/XmlResourceParser;

    move-result-object v7

    .line 1640
    :cond_3
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->next()I

    move-result v6

    if-eq v6, v0, :cond_5

    const/4 v8, 0x2

    if-ne v6, v8, :cond_3

    const-string v6, "x"

    .line 1645
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 1646
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->getAttributeCount()I

    move-result v6

    if-nez v6, :cond_3

    move v5, v2

    goto :goto_1

    .line 1651
    :cond_4
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->getAttributeCount()I

    move-result v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-ltz v6, :cond_3

    :cond_5
    :goto_1
    if-eqz v7, :cond_6

    .line 1660
    :goto_2
    :try_start_3
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catchall_0
    move-exception v6

    .line 1657
    :try_start_4
    invoke-virtual {v6}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v7, :cond_6

    goto :goto_2

    :cond_6
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :catchall_1
    move-exception p0

    if-eqz v7, :cond_7

    .line 1660
    :try_start_5
    invoke-interface {v7}, Landroid/content/res/XmlResourceParser;->close()V

    .line 1662
    :cond_7
    throw p0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :cond_8
    move v2, v5

    goto :goto_4

    :catchall_2
    move-exception p0

    .line 1671
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :catchall_3
    :goto_4
    const-string p0, "tkay"

    if-eqz v2, :cond_9

    if-nez p2, :cond_a

    const-string p1, "Resource: VERIFIED"

    .line 1677
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_5

    .line 1680
    :cond_9
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "Resource: The "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " resources are missing. If shrinkResources is enabled, the "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " resources must be added to the whitelist (keep.xml)"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    :goto_5
    return v2

    :cond_b
    :goto_6
    return v0
.end method

.method private b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1133
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0, p2, p3}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 1135
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p3

    new-instance v0, Lcom/tkay/core/common/b/m$11;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/core/common/b/m$11;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {p3, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/b/m;)V
    .locals 5

    .line 12780
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 12782
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->A:Ljava/lang/String;

    invoke-direct {v0, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    .line 12784
    :try_start_1
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->A:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    goto :goto_0

    :catchall_1
    move-exception v0

    move v4, v1

    move-object v1, v0

    move v0, v4

    .line 12787
    :goto_0
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_1
    move v1, v0

    .line 12791
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/core/common/b/m;->B:Z

    return-void
.end method

.method public static b(Ljava/lang/Runnable;)V
    .locals 1

    .line 1716
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static b(Landroid/content/Context;Ljava/util/List;)Z
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 1395
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 1396
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    .line 1397
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v3, 0x0

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 1399
    :try_start_0
    new-instance v5, Landroid/content/Intent;

    invoke-static {v4}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v6

    invoke-direct {v5, p0, v6}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v6, 0x20000

    invoke-virtual {v2, v5, v6}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-gtz v5, :cond_1

    const-string v0, ", "

    .line 1402
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v4, ", error: "

    .line 1406
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    move v0, v3

    goto :goto_0

    .line 1409
    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    const/4 p1, 0x2

    if-le p0, p1, :cond_3

    .line 1410
    invoke-virtual {v1, v3, p1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_3
    const-string p0, "tkay"

    if-eqz v0, :cond_4

    const-string p1, "Services : VERIFIED"

    .line 1414
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 1416
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "Services : Missing "

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " declare in AndroidManifest"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return v0
.end method

.method static b(Ljava/util/Map;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 1337
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 1338
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1339
    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Boolean;

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    if-nez v5, :cond_1

    const-string v0, ", "

    .line 1341
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move v0, v4

    goto :goto_0

    .line 1344
    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    const/4 v2, 0x2

    if-le p0, v2, :cond_3

    .line 1345
    invoke-virtual {v1, v4, v2}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_3
    const-string p0, "tkay"

    if-eqz v0, :cond_4

    const-string v1, "Dependence Plugin: VERIFIED"

    .line 1349
    invoke-static {p0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 1351
    :cond_4
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Dependence Plugin: Missing "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    return v0
.end method

.method static synthetic c(Lcom/tkay/core/common/b/m;)Lcom/tkay/core/api/IExHandler;
    .locals 0

    .line 105
    iget-object p0, p0, Lcom/tkay/core/common/b/m;->z:Lcom/tkay/core/api/IExHandler;

    return-object p0
.end method

.method static synthetic c(Landroid/content/Context;)V
    .locals 5

    :try_start_0
    const-string v0, "com.tkay.network.adx.AdxTYInitManager"

    .line 13748
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 13749
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v3, 0x0

    :try_start_1
    new-array v2, v2, [Ljava/lang/Object;

    .line 13752
    invoke-virtual {v1, v3, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_2
    const-string v1, "tkay"

    .line 13754
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "Cannot instantiate "

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", please check if SDK is imported"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    if-eqz v3, :cond_0

    .line 13757
    instance-of v0, v3, Lcom/tkay/core/api/TYInitMediation;

    if-eqz v0, :cond_0

    .line 13758
    check-cast v3, Lcom/tkay/core/api/TYInitMediation;

    .line 13760
    invoke-virtual {v3}, Lcom/tkay/core/api/TYInitMediation;->getResourceStatus()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x1

    .line 13762
    invoke-static {p0, v0, v1}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/util/List;Z)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_0
    return-void
.end method

.method static c(Landroid/content/Context;Ljava/util/List;)Z
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 1427
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 1429
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x0

    .line 1433
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v5, 0x8

    invoke-virtual {v2, p0, v5}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move p0, v0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string v2, ", error: "

    .line 1437
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move p0, v4

    :goto_0
    if-nez v3, :cond_1

    return v4

    .line 1444
    :cond_1
    iget-object v2, v3, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    .line 1446
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1448
    array-length v5, v2

    move v6, v4

    :goto_2
    if-ge v6, v5, :cond_4

    aget-object v7, v2, v6

    .line 1449
    iget-object v7, v7, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    invoke-static {v7, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_3

    move v5, v0

    goto :goto_3

    :cond_3
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_4
    move v5, v4

    :goto_3
    if-nez v5, :cond_2

    const-string p0, ", "

    .line 1456
    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move p0, v4

    goto :goto_1

    .line 1459
    :cond_5
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p1

    const/4 v0, 0x2

    if-le p1, v0, :cond_6

    .line 1460
    invoke-virtual {v1, v4, v0}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_6
    const-string p1, "tkay"

    if-eqz p0, :cond_7

    const-string v0, "Providers : VERIFIED"

    .line 1464
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_4

    .line 1466
    :cond_7
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Providers : Missing "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " declare in AndroidManifest"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_4
    return p0
.end method

.method private static d(Landroid/content/Context;)V
    .locals 5

    :try_start_0
    const-string v0, "com.tkay.network.adx.AdxTYInitManager"

    .line 748
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 749
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v3, 0x0

    :try_start_1
    new-array v2, v2, [Ljava/lang/Object;

    .line 752
    invoke-virtual {v1, v3, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_2
    const-string v1, "tkay"

    .line 754
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "Cannot instantiate "

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", please check if SDK is imported"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    if-eqz v3, :cond_0

    .line 757
    instance-of v0, v3, Lcom/tkay/core/api/TYInitMediation;

    if-eqz v0, :cond_0

    .line 758
    check-cast v3, Lcom/tkay/core/api/TYInitMediation;

    .line 760
    invoke-virtual {v3}, Lcom/tkay/core/api/TYInitMediation;->getResourceStatus()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x1

    .line 762
    invoke-static {p0, v0, v1}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/util/List;Z)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_0
    return-void
.end method

.method public static d(Ljava/lang/Runnable;)V
    .locals 3

    .line 1732
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    const-wide/16 v1, 0x3e8

    invoke-virtual {v0, p0, v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method static d(Landroid/content/Context;Ljava/util/List;)Z
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-eqz p1, :cond_5

    .line 1474
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_3

    .line 1480
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x0

    .line 1485
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v3

    .line 1486
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v4, 0x80

    .line 1485
    invoke-virtual {v3, p0, v4}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 1488
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_2

    .line 1492
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 1493
    iget-object v6, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {v6, v5}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1495
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_1

    const-string v0, ", \""

    .line 1498
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1500
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\""

    .line 1501
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move v0, v2

    :cond_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 1505
    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    const/4 p1, 0x2

    if-le p0, p1, :cond_3

    .line 1506
    invoke-virtual {v1, v2, p1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    move v2, v0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1510
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    const-string p0, "tkay"

    if-eqz v2, :cond_4

    const-string p1, "meta-data: VERIFIED"

    .line 1515
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 1517
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "meta-data: Missing "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " declare in AndroidManifest"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return v2

    :cond_5
    :goto_3
    return v0
.end method

.method static synthetic d(Lcom/tkay/core/common/b/m;)Z
    .locals 0

    .line 105
    iget-boolean p0, p0, Lcom/tkay/core/common/b/m;->I:Z

    return p0
.end method

.method static synthetic e(Lcom/tkay/core/common/b/m;)Ljava/lang/String;
    .locals 0

    .line 105
    iget-object p0, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    return-object p0
.end method

.method private e(Z)V
    .locals 0

    .line 1836
    iput-boolean p1, p0, Lcom/tkay/core/common/b/m;->U:Z

    return-void
.end method

.method private static e(Landroid/content/Context;)Z
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "activity"

    .line 780
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/ActivityManager;

    .line 781
    invoke-virtual {v1}, Landroid/app/ActivityManager;->getRunningAppProcesses()Ljava/util/List;

    move-result-object v1

    .line 782
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 783
    iget-object v3, v2, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 784
    iget p0, v2, Landroid/app/ActivityManager$RunningAppProcessInfo;->importance:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x64

    if-ne p0, v1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0

    :catchall_0
    move-exception p0

    .line 793
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return v0
.end method

.method static e(Landroid/content/Context;Ljava/util/List;)Z
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 1529
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    return v0

    .line 1536
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v3, 0x0

    .line 1541
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v4

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v5, 0x1000

    invoke-virtual {v4, p0, v5}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 1543
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, ", "

    if-eqz p0, :cond_7

    move v6, v0

    move v5, v3

    :goto_0
    if-ge v5, v1, :cond_6

    .line 1550
    :try_start_1
    invoke-interface {p1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 1554
    array-length v8, p0

    move v9, v3

    :goto_1
    if-ge v9, v8, :cond_3

    aget-object v10, p0, v9

    .line 1555
    invoke-static {v7, v10}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_2

    move v8, v0

    goto :goto_2

    :cond_2
    add-int/lit8 v9, v9, 0x1

    goto :goto_1

    :cond_3
    move v8, v3

    :goto_2
    if-nez v8, :cond_5

    .line 1567
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result v6

    if-nez v6, :cond_4

    .line 1568
    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 1570
    :cond_4
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_3
    move v6, v3

    :cond_5
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_6
    move v3, v6

    goto :goto_6

    :cond_7
    move p0, v3

    :goto_4
    if-ge p0, v1, :cond_9

    .line 1579
    invoke-interface {p1, p0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-nez p0, :cond_8

    .line 1582
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_5

    .line 1584
    :cond_8
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_5
    add-int/lit8 p0, p0, 0x1

    goto :goto_4

    :catchall_0
    move-exception p0

    .line 1591
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_9
    :goto_6
    const-string p0, "tkay"

    if-eqz v3, :cond_a

    const-string p1, "Permission: VERIFIED"

    .line 1596
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_7

    .line 1598
    :cond_a
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "Permission: Missing "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " declare in AndroidManifest"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_7
    return v3
.end method

.method private f(Landroid/content/Context;)Z
    .locals 3

    .line 860
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 861
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 862
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return v2

    .line 867
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v0

    .line 868
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 869
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v2

    .line 874
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 876
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/core/api/IExHandler;->checkDebuggerDevice(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v2

    :cond_2
    const/4 p1, 0x0

    return p1
.end method

.method private g(Landroid/content/Context;)V
    .locals 22

    const-string v0, ""

    const-string v1, "playRecord"

    const-string v2, "tkay_sdk"

    move-object/from16 v3, p0

    .line 901
    iget-wide v4, v3, Lcom/tkay/core/common/b/m;->d:J

    const-wide/16 v6, 0x0

    .line 903
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    .line 6343
    iget-object v8, v8, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 903
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v2, v9, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 905
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_2

    .line 906
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9, v8}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v8, "start_time"

    .line 907
    invoke-virtual {v9, v8}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v16

    const-string v8, "end_time"

    .line 908
    invoke-virtual {v9, v8}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v18

    const-string v8, "psid"

    .line 909
    invoke-virtual {v9, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    const-string v8, "launch_mode"

    .line 910
    invoke-virtual {v9, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    cmp-long v9, v4, v6

    const-wide/16 v20, 0x3e8

    if-eqz v9, :cond_1

    const/4 v9, 0x1

    if-ne v8, v9, :cond_0

    const/4 v8, 0x4

    goto :goto_0

    :cond_0
    const/4 v8, 0x2

    :goto_0
    move v10, v8

    move-wide/from16 v11, v16

    move-wide/from16 v13, v18

    .line 913
    invoke-static/range {v10 .. v15}, Lcom/tkay/core/common/k/c;->a(IJJLjava/lang/String;)V

    .line 914
    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "Create new psid, SDKContext.init to send playTime:"

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v18, v18, v16

    div-long v9, v18, v20

    invoke-virtual {v8, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_1

    .line 917
    :cond_1
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Psid is old, use pervioud statime,close before:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v18, v18, v16

    div-long v8, v18, v20

    invoke-virtual {v4, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-wide/from16 v4, v16

    .line 919
    :goto_1
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    .line 7343
    iget-object v8, v8, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 919
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v2, v9, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_0
    move-wide/from16 v4, v16

    .line 923
    :catch_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    .line 8343
    iget-object v8, v8, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 923
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    cmp-long v0, v4, v6

    if-nez v0, :cond_3

    .line 927
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "SPU_INIT_TIME_KEY"

    move-object/from16 v8, p1

    invoke-static {v8, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    goto :goto_3

    :cond_3
    move-object/from16 v8, p1

    :goto_3
    cmp-long v0, v4, v6

    if-nez v0, :cond_4

    .line 931
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 935
    :cond_4
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    new-instance v1, Lcom/tkay/core/common/b/d;

    invoke-direct {v1, v4, v5}, Lcom/tkay/core/common/b/d;-><init>(J)V

    .line 936
    invoke-virtual {v0, v1}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    return-void
.end method

.method private static h(Landroid/content/Context;)V
    .locals 1

    .line 2269
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/e/a;->a(Landroid/content/Context;)V

    return-void
.end method

.method static h(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "tkay"

    .line 1321
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string p0, "SDK: VERIFIED"

    .line 1322
    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    const-string p0, "SDK: NOT VERIFIED"

    .line 1327
    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return p0
.end method

.method public static n(Ljava/lang/String;)V
    .locals 6

    .line 1897
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "tkay"

    if-eqz v0, :cond_0

    const-string p0, "AdSourceId is empty"

    .line 1898
    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1902
    :cond_0
    :try_start_0
    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-nez v0, :cond_1

    const-string v0, "AdSourceId can\'t set 0"

    .line 1904
    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    .line 1907
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "AdSourceId \'"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\' is not compliant"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private q(Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 400
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->q:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 401
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private r(Ljava/lang/String;)V
    .locals 3

    .line 489
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    .line 490
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "tkay_appid"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private s(Ljava/lang/String;)V
    .locals 3

    .line 501
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->m:Ljava/lang/String;

    .line 502
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "tkay_appkey"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private t(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 809
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    return-void
.end method

.method private declared-synchronized u(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    monitor-enter p0

    .line 1104
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1105
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    .line 1106
    monitor-exit p0

    return-object v0

    .line 1109
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": sessionid is empty."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1110
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    .line 1112
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1113
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1114
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v2, Ljava/util/Random;

    invoke-direct {v2}, Ljava/util/Random;-><init>()V

    const v3, 0x989680

    invoke-virtual {v2, v3}, Ljava/util/Random;->nextInt(I)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1116
    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 1117
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1119
    :try_start_2
    iget-object v4, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    invoke-virtual {v4, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1123
    :catch_0
    :try_start_3
    iget-object v4, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v5, "tkay_sdk"

    const-string v6, "SPU_SESSIONID_KEY"

    iget-object v7, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v5, v6, v7}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "2"

    .line 1126
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    :goto_0
    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v4, v1, v2}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1127
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final A()Lcom/tkay/core/common/g/c;
    .locals 1

    .line 1804
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->K:Lcom/tkay/core/common/g/c;

    if-nez v0, :cond_0

    .line 1805
    new-instance v0, Lcom/tkay/core/common/i/d;

    invoke-direct {v0}, Lcom/tkay/core/common/i/d;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->K:Lcom/tkay/core/common/g/c;

    .line 1807
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->K:Lcom/tkay/core/common/g/c;

    return-object v0
.end method

.method public final B()Z
    .locals 1

    .line 1840
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->U:Z

    return v0
.end method

.method public final C()Z
    .locals 1

    .line 1848
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->V:Z

    return v0
.end method

.method public final D()Landroid/content/Context;
    .locals 1

    .line 1972
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1973
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    return-object v0

    .line 1975
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    return-object v0
.end method

.method public final E()Landroid/app/Activity;
    .locals 1

    .line 1993
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1994
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final F()Ljava/lang/String;
    .locals 1

    .line 2180
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->X:Ljava/lang/String;

    return-object v0
.end method

.method public final G()Z
    .locals 1

    .line 2189
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->c:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    .line 2190
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    :try_start_0
    const-string v0, "com.reyun.mobdna.MobDNA"

    .line 2194
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 2195
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->c:Ljava/lang/Boolean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 2197
    :catchall_0
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->c:Ljava/lang/Boolean;

    .line 2199
    :goto_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->c:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public final H()Z
    .locals 1

    .line 2203
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->J:Z

    return v0
.end method

.method public final I()Lcom/tkay/core/api/ATPrivacyConfig;
    .locals 1

    .line 2211
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->Y:Lcom/tkay/core/api/ATPrivacyConfig;

    return-object v0
.end method

.method public final J()I
    .locals 1

    .line 2215
    iget v0, p0, Lcom/tkay/core/common/b/m;->Z:I

    return v0
.end method

.method public final K()Lcom/tkay/core/common/f/al;
    .locals 2

    .line 2223
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    if-nez v0, :cond_0

    .line 2224
    new-instance v0, Lcom/tkay/core/common/f/al;

    invoke-direct {v0}, Lcom/tkay/core/common/f/al;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    .line 2227
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    .line 9343
    iget-object v1, v1, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 2227
    invoke-static {v1}, Lcom/tkay/core/common/l/d;->s(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/al;->a(I)V

    .line 2228
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    invoke-static {}, Lcom/tkay/core/common/l/d;->k()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/al;->b(I)V

    .line 2229
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    invoke-static {}, Lcom/tkay/core/common/l/d;->m()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/al;->c(I)V

    .line 2230
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    invoke-static {}, Lcom/tkay/core/common/l/d;->l()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/d;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/al;->d(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2235
    :catchall_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->aa:Lcom/tkay/core/common/f/al;

    return-object v0
.end method

.method public final L()V
    .locals 2

    .line 2257
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/b/m;->ab:J

    return-void
.end method

.method protected final declared-synchronized a(Landroid/content/Context;Ljava/lang/String;I)J
    .locals 11

    monitor-enter p0

    .line 1048
    :try_start_0
    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    const-string v1, "tkay_sdk"

    const-string v2, "SPU_PSID_KEY"

    const-string v3, ""

    .line 1050
    invoke-static {p1, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_sdk"

    const-string v3, "SPU_SESSIONID_KEY"

    const-string v4, ""

    .line 1051
    invoke-static {p1, v2, v3, v4}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_sdk"

    const-string v4, "SPU_INIT_TIME_KEY"

    const-wide/16 v5, 0x0

    .line 1052
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    invoke-static {p1, v3, v4, v7}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    .line 1054
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long v9, v7, v3

    cmp-long v9, v9, v5

    if-gez v9, :cond_0

    move-wide v3, v5

    :cond_0
    sub-long v3, v7, v3

    if-nez p3, :cond_1

    .line 1062
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->N()J

    move-result-wide v9

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->B()I

    move-result v9

    int-to-long v9, v9

    :goto_0
    cmp-long v3, v3, v9

    if-gtz v3, :cond_3

    .line 1063
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "psid updataTime<="

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->N()J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 1064
    iput-object v1, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    .line 1065
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 1066
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    .line 1068
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "psid :"

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1069
    monitor-exit p0

    return-wide v5

    .line 1071
    :cond_3
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "psid updataTime>"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->N()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 1072
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    .line 1074
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 1075
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1076
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    const v2, 0x989680

    invoke-virtual {v1, v2}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    .line 1079
    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    .line 1082
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    iput-object p2, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    const-string p2, "tkay_sdk"

    const-string v0, "SPU_PSID_KEY"

    .line 1084
    iget-object v2, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    invoke-static {p1, p2, v0, v2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "tkay_sdk"

    const-string v0, "SPU_SESSIONID_KEY"

    const-string v2, ""

    .line 1085
    invoke-static {p1, p2, v0, v2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "tkay_sdk"

    const-string v0, "SPU_INIT_TIME_KEY"

    .line 1086
    invoke-static {p1, p2, v0, v7, v8}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    .line 1088
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "psid :"

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x0

    const-string p2, "1"

    .line 1089
    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, p2, v1, v0}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-nez p3, :cond_5

    .line 1091
    iput-wide v7, p0, Lcom/tkay/core/common/b/m;->d:J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1093
    :cond_5
    monitor-exit p0

    return-wide v7

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(I)V
    .locals 1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 290
    iput v0, p0, Lcom/tkay/core/common/b/m;->T:I

    return-void

    :cond_0
    const/4 p1, 0x1

    .line 292
    iput p1, p0, Lcom/tkay/core/common/b/m;->T:I

    return-void
.end method

.method public final a(Landroid/app/Activity;)V
    .locals 1

    .line 1965
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_1

    .line 1966
    :cond_0
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->e:Ljava/lang/ref/WeakReference;

    :cond_1
    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 1

    if-nez p1, :cond_0

    const-string p1, "SDK.init"

    const-string v0, "TYSDK.setContext() is null!"

    .line 336
    invoke-static {p1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 339
    :cond_0
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    return-void
.end method

.method public final a(Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V
    .locals 2

    .line 1852
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->I:Z

    if-nez v0, :cond_1

    const-string p1, "You should init SDK first."

    const-string v0, "tkay"

    .line 1853
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_0

    .line 1855
    invoke-interface {p2, p1}, Lcom/tkay/core/api/DeviceInfoCallback;->deviceInfo(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 1860
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/common/b/m$3;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/ATDebuggerConfig;)V
    .locals 3

    const-string v0, "SDK.init"

    if-nez p1, :cond_1

    .line 818
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "setDebuggerConfig fail, because context is null."

    .line 819
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 824
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    .line 5343
    iget-object v1, v1, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    if-nez v1, :cond_2

    .line 825
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;)V

    .line 828
    :cond_2
    iput-object p2, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    .line 829
    iput-object p3, p0, Lcom/tkay/core/common/b/m;->R:Lcom/tkay/core/api/ATDebuggerConfig;

    .line 5860
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    .line 5861
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p3, :cond_3

    .line 5862
    iget-object p3, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    goto :goto_0

    .line 5867
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object p2

    .line 5868
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    .line 5869
    iget-object p3, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    goto :goto_0

    .line 5874
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 5876
    iget-object p3, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-interface {p2, p1, p3}, Lcom/tkay/core/api/IExHandler;->checkDebuggerDevice(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    goto :goto_0

    :cond_5
    move v2, v1

    .line 831
    :goto_0
    iput-boolean v2, p0, Lcom/tkay/core/common/b/m;->S:Z

    .line 833
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->Q:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_7

    .line 834
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_6

    const-string p1, "Setting Debugger\'s device fail, because deviceId is empty."

    .line 835
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 837
    :cond_6
    iput-boolean v1, p0, Lcom/tkay/core/common/b/m;->S:Z

    return-void

    .line 841
    :cond_7
    iget-boolean p1, p0, Lcom/tkay/core/common/b/m;->S:Z

    if-eqz p1, :cond_a

    .line 842
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_8

    const-string p1, "Setting Debugger\'s device success."

    .line 843
    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 852
    :cond_8
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->R:Lcom/tkay/core/api/ATDebuggerConfig;

    if-eqz p1, :cond_9

    .line 853
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_9

    const-string p1, "Debugger config is in effect now."

    .line 854
    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_9
    return-void

    .line 846
    :cond_a
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p1

    if-eqz p1, :cond_b

    const-string p1, "The incoming device id does not match the current device id, and the debugger mode cannot take effect."

    .line 847
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_b
    return-void
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1697
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/core/common/b/m$2;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;)V
    .locals 8

    monitor-enter p0

    if-nez p1, :cond_0

    .line 616
    monitor-exit p0

    return-void

    .line 619
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 621
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto/16 :goto_0

    .line 625
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->I:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz v0, :cond_2

    .line 626
    monitor-exit p0

    return-void

    :cond_2
    const/4 v0, 0x1

    .line 629
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->I:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 632
    :try_start_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-string v3, "tkay_sdk"

    const-string v4, "tkay_init_time"

    const-wide/16 v5, 0x0

    .line 633
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    invoke-static {p1, v3, v4, v7}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/tkay/core/common/b/m;->D:J

    cmp-long v3, v3, v5

    if-nez v3, :cond_3

    .line 636
    iput-wide v1, p0, Lcom/tkay/core/common/b/m;->D:J

    const-string v3, "tkay_sdk"

    const-string v4, "tkay_init_time"

    .line 637
    invoke-static {p1, v3, v4, v1, v2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    .line 640
    :cond_3
    invoke-static {v1, v2}, Lcom/tkay/core/common/b/m;->a(J)J

    move-result-wide v1

    .line 641
    iget-wide v3, p0, Lcom/tkay/core/common/b/m;->D:J

    invoke-static {v3, v4}, Lcom/tkay/core/common/b/m;->a(J)J

    move-result-wide v3

    sub-long/2addr v1, v3

    const-wide/32 v3, 0x5265c00

    .line 644
    div-long/2addr v1, v3

    const-wide/16 v3, 0x1

    add-long/2addr v1, v3

    iput-wide v1, p0, Lcom/tkay/core/common/b/m;->E:J

    .line 646
    iput-wide v5, p0, Lcom/tkay/core/common/b/m;->d:J

    .line 647
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/a/a;->a()V

    const-string v1, "tkay_sdk"

    const-string v2, "r"

    .line 650
    invoke-static {p1, v1, v2, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/m;->Z:I

    .line 652
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 653
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;)V

    .line 2489
    iput-object p2, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    .line 2490
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v2, "tkay_sdk"

    const-string v3, "tkay_appid"

    invoke-static {v1, v2, v3, p2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 2501
    iput-object p3, p0, Lcom/tkay/core/common/b/m;->m:Ljava/lang/String;

    .line 2502
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v2, "tkay_sdk"

    const-string v3, "tkay_appkey"

    invoke-static {v1, v2, v3, p3}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 656
    invoke-static {}, Lcom/tkay/core/common/l/h;->a()Z

    move-result v1

    .line 2836
    iput-boolean v1, p0, Lcom/tkay/core/common/b/m;->U:Z

    .line 3269
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/e/a;->a(Landroid/content/Context;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 3987
    :try_start_3
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    if-eqz v1, :cond_4

    .line 3988
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 3989
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;)V

    :cond_4
    const/4 v1, 0x0

    .line 3991
    iput-object v1, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 3997
    :catchall_0
    :try_start_4
    new-instance v1, Lcom/tkay/core/common/b/m$10;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/b/m$10;-><init>(Lcom/tkay/core/common/b/m;)V

    iput-object v1, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    .line 4025
    new-instance v1, Landroid/content/IntentFilter;

    invoke-direct {v1}, Landroid/content/IntentFilter;-><init>()V

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 4026
    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "tkay_log_agent"

    .line 4027
    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 4028
    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 4030
    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m;->v:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 661
    :catchall_1
    :try_start_5
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/b/m$6;

    invoke-direct {v2, p0, v0, p2, p1}, Lcom/tkay/core/common/b/m$6;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;Landroid/content/Context;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 695
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/b/m;->e(Landroid/content/Context;)Z

    move-result v1

    .line 697
    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    check-cast v2, Landroid/app/Application;

    new-instance v3, Lcom/tkay/core/common/b/e;

    invoke-direct {v3, v1}, Lcom/tkay/core/common/b/e;-><init>(Z)V

    invoke-virtual {v2, v3}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 701
    new-instance v1, Lcom/tkay/core/common/b/m$7;

    invoke-direct {v1, p0, v0}, Lcom/tkay/core/common/b/m$7;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;)V

    const-wide/16 v2, 0x1388

    invoke-virtual {p0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 4560
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/b/m$1;

    invoke-direct {v2, p0}, Lcom/tkay/core/common/b/m$1;-><init>(Lcom/tkay/core/common/b/m;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 711
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/p;->a(Landroid/content/Context;)V

    .line 713
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/b/m$8;

    invoke-direct {v2, p0, p1, v0}, Lcom/tkay/core/common/b/m$8;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Landroid/content/Context;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 730
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$9;

    invoke-direct {v1, p0, p4}, Lcom/tkay/core/common/b/m$9;-><init>(Lcom/tkay/core/common/b/m;Lcom/tkay/core/api/TYNetworkConfig;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 5133
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p4

    invoke-virtual {p0, p4, p2, p3}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 5135
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p3

    new-instance p4, Lcom/tkay/core/common/b/m$11;

    invoke-direct {p4, p0, p1, p2}, Lcom/tkay/core/common/b/m$11;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {p3, p4}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 741
    monitor-exit p0

    return-void

    .line 742
    :catch_0
    monitor-exit p0

    return-void

    .line 622
    :cond_5
    :goto_0
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 1262
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    const-string v1, "tkay"

    if-eqz v0, :cond_0

    .line 1263
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Requesting placement("

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") setting Info,please wait a moment."

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1264
    new-instance v0, Lcom/tkay/core/common/h/l;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v5

    new-instance v9, Ljava/util/HashMap;

    const/4 v1, 0x1

    invoke-direct {v9, v1}, Ljava/util/HashMap;-><init>(I)V

    const-string v7, ""

    move-object v2, v0

    move-object v3, p1

    move-object v6, p2

    move-object v8, p3

    invoke-direct/range {v2 .. v9}, Lcom/tkay/core/common/h/l;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    const/4 p1, 0x0

    .line 1265
    new-instance p3, Lcom/tkay/core/common/b/m$13;

    invoke-direct {p3, p0, p2}, Lcom/tkay/core/common/b/m$13;-><init>(Lcom/tkay/core/common/b/m;Ljava/lang/String;)V

    invoke-virtual {v0, p1, p3}, Lcom/tkay/core/common/h/l;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    .line 1311
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p3, "********************************** Get Splash Config Start("

    invoke-direct {p1, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ") *************************************"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "Only use in debug mode!"

    .line 1312
    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1313
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "********************************** Get Splash Config End("

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final declared-synchronized a(Landroid/location/Location;)V
    .locals 0

    monitor-enter p0

    .line 542
    :try_start_0
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->L:Landroid/location/Location;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 543
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/api/ATPrivacyConfig;)V
    .locals 0

    .line 2207
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->Y:Lcom/tkay/core/api/ATPrivacyConfig;

    return-void
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 2

    .line 1708
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 1709
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    return-void

    .line 1711
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->n:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Ljava/lang/Runnable;J)V
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    if-gtz v0, :cond_0

    .line 1720
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 1721
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    return-void

    .line 1723
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->n:Landroid/os/Handler;

    invoke-virtual {v0, p1, p2, p3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 246
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->o:Ljava/lang/String;

    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;Lcom/tkay/core/api/TYCustomAdapterConfig;)V
    .locals 1

    monitor-enter p0

    .line 260
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 261
    monitor-exit p0

    return-void

    .line 264
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_1

    .line 265
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_1
    if-nez p2, :cond_2

    .line 270
    iget-object p2, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 271
    monitor-exit p0

    return-void

    .line 274
    :cond_2
    :try_start_2
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 275
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 1912
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v7, Lcom/tkay/core/common/b/m$4;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p3

    move-object v5, p2

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/common/b/m$4;-><init>(Lcom/tkay/core/common/b/m;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1819
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->P:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    if-eqz p2, :cond_0

    .line 395
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public final varargs a(Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;[",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    const-string v0, "tkay_tracking_info"

    if-eqz p2, :cond_2

    const-string v1, "tkay_local"

    .line 2113
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    .line 2119
    :try_start_0
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-object v2, v1

    .line 2123
    :goto_0
    invoke-interface {p2, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 2125
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    .line 2127
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "Mismatched initialization parameters! server params: ["

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "], "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "tkay"

    invoke-static {v3, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 2130
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v3, "tkay_network_init_data"

    invoke-static {v0, v3, p1, p2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v2, :cond_2

    if-eqz p3, :cond_2

    const/4 p1, 0x0

    .line 2135
    :try_start_1
    aget-object p1, p3, p1

    .line 2138
    array-length p2, p3

    const/4 v0, 0x1

    if-le p2, v0, :cond_1

    .line 2139
    aget-object v1, p3, v0

    .line 2142
    :cond_1
    invoke-static {v2, p1, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 2145
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 408
    :try_start_0
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->O:Ljava/util/List;

    if-eqz p1, :cond_0

    .line 409
    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 410
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->N:Lorg/json/JSONArray;

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 412
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->N:Lorg/json/JSONArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public final a(Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    const-string v1, ""

    const-string v2, "channel"

    if-eqz p1, :cond_1

    .line 360
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 361
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 362
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_0
    move-object v3, v1

    :goto_0
    iput-object v3, p0, Lcom/tkay/core/common/b/m;->F:Ljava/lang/String;

    .line 364
    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 365
    iput-object v0, p0, Lcom/tkay/core/common/b/m;->F:Ljava/lang/String;

    .line 366
    invoke-interface {p1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    const-string v3, "sub_channel"

    if-eqz p1, :cond_3

    .line 370
    invoke-interface {p1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 371
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 372
    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_2
    iput-object v1, p0, Lcom/tkay/core/common/b/m;->G:Ljava/lang/String;

    .line 374
    invoke-static {v1}, Lcom/tkay/core/common/l/g;->b(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 375
    iput-object v0, p0, Lcom/tkay/core/common/b/m;->G:Ljava/lang/String;

    .line 376
    invoke-interface {p1, v3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 380
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    if-eqz p1, :cond_4

    .line 382
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->putAll(Ljava/util/Map;)V

    .line 385
    :cond_4
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->F:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 386
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v0, p0, Lcom/tkay/core/common/b/m;->F:Ljava/lang/String;

    invoke-virtual {p1, v2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 388
    :cond_5
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->G:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 389
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v0, p0, Lcom/tkay/core/common/b/m;->G:Ljava/lang/String;

    invoke-virtual {p1, v3, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_6
    return-void
.end method

.method public final declared-synchronized a(Z)V
    .locals 0

    monitor-enter p0

    if-eqz p1, :cond_0

    :try_start_0
    const-string p1, "1"

    goto :goto_0

    :cond_0
    const-string p1, "2"

    .line 546
    :goto_0
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->M:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 547
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final varargs declared-synchronized a([Ljava/lang/String;)V
    .locals 5

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 302
    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;

    .line 303
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p1, v1

    .line 304
    iget-object v3, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;

    sget-object v4, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {v3, v2, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 303
    :cond_0
    monitor-exit p0

    return-void

    :cond_1
    const/4 p1, 0x0

    .line 307
    :try_start_1
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 309
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a([Ljava/lang/String;Lcom/tkay/core/api/ITYAdFilter;)V
    .locals 4

    .line 2151
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->W:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    .line 2152
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    :cond_0
    if-eqz p1, :cond_3

    .line 2154
    array-length v0, p1

    if-gtz v0, :cond_1

    goto :goto_1

    .line 2158
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->W:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_2

    .line 2159
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->W:Ljava/util/concurrent/ConcurrentHashMap;

    .line 2161
    :cond_2
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_3

    aget-object v2, p1, v1

    .line 2162
    iget-object v3, p0, Lcom/tkay/core/common/b/m;->W:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, v2, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    return-void
.end method

.method public final declared-synchronized b()Lcom/tkay/core/api/IExHandler;
    .locals 3

    monitor-enter p0

    .line 201
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->i:Z

    if-eqz v0, :cond_0

    .line 202
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->z:Lcom/tkay/core/api/IExHandler;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v0, 0x1

    :try_start_1
    const-string v1, "com.tkay.pd.ExHandler"

    .line 206
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-class v2, Lcom/tkay/core/api/IExHandler;

    .line 207
    invoke-virtual {v1, v2}, Ljava/lang/Class;->asSubclass(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object v1

    const/4 v2, 0x0

    .line 208
    check-cast v2, [Ljava/lang/Class;

    invoke-virtual {v1, v2}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v1

    .line 209
    invoke-virtual {v1, v0}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    .line 210
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/api/IExHandler;

    iput-object v1, p0, Lcom/tkay/core/common/b/m;->z:Lcom/tkay/core/api/IExHandler;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 215
    :catch_0
    :try_start_2
    iput-boolean v0, p0, Lcom/tkay/core/common/b/m;->i:Z

    .line 216
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->z:Lcom/tkay/core/api/IExHandler;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/core/api/TYCustomAdapterConfig;
    .locals 1

    .line 282
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 285
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/api/TYCustomAdapterConfig;

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final b(I)V
    .locals 0

    .line 801
    iput p1, p0, Lcom/tkay/core/common/b/m;->f:I

    return-void
.end method

.method public final b(Landroid/content/Context;)V
    .locals 2

    .line 1157
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 1160
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$12;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/b/m$12;-><init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1827
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->P:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_network_firm"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 1775
    iput-boolean p1, p0, Lcom/tkay/core/common/b/m;->C:Z

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 250
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final c(I)V
    .locals 0

    .line 2219
    iput p1, p0, Lcom/tkay/core/common/b/m;->Z:I

    return-void
.end method

.method public final c(Ljava/lang/Runnable;)V
    .locals 1

    .line 1728
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->n:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 1811
    iput-boolean p1, p0, Lcom/tkay/core/common/b/m;->H:Z

    return-void
.end method

.method public final declared-synchronized c(Ljava/lang/String;)Z
    .locals 1

    monitor-enter p0

    .line 312
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    .line 313
    monitor-exit p0

    return p1

    .line 316
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final d()I
    .locals 1

    .line 297
    iget v0, p0, Lcom/tkay/core/common/b/m;->T:I

    return v0
.end method

.method public final d(I)J
    .locals 4

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const-wide/32 v0, 0x1900000

    return-wide v0

    .line 2248
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    invoke-static {}, Lcom/tkay/core/c/b;->a()J

    move-result-wide v0

    const-wide/16 v2, 0x400

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public final d(Ljava/lang/String;)Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 434
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 435
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    .line 436
    iget-object v1, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_0

    .line 437
    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    :cond_0
    if-eqz p1, :cond_1

    .line 440
    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    :cond_1
    const-string p1, "channel"

    .line 444
    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "sub_channel"

    .line 445
    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 447
    iget-object v2, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 448
    iget-object v3, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v2, :cond_2

    .line 451
    invoke-interface {v0, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    if-eqz v3, :cond_3

    .line 455
    invoke-interface {v0, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    return-object v0
.end method

.method public final d(Z)V
    .locals 0

    .line 1844
    iput-boolean p1, p0, Lcom/tkay/core/common/b/m;->V:Z

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 2

    .line 467
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->F:Ljava/lang/String;

    .line 468
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "channel"

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final declared-synchronized e()[Ljava/lang/String;
    .locals 2

    monitor-enter p0

    .line 320
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 321
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->s:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 322
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 325
    new-array v1, v1, [Ljava/lang/String;

    .line 326
    invoke-interface {v0, v1}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 328
    monitor-exit p0

    return-object v1

    :cond_0
    const/4 v0, 0x0

    .line 331
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final f()Landroid/content/Context;
    .locals 1

    .line 343
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    return-object v0
.end method

.method public final f(Ljava/lang/String;)V
    .locals 2

    .line 477
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->G:Ljava/lang/String;

    .line 478
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "sub_channel"

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final g()J
    .locals 2

    .line 347
    iget-wide v0, p0, Lcom/tkay/core/common/b/m;->D:J

    return-wide v0
.end method

.method public final g(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 525
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    return-object p1

    .line 529
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->u:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 531
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 532
    invoke-direct {p0, p1}, Lcom/tkay/core/common/b/m;->u(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 534
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ": sessionid exists."

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    return-object v0
.end method

.method public final h()J
    .locals 2

    .line 351
    iget-wide v0, p0, Lcom/tkay/core/common/b/m;->E:J

    return-wide v0
.end method

.method public final i()I
    .locals 1

    .line 355
    iget v0, p0, Lcom/tkay/core/common/b/m;->f:I

    return v0
.end method

.method public final i(Ljava/lang/String;)V
    .locals 3

    .line 1759
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->x:Ljava/lang/String;

    .line 1760
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "exc_log"

    const-string v2, "exc_sys"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final j()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 422
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->O:Ljava/util/List;

    return-object v0
.end method

.method public final j(Ljava/lang/String;)V
    .locals 3

    .line 1764
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->y:Ljava/lang/String;

    .line 1765
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "exc_log"

    const-string v2, "exc_bk"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final k()Lorg/json/JSONArray;
    .locals 1

    .line 426
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->N:Lorg/json/JSONArray;

    return-object v0
.end method

.method public final k(Ljava/lang/String;)V
    .locals 3

    .line 1770
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "UP_ID"

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1771
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->w:Ljava/lang/String;

    return-void
.end method

.method public final l(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1823
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->P:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1
.end method

.method public final l()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 430
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public final m()Ljava/lang/String;
    .locals 2

    .line 462
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "channel"

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 463
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final m(Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1831
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->P:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_network_firm"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1
.end method

.method public final n()Ljava/lang/String;
    .locals 2

    .line 472
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->p:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "sub_channel"

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 473
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final o(Ljava/lang/String;)Lcom/tkay/core/api/ITYAdFilter;
    .locals 2

    .line 2167
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    .line 2171
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->W:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_1

    return-object v1

    .line 2175
    :cond_1
    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/api/ITYAdFilter;

    return-object p1
.end method

.method public final o()Ljava/lang/String;
    .locals 4

    .line 482
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 483
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "tkay_appid"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    .line 485
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final p()Ljava/lang/String;
    .locals 4

    .line 494
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 495
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "tkay_appkey"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->m:Ljava/lang/String;

    .line 497
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->m:Ljava/lang/String;

    return-object v0
.end method

.method public final p(Ljava/lang/String;)V
    .locals 0

    .line 2184
    iput-object p1, p0, Lcom/tkay/core/common/b/m;->X:Ljava/lang/String;

    return-void
.end method

.method public final q()Ljava/lang/String;
    .locals 3

    .line 508
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2343
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    .line 509
    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;I)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 514
    :catch_0
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->t:Ljava/lang/String;

    return-object v0
.end method

.method public final r()Landroid/location/Location;
    .locals 1

    .line 550
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->L:Landroid/location/Location;

    return-object v0
.end method

.method public final s()Ljava/lang/String;
    .locals 1

    .line 554
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->M:Ljava/lang/String;

    return-object v0
.end method

.method public final t()Z
    .locals 1

    .line 813
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->S:Z

    return v0
.end method

.method public final u()Z
    .locals 1

    .line 887
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->S:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/b/m;->R:Lcom/tkay/core/api/ATDebuggerConfig;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final v()Lcom/tkay/core/api/ATDebuggerConfig;
    .locals 1

    .line 891
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->R:Lcom/tkay/core/api/ATDebuggerConfig;

    return-object v0
.end method

.method public final w()Ljava/lang/String;
    .locals 4

    .line 1737
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->w:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1738
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "tkay_sdk"

    const-string v2, "UP_ID"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->w:Ljava/lang/String;

    .line 1740
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->w:Ljava/lang/String;

    return-object v0
.end method

.method public final x()Ljava/lang/String;
    .locals 4

    .line 1745
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->x:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1746
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "exc_log"

    const-string v2, "exc_sys"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->x:Ljava/lang/String;

    .line 1748
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->x:Ljava/lang/String;

    return-object v0
.end method

.method public final y()Ljava/lang/String;
    .locals 4

    .line 1752
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->y:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1753
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->k:Landroid/content/Context;

    const-string v1, "exc_log"

    const-string v2, "exc_bk"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/m;->y:Ljava/lang/String;

    .line 1755
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m;->y:Ljava/lang/String;

    return-object v0
.end method

.method public final z()Z
    .locals 1

    .line 1795
    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->B:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/core/common/b/m;->C:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method
