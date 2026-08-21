.class public Lcom/qihoo360/loader2/PluginProviderStub;
.super Ljava/lang/Object;
.source "PluginProviderStub.java"


# static fields
.field private static final KEY_COOKIE:Ljava/lang/String; = "cookie"

.field private static final KEY_METHOD:Ljava/lang/String; = "main_method"

.field private static final METHOD_START_PROCESS:Ljava/lang/String; = "start_process"

.field private static final PROJECTION_MAIN:[Ljava/lang/String;

.field private static final SELECTION_MAIN_BINDER:Ljava/lang/String; = "main_binder"

.field private static final SELECTION_MAIN_PREF:Ljava/lang/String; = "main_pref"

.field private static final URL_PARAM_KEY_LOADED:Ljava/lang/String; = "loaded"

.field static sPref:Lcom/qihoo360/loader2/sp/IPref;

.field static sPrefImpl:Lcom/qihoo360/loader2/sp/PrefImpl;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "main"

    .line 52
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/PluginProviderStub;->PROJECTION_MAIN:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final getPref(Landroid/content/Context;)Lcom/qihoo360/loader2/sp/IPref;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 216
    sget-object v0, Lcom/qihoo360/loader2/PluginProviderStub;->sPref:Lcom/qihoo360/loader2/sp/IPref;

    if-nez v0, :cond_1

    .line 217
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 219
    invoke-static {}, Lcom/qihoo360/loader2/PluginProviderStub;->initPref()V

    goto :goto_0

    .line 221
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostPref(Landroid/content/Context;)Landroid/os/IBinder;

    move-result-object p0

    .line 222
    new-instance v0, Lcom/qihoo360/loader2/PluginProviderStub$1;

    invoke-direct {v0}, Lcom/qihoo360/loader2/PluginProviderStub$1;-><init>()V

    const/4 v1, 0x0

    invoke-interface {p0, v0, v1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V

    .line 229
    invoke-static {p0}, Lcom/qihoo360/loader2/sp/IPref$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/sp/IPref;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/loader2/PluginProviderStub;->sPref:Lcom/qihoo360/loader2/sp/IPref;

    .line 232
    :cond_1
    :goto_0
    sget-object p0, Lcom/qihoo360/loader2/PluginProviderStub;->sPref:Lcom/qihoo360/loader2/sp/IPref;

    return-object p0
.end method

.method static final initPref()V
    .locals 1

    .line 236
    sget-object v0, Lcom/qihoo360/loader2/PluginProviderStub;->sPrefImpl:Lcom/qihoo360/loader2/sp/PrefImpl;

    if-nez v0, :cond_0

    .line 237
    new-instance v0, Lcom/qihoo360/loader2/sp/PrefImpl;

    invoke-direct {v0}, Lcom/qihoo360/loader2/sp/PrefImpl;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PluginProviderStub;->sPrefImpl:Lcom/qihoo360/loader2/sp/PrefImpl;

    .line 238
    sput-object v0, Lcom/qihoo360/loader2/PluginProviderStub;->sPref:Lcom/qihoo360/loader2/sp/IPref;

    :cond_0
    return-void
.end method

.method static final proxyFetchHostBinder(Landroid/content/Context;)Landroid/os/IBinder;
    .locals 1

    const-string v0, "main_binder"

    .line 145
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostBinder(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p0

    return-object p0
.end method

.method private static final proxyFetchHostBinder(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 7

    const/4 v0, 0x0

    .line 165
    :try_start_0
    sget-object v2, Lcom/qihoo360/replugin/component/process/ProcessPitProviderPersist;->URI:Landroid/net/Uri;

    .line 166
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    sget-object v3, Lcom/qihoo360/loader2/PluginProviderStub;->PROJECTION_MAIN:[Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v4, p1

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-string p1, "ws001"

    if-nez p0, :cond_1

    .line 168
    :try_start_1
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    const-string v1, "proxy fetch binder: cursor is null"

    .line 169
    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 182
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Landroid/database/Cursor;)V

    return-object v0

    .line 173
    :cond_1
    :goto_0
    :try_start_2
    invoke-interface {p0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 176
    :cond_2
    invoke-static {p0}, Lcom/qihoo360/loader2/BinderCursor;->getBinder(Landroid/database/Cursor;)Landroid/os/IBinder;

    move-result-object v0

    .line 177
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_3

    .line 178
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "proxy fetch binder: binder="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 182
    :cond_3
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Landroid/database/Cursor;)V

    return-object v0

    :catchall_0
    move-exception p1

    move-object v0, p0

    goto :goto_1

    :catchall_1
    move-exception p1

    :goto_1
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Landroid/database/Cursor;)V

    throw p1
.end method

.method static final proxyFetchHostPref(Landroid/content/Context;)Landroid/os/IBinder;
    .locals 1

    const-string v0, "main_pref"

    .line 153
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostBinder(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p0

    return-object p0
.end method

.method static final proxyStartPluginProcess(Landroid/content/Context;I)Z
    .locals 3

    .line 193
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "main_method"

    const-string v2, "start_process"

    .line 194
    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    sget-object v1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-wide v1, v1, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "cookie"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 196
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p1}, Lcom/qihoo360/replugin/component/process/ProcessPitProviderBase;->buildUri(I)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p0, p1, v0}, Landroid/content/ContentResolver;->insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;

    move-result-object p0

    .line 197
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v0, "ws001"

    if-eqz p1, :cond_1

    .line 198
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "proxyStartPluginProcess insert.rc="

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, "null"

    :goto_0
    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    if-nez p0, :cond_3

    .line 201
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    const-string p0, "proxyStartPluginProcess failed"

    .line 202
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p0, 0x0

    return p0

    :cond_3
    const/4 p0, 0x1

    return p0
.end method

.method public static final stubMain(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 0

    .line 74
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 75
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "stubMain projection="

    invoke-virtual {p0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " selection="

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string p0, "main_binder"

    .line 78
    invoke-virtual {p0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 79
    sget-object p0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {p0}, Lcom/qihoo360/loader2/PmBase;->getHostBinder()Landroid/os/IBinder;

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/loader2/BinderCursor;->queryBinder(Landroid/os/IBinder;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p0, "main_pref"

    .line 82
    invoke-virtual {p0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 84
    invoke-static {}, Lcom/qihoo360/loader2/PluginProviderStub;->initPref()V

    .line 85
    sget-object p0, Lcom/qihoo360/loader2/PluginProviderStub;->sPrefImpl:Lcom/qihoo360/loader2/sp/PrefImpl;

    invoke-static {p0}, Lcom/qihoo360/loader2/BinderCursor;->queryBinder(Landroid/os/IBinder;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static final stubPlugin(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 7

    .line 99
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v0, "ws001"

    if-eqz p0, :cond_0

    .line 100
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "stubPlugin values="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string p0, "main_method"

    .line 103
    invoke-virtual {p1, p0}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "start_process"

    .line 105
    invoke-static {p0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_6

    .line 107
    new-instance p0, Landroid/net/Uri$Builder;

    invoke-direct {p0}, Landroid/net/Uri$Builder;-><init>()V

    const-string v1, "content"

    invoke-virtual {p0, v1}, Landroid/net/Uri$Builder;->scheme(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p0

    const-string v1, "process"

    invoke-virtual {p0, v1}, Landroid/net/Uri$Builder;->authority(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p0

    const-string v1, "status"

    invoke-virtual {p0, v1}, Landroid/net/Uri$Builder;->encodedPath(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p0

    const-string v1, "loaded=1"

    invoke-virtual {p0, v1}, Landroid/net/Uri$Builder;->encodedQuery(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p0

    invoke-virtual {p0}, Landroid/net/Uri$Builder;->build()Landroid/net/Uri;

    move-result-object p0

    .line 108
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 109
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "plugin provider: return uri="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const-string v1, "cookie"

    .line 112
    invoke-virtual {p1, v1}, Landroid/content/ContentValues;->getAsLong(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    .line 115
    sget-object p1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-wide v3, p1, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    const-wide/16 v5, 0x0

    cmp-long p1, v3, v5

    if-nez p1, :cond_3

    .line 116
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    .line 117
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "set cookie: "

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 120
    :cond_2
    sget-object p1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iput-wide v1, p1, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    goto :goto_0

    .line 123
    :cond_3
    sget-object p1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-wide v3, p1, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    cmp-long p1, v3, v1

    if-eqz p1, :cond_5

    .line 124
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 125
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "reset cookie: "

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 128
    :cond_4
    sget-object p1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iput-wide v1, p1, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    .line 130
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->connectToHostSvc()V

    :cond_5
    :goto_0
    return-object p0

    :cond_6
    const/4 p0, 0x0

    return-object p0
.end method
