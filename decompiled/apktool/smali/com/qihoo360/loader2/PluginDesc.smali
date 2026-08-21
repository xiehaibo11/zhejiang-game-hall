.class public Lcom/qihoo360/loader2/PluginDesc;
.super Ljava/lang/Object;
.source "PluginDesc.java"


# static fields
.field public static final ACTION_UPDATE:Ljava/lang/String; = "com.qihoo360.mobilesafe.plugin_desc_update"

.field private static final DEBUG:Z

.field private static final INSTANCE_LOCKER:[B

.field private static final REG_RECEIVER_LOCKER:[B

.field private static final TAG:Ljava/lang/String;

.field private static volatile sChanged:Z

.field private static volatile sMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginDesc;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile sUpdateReceiver:Landroid/content/BroadcastReceiver;


# instance fields
.field private mDesc:Ljava/lang/String;

.field private mDisplay:Ljava/lang/String;

.field private mLarge:Z

.field private mPlugin:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 49
    const-class v0, Lcom/qihoo360/loader2/PluginDesc;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/PluginDesc;->TAG:Ljava/lang/String;

    .line 50
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    sput-boolean v0, Lcom/qihoo360/loader2/PluginDesc;->DEBUG:Z

    const/4 v0, 0x0

    new-array v1, v0, [B

    .line 52
    sput-object v1, Lcom/qihoo360/loader2/PluginDesc;->INSTANCE_LOCKER:[B

    new-array v0, v0, [B

    .line 55
    sput-object v0, Lcom/qihoo360/loader2/PluginDesc;->REG_RECEIVER_LOCKER:[B

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 95
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginDesc;->mPlugin:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000()Z
    .locals 1

    .line 48
    sget-boolean v0, Lcom/qihoo360/loader2/PluginDesc;->DEBUG:Z

    return v0
.end method

.method static synthetic access$100()Ljava/lang/String;
    .locals 1

    .line 48
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$202(Z)Z
    .locals 0

    .line 48
    sput-boolean p0, Lcom/qihoo360/loader2/PluginDesc;->sChanged:Z

    return p0
.end method

.method static synthetic access$300()Ljava/util/HashMap;
    .locals 1

    .line 48
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->getCurrentMap()Ljava/util/HashMap;

    move-result-object v0

    return-object v0
.end method

.method public static get(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginDesc;
    .locals 1

    .line 71
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->getCurrentMap()Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/loader2/PluginDesc;

    return-object p0
.end method

.method private static getCurrentMap()Ljava/util/HashMap;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginDesc;",
            ">;"
        }
    .end annotation

    .line 75
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->registerReceiverIfNeeded()V

    .line 76
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/qihoo360/loader2/PluginDesc;->sChanged:Z

    if-nez v0, :cond_0

    .line 77
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    return-object v0

    .line 79
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->INSTANCE_LOCKER:[B

    monitor-enter v0

    .line 80
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    if-eqz v1, :cond_1

    sget-boolean v1, Lcom/qihoo360/loader2/PluginDesc;->sChanged:Z

    if-nez v1, :cond_1

    .line 81
    sget-object v1, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    monitor-exit v0

    return-object v1

    .line 83
    :cond_1
    sget-boolean v1, Lcom/qihoo360/loader2/PluginDesc;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 84
    sget-object v1, Lcom/qihoo360/loader2/PluginDesc;->TAG:Ljava/lang/String;

    const-string v2, "load(): Change, Ready to load"

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 86
    :cond_2
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    .line 87
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/qihoo360/loader2/PluginDesc;->load(Landroid/content/Context;)Z

    const/4 v1, 0x0

    .line 89
    sput-boolean v1, Lcom/qihoo360/loader2/PluginDesc;->sChanged:Z

    .line 90
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 91
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    return-object v0

    :catchall_0
    move-exception v1

    .line 90
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method private static load(Landroid/content/Context;)Z
    .locals 5

    .line 133
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginDesc;->loadArray(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 137
    :cond_0
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_3

    .line 138
    invoke-virtual {p0, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    goto :goto_1

    :cond_1
    const-string v2, "name"

    .line 142
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 143
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_1

    .line 147
    :cond_2
    new-instance v3, Lcom/qihoo360/loader2/PluginDesc;

    invoke-direct {v3, v2}, Lcom/qihoo360/loader2/PluginDesc;-><init>(Ljava/lang/String;)V

    const-string v4, "display"

    .line 148
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/qihoo360/loader2/PluginDesc;->mDisplay:Ljava/lang/String;

    const-string v4, "desc"

    .line 149
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/qihoo360/loader2/PluginDesc;->mDesc:Ljava/lang/String;

    const-string v4, "large"

    .line 150
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    iput-boolean v1, v3, Lcom/qihoo360/loader2/PluginDesc;->mLarge:Z

    .line 151
    sget-object v1, Lcom/qihoo360/loader2/PluginDesc;->sMap:Ljava/util/HashMap;

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    const/4 p0, 0x1

    return p0
.end method

.method private static loadArray(Landroid/content/Context;)Lorg/json/JSONArray;
    .locals 5

    const/4 v0, 0x0

    .line 162
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v1

    const-string v2, "plugins-list.json"

    invoke-virtual {v1, p0, v2}, Lcom/qihoo360/replugin/RePluginCallbacks;->openLatestFile(Landroid/content/Context;Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    .line 164
    :try_start_1
    sget-object v1, Lcom/qihoo360/replugin/utils/Charsets;->UTF_8:Ljava/nio/charset/Charset;

    invoke-static {p0, v1}, Lcom/qihoo360/replugin/utils/IOUtils;->toString(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object v1

    .line 165
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2, v1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 172
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v2

    :catch_0
    move-exception v1

    goto :goto_0

    :catchall_0
    move-exception p0

    move-object v4, v0

    move-object v0, p0

    move-object p0, v4

    goto :goto_1

    :catch_1
    move-exception v1

    move-object p0, v0

    .line 168
    :goto_0
    :try_start_2
    sget-boolean v2, Lcom/qihoo360/loader2/PluginDesc;->DEBUG:Z

    if-eqz v2, :cond_0

    .line 169
    sget-object v2, Lcom/qihoo360/loader2/PluginDesc;->TAG:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 172
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_1
    move-exception v0

    :goto_1
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method private static registerReceiverIfNeeded()V
    .locals 4

    .line 179
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->sUpdateReceiver:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    return-void

    .line 182
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PluginDesc;->REG_RECEIVER_LOCKER:[B

    monitor-enter v0

    .line 183
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginDesc;->sUpdateReceiver:Landroid/content/BroadcastReceiver;

    if-eqz v1, :cond_1

    .line 184
    monitor-exit v0

    return-void

    .line 186
    :cond_1
    new-instance v1, Lcom/qihoo360/loader2/PluginDesc$1;

    invoke-direct {v1}, Lcom/qihoo360/loader2/PluginDesc$1;-><init>()V

    sput-object v1, Lcom/qihoo360/loader2/PluginDesc;->sUpdateReceiver:Landroid/content/BroadcastReceiver;

    .line 198
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "com.qihoo360.mobilesafe.plugin_desc_update"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 199
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object v2

    .line 200
    sget-object v3, Lcom/qihoo360/loader2/PluginDesc;->sUpdateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v1}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 201
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method


# virtual methods
.method public getDescription()Ljava/lang/String;
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mDesc:Ljava/lang/String;

    return-object v0
.end method

.method public getDisplayName()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mDisplay:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 111
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mDisplay:Ljava/lang/String;

    return-object v0

    .line 114
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mPlugin:Ljava/lang/String;

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mPlugin:Ljava/lang/String;

    return-object v0
.end method

.method public isLarge()Z
    .locals 1

    .line 129
    iget-boolean v0, p0, Lcom/qihoo360/loader2/PluginDesc;->mLarge:Z

    return v0
.end method
