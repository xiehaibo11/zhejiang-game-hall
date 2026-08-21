.class Lnet/grandcentrix/tray/provider/TrayContract;
.super Ljava/lang/Object;
.source "TrayContract.java"


# static fields
.field static sAuthority:Ljava/lang/String;
    .annotation build Landroid/support/annotation/VisibleForTesting;
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static checkOldWayToSetAuthority(Landroid/content/Context;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 104
    return-void
.end method

.method public static generateContentUri(Landroid/content/Context;)Landroid/net/Uri;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 80
    const-string v0, "preferences"

    invoke-static {p0, v0}, Lnet/grandcentrix/tray/provider/TrayContract;->generateContentUri(Landroid/content/Context;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    return-object v0
.end method

.method private static generateContentUri(Landroid/content/Context;Ljava/lang/String;)Landroid/net/Uri;
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p1, "basepath"    # Ljava/lang/String;
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 109
    invoke-static {p0}, Lnet/grandcentrix/tray/provider/TrayContract;->getAuthority(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 110
    .local v0, "authority":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "content://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 112
    .local v1, "authorityUri":Landroid/net/Uri;
    invoke-static {v1, p1}, Landroid/net/Uri;->withAppendedPath(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 113
    .local v2, "contentUri":Landroid/net/Uri;
    return-object v2
.end method

.method static generateInternalContentUri(Landroid/content/Context;)Landroid/net/Uri;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 85
    const-string v0, "internal_preferences"

    invoke-static {p0, v0}, Lnet/grandcentrix/tray/provider/TrayContract;->generateContentUri(Landroid/content/Context;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    return-object v0
.end method

.method private static declared-synchronized getAuthority(Landroid/content/Context;)Ljava/lang/String;
    .locals 6
    .param p0, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    const-class v0, Lnet/grandcentrix/tray/provider/TrayContract;

    monitor-enter v0

    .line 118
    :try_start_0
    sget-object v1, Lnet/grandcentrix/tray/provider/TrayContract;->sAuthority:Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 119
    sget-object v1, Lnet/grandcentrix/tray/provider/TrayContract;->sAuthority:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    .line 122
    :cond_0
    :try_start_1
    invoke-static {p0}, Lnet/grandcentrix/tray/provider/TrayContract;->checkOldWayToSetAuthority(Landroid/content/Context;)V

    .line 125
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 126
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Landroid/os/Process;->myUid()I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v3, v4}, Landroid/content/pm/PackageManager;->queryContentProviders(Ljava/lang/String;II)Ljava/util/List;

    move-result-object v1

    .line 127
    .local v1, "providers":Ljava/util/List;, "Ljava/util/List<Landroid/content/pm/ProviderInfo;>;"
    if-eqz v1, :cond_2

    .line 128
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/pm/ProviderInfo;

    .line 129
    .local v3, "provider":Landroid/content/pm/ProviderInfo;
    iget-object v4, v3, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    const-class v5, Lnet/grandcentrix/tray/provider/TrayContentProvider;

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 130
    iget-object v2, v3, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    sput-object v2, Lnet/grandcentrix/tray/provider/TrayContract;->sAuthority:Ljava/lang/String;

    .line 131
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "found authority: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lnet/grandcentrix/tray/provider/TrayContract;->sAuthority:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 132
    sget-object v2, Lnet/grandcentrix/tray/provider/TrayContract;->sAuthority:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object v2

    .line 134
    .end local v3    # "provider":Landroid/content/pm/ProviderInfo;
    :cond_1
    goto :goto_0

    .line 138
    :cond_2
    :try_start_2
    new-instance v2, Lnet/grandcentrix/tray/core/TrayRuntimeException;

    const-string v3, "Internal tray error. Could not find the provider authority. Please fill an issue at https://github.com/grandcentrix/tray/issues"

    invoke-direct {v2, v3}, Lnet/grandcentrix/tray/core/TrayRuntimeException;-><init>(Ljava/lang/String;)V

    throw v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 117
    .end local v1    # "providers":Ljava/util/List;, "Ljava/util/List<Landroid/content/pm/ProviderInfo;>;"
    .end local p0    # "context":Landroid/content/Context;
    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method
