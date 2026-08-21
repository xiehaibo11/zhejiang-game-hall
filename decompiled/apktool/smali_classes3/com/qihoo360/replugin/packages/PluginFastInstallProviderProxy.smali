.class public Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;
.super Ljava/lang/Object;
.source "PluginFastInstallProviderProxy.java"


# static fields
.field private static final LOCK:[B

.field private static final TAG:Ljava/lang/String; = "PluginFastInstallPr"

.field private static sProvider:Landroid/content/ContentProviderClient;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 43
    sput-object v0, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->LOCK:[B

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getProvider(Landroid/content/Context;)Landroid/content/ContentProviderClient;
    .locals 3

    .line 84
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->sProvider:Landroid/content/ContentProviderClient;

    if-eqz v0, :cond_0

    return-object v0

    .line 87
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->LOCK:[B

    monitor-enter v0

    .line 88
    :try_start_0
    sget-object v1, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->sProvider:Landroid/content/ContentProviderClient;

    if-eqz v1, :cond_1

    .line 89
    sget-object p0, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->sProvider:Landroid/content/ContentProviderClient;

    monitor-exit v0

    return-object p0

    .line 92
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const/4 v1, 0x0

    if-nez p0, :cond_2

    const-string p0, "ws001"

    const-string v2, "pipp.gp: cr n"

    .line 96
    invoke-static {p0, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 98
    monitor-exit v0

    return-object v1

    .line 101
    :cond_2
    sget-object v2, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->CONTENT_URI:Landroid/net/Uri;

    invoke-virtual {p0, v2}, Landroid/content/ContentResolver;->acquireContentProviderClient(Landroid/net/Uri;)Landroid/content/ContentProviderClient;

    move-result-object p0

    if-nez p0, :cond_3

    const-string p0, "ws001"

    const-string v2, "pipp.gp: cpc n"

    .line 105
    invoke-static {p0, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 107
    monitor-exit v0

    return-object v1

    .line 111
    :cond_3
    sput-object p0, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->sProvider:Landroid/content/ContentProviderClient;

    .line 112
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    .line 113
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static install(Landroid/content/Context;Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 7

    .line 56
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result v0

    const-string v1, "PluginFastInstallPr"

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 57
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 58
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "install: Already loaded, no need to install. pi="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v2

    .line 63
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->getProvider(Landroid/content/Context;)Landroid/content/ContentProviderClient;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_2

    return v0

    .line 69
    :cond_2
    :try_start_0
    sget-object v3, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->CONTENT_URI:Landroid/net/Uri;

    .line 70
    invoke-static {p1}, Lcom/qihoo360/replugin/packages/PluginFastInstallProvider;->makeInstallValues(Lcom/qihoo360/replugin/model/PluginInfo;)Landroid/content/ContentValues;

    move-result-object v4

    const-string v5, "inst"

    const/4 v6, 0x0

    .line 69
    invoke-virtual {p0, v3, v4, v5, v6}, Landroid/content/ContentProviderClient;->update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p0

    .line 72
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_3

    .line 73
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "install: Install. pi="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "; result="

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    if-lez p0, :cond_4

    goto :goto_0

    :cond_4
    move v2, v0

    :goto_0
    return v2

    :catch_0
    move-exception p0

    .line 77
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v0
.end method
