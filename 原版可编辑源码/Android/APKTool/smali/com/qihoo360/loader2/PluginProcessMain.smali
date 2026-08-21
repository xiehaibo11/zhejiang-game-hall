.class public Lcom/qihoo360/loader2/PluginProcessMain;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/PluginProcessMain$Action;,
        Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;
    }
.end annotation


# static fields
.field private static final ALL:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;",
            ">;"
        }
    .end annotation
.end field

.field private static final COOKIE_LOCK:Ljava/lang/Object;

.field private static final PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

.field public static final TAG:Ljava/lang/String;

.field static sBinders:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field private static sPersisistCookie:J

.field private static sPersisistCookieInitialized:Z

.field private static sPluginHostLocal:Lcom/qihoo360/loader2/IPluginHost;

.field private static sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 57
    const-class v0, Lcom/qihoo360/loader2/PluginProcessMain;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    .line 70
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    .line 74
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->ALL:Ljava/util/Map;

    .line 78
    new-instance v0, Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    .line 79
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->COOKIE_LOCK:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
    .locals 0

    .line 55
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->handleBinderDied(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V

    return-void
.end method

.method static synthetic access$102(Lcom/qihoo360/loader2/IPluginHost;)Lcom/qihoo360/loader2/IPluginHost;
    .locals 0

    .line 55
    sput-object p0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    return-object p0
.end method

.method static synthetic access$200()Ljava/util/Map;
    .locals 1

    .line 55
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->ALL:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$300(I)Ljava/lang/String;
    .locals 0

    .line 55
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->getProcessStringByIndex(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z
    .locals 0

    .line 55
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->isBinderAlive(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result p0

    return p0
.end method

.method static final allocProcess(Ljava/lang/String;I)I
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string v0, "ui"

    .line 549
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, -0x1

    if-nez v0, :cond_4

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 553
    :cond_0
    invoke-static {p1}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->isCustomPluginProcess(I)Z

    move-result v0

    if-eqz v0, :cond_1

    return p1

    .line 557
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginTable;->getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    if-nez p1, :cond_3

    .line 559
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    .line 560
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "alloc process: plugin not found: name="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/high16 p0, -0x80000000

    return p0

    .line 564
    :cond_3
    invoke-static {p0}, Lcom/qihoo360/loader2/StubProcessManager;->allocProcess(Ljava/lang/String;)I

    move-result p0

    return p0

    :cond_4
    :goto_0
    return v1
.end method

.method static final attachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 606
    invoke-static {p0, p1, p2, p3, p4}, Lcom/qihoo360/loader2/StubProcessManager;->attachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static final attachBinder(ILandroid/os/IBinder;)V
    .locals 0

    .line 644
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->attachBinder(ILandroid/os/IBinder;)V

    return-void
.end method

.method static final attachProcess(ILjava/lang/String;ILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/lang/String;
    .locals 9

    .line 578
    invoke-static {p0, p2, p3, p4, p5}, Lcom/qihoo360/loader2/PluginProcessMain;->getDefaultPluginName(IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p5

    .line 579
    new-instance v8, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    move-object v0, v8

    move-object v1, p1

    move-object v2, p5

    move v3, p0

    move v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p6

    invoke-direct/range {v0 .. v7}, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;-><init>(Ljava/lang/String;Ljava/lang/String;IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Lcom/qihoo360/replugin/packages/PluginManagerServer;)V

    .line 581
    :try_start_0
    iget-object p0, v8, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    const/4 p1, 0x0

    invoke-interface {p0, v8, p1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 584
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "ap l2d: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ws001"

    invoke-static {p2, p1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 587
    :goto_0
    new-instance p0, Lcom/qihoo360/loader2/PluginProcessMain$8;

    invoke-direct {p0, v8}, Lcom/qihoo360/loader2/PluginProcessMain$8;-><init>(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V

    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->writeProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    return-object p5
.end method

.method static final attachService(IILjava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 629
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/loader2/StubProcessManager;->attachService(IILjava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static final connectToHostSvc()V
    .locals 6

    .line 232
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 233
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostBinder(Landroid/content/Context;)Landroid/os/IBinder;

    move-result-object v0

    .line 234
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v2, "ws001"

    if-eqz v1, :cond_0

    .line 235
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "host binder = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v1, 0x1

    if-nez v0, :cond_1

    const-string v3, "p.p fhb fail"

    .line 240
    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 242
    invoke-static {v1}, Ljava/lang/System;->exit(I)V

    .line 245
    :cond_1
    :try_start_0
    new-instance v3, Lcom/qihoo360/loader2/PluginProcessMain$1;

    invoke-direct {v3}, Lcom/qihoo360/loader2/PluginProcessMain$1;-><init>()V

    const/4 v4, 0x0

    invoke-interface {v0, v3, v4}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 268
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "p.p p.h l2a: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4, v3}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 270
    invoke-static {v1}, Ljava/lang/System;->exit(I)V

    .line 274
    :goto_0
    invoke-static {v0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    .line 275
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 276
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "host binder.i = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 282
    :cond_2
    :try_start_1
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    invoke-static {v0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->connectToServer(Lcom/qihoo360/loader2/IPluginHost;)V

    .line 286
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->syncRunningPlugins()V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 290
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "p.p p.h l3a: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 292
    invoke-static {v1}, Ljava/lang/System;->exit(I)V

    .line 296
    :goto_1
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PmBase;->attach()V

    return-void
.end method

.method static final detachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 618
    invoke-static {p0, p1, p2, p3, p4}, Lcom/qihoo360/loader2/StubProcessManager;->detachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static final detachBinder(ILandroid/os/IBinder;)V
    .locals 0

    .line 648
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->detachBinder(ILandroid/os/IBinder;)V

    return-void
.end method

.method static final detachService(IILjava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 640
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/loader2/StubProcessManager;->detachService(IILjava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static final dump()Ljava/lang/String;
    .locals 9

    .line 129
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 130
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 132
    sget-object v2, Lcom/qihoo360/loader2/PluginProcessMain;->ALL:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 134
    :try_start_0
    invoke-virtual {v3}, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->getClient()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v3

    if-nez v3, :cond_1

    goto :goto_0

    .line 139
    :cond_1
    invoke-interface {v3}, Lcom/qihoo360/loader2/IPluginClient;->dumpActivities()Ljava/lang/String;

    move-result-object v5

    .line 140
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 141
    new-instance v6, Lorg/json/JSONArray;

    invoke-direct {v6, v5}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 142
    invoke-virtual {v6}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-lez v5, :cond_2

    move v7, v4

    :goto_1
    if-ge v7, v5, :cond_2

    .line 145
    invoke-virtual {v6, v7}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v8

    invoke-virtual {v0, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 150
    :cond_2
    invoke-interface {v3}, Lcom/qihoo360/loader2/IPluginClient;->dumpServices()Ljava/lang/String;

    move-result-object v3

    .line 151
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    .line 152
    new-instance v5, Lorg/json/JSONArray;

    invoke-direct {v5, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 153
    invoke-virtual {v5}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_0

    :goto_2
    if-ge v4, v3, :cond_0

    .line 156
    invoke-virtual {v5, v4}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v6

    invoke-virtual {v1, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v4, v4, 0x1

    goto :goto_2

    :catchall_0
    move-exception v3

    .line 161
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 166
    :cond_3
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 167
    invoke-static {v4}, Lcom/qihoo360/loader2/MP;->getPlugins(Z)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 170
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_3
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 172
    :try_start_1
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    .line 173
    invoke-virtual {v4}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4}, Lcom/qihoo360/replugin/model/PluginInfo;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 174
    invoke-virtual {v2, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception v4

    .line 176
    invoke-virtual {v4}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_3

    .line 181
    :cond_4
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    :try_start_2
    const-string v4, "activity"

    .line 183
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "service"

    .line 184
    invoke-virtual {v3, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "plugin"

    .line 185
    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    .line 187
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 190
    :goto_4
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static final dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 2

    .line 194
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->DUMP_ENABLED:Z

    if-eqz v0, :cond_1

    .line 195
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "--- ALL.length = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/loader2/PluginProcessMain;->ALL:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " ---"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 196
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->ALL:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 197
    invoke-virtual {p1, v1}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    goto :goto_0

    .line 199
    :cond_0
    invoke-virtual {p1}, Ljava/io/PrintWriter;->println()V

    .line 200
    invoke-static {p1}, Lcom/qihoo360/loader2/StubProcessManager;->dump(Ljava/io/PrintWriter;)V

    .line 201
    invoke-virtual {p1}, Ljava/io/PrintWriter;->println()V

    .line 206
    invoke-virtual {p1}, Ljava/io/PrintWriter;->println()V

    .line 207
    invoke-static {p0, p1, p2}, Lcom/qihoo360/loader2/PluginTable;->dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static final getDefaultPluginName(IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    const-string p0, "ui"

    return-object p0

    .line 721
    :cond_0
    invoke-static {p1}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->isCustomPluginProcess(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 722
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginProcessMain;->getProcessStringByIndex(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 724
    :cond_1
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess(I)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 725
    invoke-static {p0, p1, p2, p3, p4}, Lcom/qihoo360/loader2/StubProcessManager;->attachStubProcess(IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method static final getPersistentCookie()J
    .locals 5

    .line 322
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->COOKIE_LOCK:Ljava/lang/Object;

    monitor-enter v0

    .line 323
    :try_start_0
    sget-boolean v1, Lcom/qihoo360/loader2/PluginProcessMain;->sPersisistCookieInitialized:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 324
    sput-boolean v1, Lcom/qihoo360/loader2/PluginProcessMain;->sPersisistCookieInitialized:Z

    .line 325
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 326
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sput-wide v1, Lcom/qihoo360/loader2/PluginProcessMain;->sPersisistCookie:J

    .line 327
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    const-string v1, "ws001"

    .line 328
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "generate cookie: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v3, Lcom/qihoo360/loader2/PluginProcessMain;->sPersisistCookie:J

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 332
    :cond_0
    sget-wide v1, Lcom/qihoo360/loader2/PluginProcessMain;->sPersisistCookie:J

    monitor-exit v0

    return-wide v1

    :catchall_0
    move-exception v1

    .line 333
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method static final getPidByProcessName(Ljava/lang/String;)I
    .locals 1

    .line 657
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, -0x1

    return p0

    .line 661
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 662
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessId()I

    move-result p0

    return p0

    .line 665
    :cond_1
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$9;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$9;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0
.end method

.method public static final getPluginHost()Lcom/qihoo360/loader2/IPluginHost;
    .locals 2

    .line 304
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostLocal:Lcom/qihoo360/loader2/IPluginHost;

    if-eqz v0, :cond_0

    return-object v0

    .line 308
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    if-nez v0, :cond_3

    .line 309
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 310
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "\u63d2\u4ef6\u6846\u67b6\u672a\u6b63\u5e38\u521d\u59cb\u5316"

    const-string v1, "ws001"

    .line 311
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 312
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 316
    :cond_2
    :goto_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->connectToHostSvc()V

    .line 318
    :cond_3
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostRemote:Lcom/qihoo360/loader2/IPluginHost;

    return-object v0
.end method

.method static final getProcessNameByPid(I)Ljava/lang/String;
    .locals 1

    .line 680
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessId()I

    move-result v0

    if-ne p0, v0, :cond_0

    .line 681
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 683
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$10;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$10;-><init>(I)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method private static getProcessStringByIndex(I)Ljava/lang/String;
    .locals 2

    .line 384
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ":p"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 p0, p0, 0x64

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static final handleBinderDied(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
    .locals 2

    .line 701
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 702
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "plugin process has died: plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " index="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->index:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 704
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->handleBinderDiedLocked(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V

    return-void
.end method

.method private static final handleBinderDiedLocked(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 739
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$11;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$11;-><init>(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->writeProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    .line 750
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    invoke-static {v0}, Lcom/qihoo360/loader2/StubProcessManager;->setProcessStop(Landroid/os/IBinder;)V

    .line 753
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pluginManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    iget-object p0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->onClientProcessKilled(Ljava/lang/String;)V

    return-void
.end method

.method static final installHost(Lcom/qihoo360/loader2/IPluginHost;)V
    .locals 0

    .line 215
    sput-object p0, Lcom/qihoo360/loader2/PluginProcessMain;->sPluginHostLocal:Lcom/qihoo360/loader2/IPluginHost;

    .line 219
    :try_start_0
    invoke-static {p0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->connectToServer(Lcom/qihoo360/loader2/IPluginHost;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 223
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static isBinderAlive(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z
    .locals 1

    if-eqz p0, :cond_0

    .line 510
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    invoke-interface {p0}, Landroid/os/IBinder;->isBinderAlive()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method static final isProcessAlive(Ljava/lang/String;)Z
    .locals 1

    .line 497
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 500
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$6;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$6;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0
.end method

.method static final probePluginClient(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 1

    .line 343
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$2;

    invoke-direct {v0, p1, p0, p2}, Lcom/qihoo360/loader2/PluginProcessMain$2;-><init>(ILjava/lang/String;Lcom/qihoo360/loader2/PluginBinderInfo;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/loader2/IPluginClient;

    return-object p0
.end method

.method static final probePluginClientByPid(ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 1

    .line 393
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$3;

    invoke-direct {v0, p0, p1}, Lcom/qihoo360/loader2/PluginProcessMain$3;-><init>(ILcom/qihoo360/loader2/PluginBinderInfo;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/loader2/IPluginClient;

    return-object p0
.end method

.method private static readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
            "TT;>;)TT;"
        }
    .end annotation

    const-string v0, "%s(%sms@%s) READING DONE"

    .line 776
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, 0x0

    const/4 v6, 0x3

    .line 779
    :try_start_0
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->readLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;->lock()V

    .line 780
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_0

    .line 781
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    const-string v8, "%s(%sms@%s) READING"

    new-array v9, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v10

    aget-object v10, v10, v6

    aput-object v10, v9, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    sub-long/2addr v10, v1

    invoke-static {v10, v11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v10

    aput-object v10, v9, v3

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 783
    :cond_0
    invoke-interface {p0}, Lcom/qihoo360/loader2/PluginProcessMain$Action;->call()Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 785
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->readLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;->unlock()V

    .line 786
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_1

    .line 787
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    new-array v8, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v9

    aget-object v6, v9, v6

    aput-object v6, v8, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v1

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v8, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    aput-object v1, v8, v3

    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object p0

    :catchall_0
    move-exception p0

    .line 785
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->readLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;->unlock()V

    .line 786
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_2

    .line 787
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    new-array v8, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v9

    aget-object v6, v9, v6

    aput-object v6, v8, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v1

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v8, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    aput-object v1, v8, v3

    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    throw p0
.end method

.method private static sendIntent2Client(Ljava/util/Map;Landroid/content/Intent;Z)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;",
            ">;",
            "Landroid/content/Intent;",
            "Z)V"
        }
    .end annotation

    .line 473
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 474
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->isBinderAlive(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p2, :cond_1

    .line 479
    :try_start_0
    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    invoke-interface {v0, p1}, Lcom/qihoo360/loader2/IPluginClient;->sendIntentSync(Landroid/content/Intent;)V

    goto :goto_0

    .line 481
    :cond_1
    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    invoke-interface {v0, p1}, Lcom/qihoo360/loader2/IPluginClient;->sendIntent(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 485
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "p.p sic e: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws001"

    invoke-static {v2, v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    :cond_2
    return-void
.end method

.method static final sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V
    .locals 1

    .line 447
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 450
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$5;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$5;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/Map;

    .line 465
    invoke-static {p0, p1, p2}, Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Client(Ljava/util/Map;Landroid/content/Intent;Z)V

    return-void
.end method

.method static final sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V
    .locals 1

    .line 421
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$4;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PluginProcessMain$4;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/Map;

    .line 438
    invoke-static {p0, p1, p2}, Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Client(Ljava/util/Map;Landroid/content/Intent;Z)V

    return-void
.end method

.method static final sumActivities()I
    .locals 1

    .line 514
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessMain$7;

    invoke-direct {v0}, Lcom/qihoo360/loader2/PluginProcessMain$7;-><init>()V

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->readProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method static final sumBinders(I)I
    .locals 0

    .line 652
    invoke-static {p0}, Lcom/qihoo360/loader2/StubProcessManager;->sumBinders(I)I

    move-result p0

    return p0
.end method

.method private static writeProcessClientLock(Lcom/qihoo360/loader2/PluginProcessMain$Action;)Ljava/lang/Object;
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
            "TT;>;)TT;"
        }
    .end annotation

    const-string v0, "%s(%sms@%s) WRITING DONE"

    .line 759
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, 0x0

    const/4 v6, 0x3

    .line 762
    :try_start_0
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->writeLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->lock()V

    .line 763
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_0

    .line 764
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    const-string v8, "%s(%sms@%s) WRITING"

    new-array v9, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v10

    aget-object v10, v10, v6

    aput-object v10, v9, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    sub-long/2addr v10, v1

    invoke-static {v10, v11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v10

    aput-object v10, v9, v3

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 766
    :cond_0
    invoke-interface {p0}, Lcom/qihoo360/loader2/PluginProcessMain$Action;->call()Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 768
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->writeLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    .line 769
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_1

    .line 770
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    new-array v8, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v9

    aget-object v6, v9, v6

    aput-object v6, v8, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v1

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v8, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    aput-object v1, v8, v3

    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object p0

    :catchall_0
    move-exception p0

    .line 768
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->PROCESS_CLIENT_LOCK:Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->writeLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    .line 769
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_2

    .line 770
    sget-object v7, Lcom/qihoo360/loader2/PluginProcessMain;->TAG:Ljava/lang/String;

    new-array v8, v6, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v9

    aget-object v6, v9, v6

    aput-object v6, v8, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v1

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v8, v4

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    aput-object v1, v8, v3

    invoke-static {v0, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    throw p0
.end method
