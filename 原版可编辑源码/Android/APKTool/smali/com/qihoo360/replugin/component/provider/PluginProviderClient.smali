.class public Lcom/qihoo360/replugin/component/provider/PluginProviderClient;
.super Ljava/lang/Object;
.source "PluginProviderClient.java"


# static fields
.field private static final PROCESS_UNKNOWN:I = 0x7fffffff

.field private static final TAG:Ljava/lang/String; = "PluginProviderClient"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static acquireContentProviderClient(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProviderClient;
    .locals 0

    .line 65
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    sget-object p1, Lcom/qihoo360/replugin/component/provider/PluginPitProviderP0;->AUTHORITY:Ljava/lang/String;

    invoke-virtual {p0, p1}, Landroid/content/ContentResolver;->acquireContentProviderClient(Ljava/lang/String;)Landroid/content/ContentProviderClient;

    move-result-object p0

    return-object p0
.end method

.method public static bulkInsert(Landroid/content/Context;Landroid/net/Uri;[Landroid/content/ContentValues;)I
    .locals 0

    .line 109
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 110
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/content/ContentResolver;->bulkInsert(Landroid/net/Uri;[Landroid/content/ContentValues;)I

    move-result p0

    return p0
.end method

.method public static delete(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 118
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 119
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method private static fetchPluginByContext(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;
    .locals 3

    .line 322
    invoke-virtual {p0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    .line 323
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->fetchPluginName(Ljava/lang/ClassLoader;)Ljava/lang/String;

    move-result-object p0

    .line 324
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-eqz v0, :cond_0

    .line 327
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "ppc.fubc: pn is n. u="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    :cond_0
    const-string v0, "main"

    .line 330
    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 332
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    .line 333
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PluginProviderClient.fubc(): Call Main! u="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v1

    .line 338
    :cond_2
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 339
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PluginProviderClient.fubc(): Call Plugin! u="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object p0
.end method

.method private static getProcessByAuthority(Ljava/lang/String;Ljava/lang/String;)I
    .locals 5

    .line 347
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v0

    const-string v1, "; au="

    const v2, 0x7fffffff

    const-string v3, "PluginProviderClient"

    if-nez v0, :cond_1

    .line 349
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 350
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getProcessByAuthority(): Fetch Component List Error! pn="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v2

    .line 354
    :cond_1
    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/component/ComponentList;->getProviderByAuthority(Ljava/lang/String;)Landroid/content/pm/ProviderInfo;

    move-result-object v0

    if-nez v0, :cond_3

    .line 356
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 357
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getProcessByAuthority(): Not register! pn="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v2

    .line 361
    :cond_3
    iget-object p1, v0, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-static {p1}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getProcessInt(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    .line 362
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 363
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getProcessByAuthority(): Okay! Process="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "; pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return p1
.end method

.method public static getType(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;
    .locals 0

    .line 91
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 92
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/ContentResolver;->getType(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static insert(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 0

    .line 100
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 101
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/content/ContentResolver;->insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;)V
    .locals 0

    .line 239
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 240
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/content/ContentResolver;->notifyChange(Landroid/net/Uri;Landroid/database/ContentObserver;)V

    return-void
.end method

.method public static notifyChange(Landroid/content/Context;Landroid/net/Uri;Landroid/database/ContentObserver;Z)V
    .locals 0

    .line 249
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 250
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3}, Landroid/content/ContentResolver;->notifyChange(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V

    return-void
.end method

.method public static openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;
    .locals 0

    .line 189
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 190
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/content/ContentResolver;->openFileDescriptor(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 193
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static openFileDescriptor(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;
    .locals 0

    .line 207
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 208
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3}, Landroid/content/ContentResolver;->openFileDescriptor(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 211
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static openInputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/InputStream;
    .locals 0

    .line 138
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 139
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/ContentResolver;->openInputStream(Landroid/net/Uri;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 142
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static openOutputStream(Landroid/content/Context;Landroid/net/Uri;)Ljava/io/OutputStream;
    .locals 0

    .line 155
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 156
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/ContentResolver;->openOutputStream(Landroid/net/Uri;)Ljava/io/OutputStream;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 159
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static openOutputStream(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;
    .locals 0

    .line 172
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 173
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/content/ContentResolver;->openOutputStream(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 176
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 6

    .line 72
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object v1

    .line 73
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0
.end method

.method public static query(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;
    .locals 7

    .line 82
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object v1

    .line 83
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-virtual/range {v0 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;

    move-result-object p0

    return-object p0
.end method

.method public static registerContentObserver(Landroid/content/Context;Landroid/net/Uri;ZLandroid/database/ContentObserver;)V
    .locals 0

    .line 224
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 225
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3}, Landroid/content/ContentResolver;->registerContentObserver(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 228
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;
    .locals 2

    .line 263
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->fetchPluginByContext(Landroid/content/Context;Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    return-object p1

    :cond_0
    const/high16 v1, -0x80000000

    .line 267
    invoke-static {p0, v0, p1, v1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;I)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static toCalledUri(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;I)Landroid/net/Uri;
    .locals 1

    .line 282
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_5

    if-eqz p2, :cond_4

    .line 289
    invoke-virtual {p2}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object p0

    sget-object v0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderBase;->AUTHORITY_PREFIX:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    return-object p2

    :cond_0
    const/high16 p0, -0x80000000

    if-ne p3, p0, :cond_1

    .line 297
    invoke-virtual {p2}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->getProcessByAuthority(Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    const p0, 0x7fffffff

    if-ne p3, p0, :cond_1

    return-object p2

    :cond_1
    const/4 p0, -0x2

    if-ne p3, p0, :cond_2

    .line 306
    sget-object p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderPersist;->AUTHORITY:Ljava/lang/String;

    goto :goto_0

    .line 307
    :cond_2
    invoke-static {p3}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->isCustomPluginProcess(I)Z

    move-result p0

    if-eqz p0, :cond_3

    .line 308
    sget-object p0, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->PROCESS_AUTHORITY_MAP:Landroid/util/SparseArray;

    invoke-virtual {p0, p3}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    goto :goto_0

    .line 310
    :cond_3
    sget-object p0, Lcom/qihoo360/replugin/component/provider/PluginPitProviderUI;->AUTHORITY:Ljava/lang/String;

    :goto_0
    const/4 p3, 0x3

    new-array p3, p3, [Ljava/lang/Object;

    const/4 v0, 0x0

    aput-object p0, p3, v0

    const/4 p0, 0x1

    aput-object p1, p3, p0

    const/4 p0, 0x2

    .line 315
    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "content://"

    const-string v0, ""

    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    aput-object p1, p3, p0

    const-string p0, "content://%s/%s/%s"

    invoke-static {p0, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 316
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    return-object p0

    .line 286
    :cond_4
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0

    .line 283
    :cond_5
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0
.end method

.method public static update(Landroid/content/Context;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 127
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/provider/PluginProviderClient;->toCalledUri(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;

    move-result-object p1

    .line 128
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/content/ContentResolver;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0

    return p0
.end method
