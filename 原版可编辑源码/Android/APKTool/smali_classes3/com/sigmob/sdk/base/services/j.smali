.class public Lcom/sigmob/sdk/base/services/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/services/j$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "LocationService"

.field public static final b:Ljava/lang/String; = "AppInstallService"

.field public static final c:Ljava/lang/String; = "WifiScanService"

.field public static final d:Ljava/lang/String; = "DownloadService"

.field private static e:Lcom/sigmob/sdk/base/services/j$a;

.field private static f:Lcom/sigmob/sdk/base/services/j$a;

.field private static g:Lcom/sigmob/sdk/base/services/j$a;

.field private static h:Lcom/sigmob/sdk/base/services/j$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/sigmob/sdk/base/services/j$a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/j;->f:Lcom/sigmob/sdk/base/services/j$a;

    return-object v0
.end method

.method public static declared-synchronized a(Ljava/lang/String;)Lcom/sigmob/sdk/base/services/j$a;
    .locals 6

    const-class v0, Lcom/sigmob/sdk/base/services/j;

    monitor-enter v0

    const/4 v1, -0x1

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v2

    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    sparse-switch v2, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v2, "DownloadService"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move v1, v3

    goto :goto_0

    :sswitch_1
    const-string v2, "LocationService"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :sswitch_2
    const-string v2, "AppInstallService"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move v1, v5

    goto :goto_0

    :sswitch_3
    const-string v2, "WifiScanService"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    move v1, v4

    :cond_0
    :goto_0
    if-eqz v1, :cond_7

    if-eq v1, v5, :cond_5

    if-eq v1, v4, :cond_3

    if-eq v1, v3, :cond_1

    const/4 p0, 0x0

    monitor-exit v0

    return-object p0

    :cond_1
    :try_start_1
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->h:Lcom/sigmob/sdk/base/services/j$a;

    if-nez p0, :cond_2

    new-instance p0, Lcom/sigmob/sdk/base/services/d;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/d;-><init>()V

    sput-object p0, Lcom/sigmob/sdk/base/services/j;->h:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_2
    :try_start_2
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->h:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_3
    :try_start_3
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->g:Lcom/sigmob/sdk/base/services/j$a;

    if-nez p0, :cond_4

    new-instance p0, Lcom/sigmob/sdk/base/services/l;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/l;-><init>()V

    sput-object p0, Lcom/sigmob/sdk/base/services/j;->g:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_4
    :try_start_4
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->g:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_5
    :try_start_5
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->f:Lcom/sigmob/sdk/base/services/j$a;

    if-nez p0, :cond_6

    new-instance p0, Lcom/sigmob/sdk/base/services/b;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/b;-><init>()V

    sput-object p0, Lcom/sigmob/sdk/base/services/j;->f:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_6
    :try_start_6
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->f:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_7
    :try_start_7
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->e:Lcom/sigmob/sdk/base/services/j$a;

    if-nez p0, :cond_8

    new-instance p0, Lcom/sigmob/sdk/base/services/e;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/e;-><init>()V

    sput-object p0, Lcom/sigmob/sdk/base/services/j;->e:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_8
    :try_start_8
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->e:Lcom/sigmob/sdk/base/services/j$a;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    :sswitch_data_0
    .sparse-switch
        -0x39ad5cfd -> :sswitch_3
        0x15187cfb -> :sswitch_2
        0x32f35120 -> :sswitch_1
        0x526324ed -> :sswitch_0
    .end sparse-switch
.end method

.method public static a(Ljava/lang/String;Z)V
    .locals 4

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v0, "DownloadService"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_1

    :sswitch_1
    const-string v0, "LocationService"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :sswitch_2
    const-string v0, "AppInstallService"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :sswitch_3
    const-string v0, "WifiScanService"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    if-eqz v0, :cond_7

    if-eq v0, v3, :cond_5

    if-eq v0, v2, :cond_3

    if-eq v0, v1, :cond_1

    return-void

    :cond_1
    if-eqz p1, :cond_2

    goto :goto_2

    :cond_2
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->h:Lcom/sigmob/sdk/base/services/j$a;

    if-eqz p0, :cond_a

    goto :goto_3

    :cond_3
    if-eqz p1, :cond_4

    goto :goto_2

    :cond_4
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->g:Lcom/sigmob/sdk/base/services/j$a;

    if-eqz p0, :cond_a

    goto :goto_3

    :cond_5
    if-eqz p1, :cond_6

    :goto_2
    invoke-static {p0}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/services/j$a;

    move-result-object p0

    invoke-interface {p0}, Lcom/sigmob/sdk/base/services/j$a;->b()Z

    goto :goto_5

    :cond_6
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->f:Lcom/sigmob/sdk/base/services/j$a;

    if-eqz p0, :cond_a

    :goto_3
    invoke-interface {p0}, Lcom/sigmob/sdk/base/services/j$a;->d()V

    goto :goto_5

    :cond_7
    if-eqz p1, :cond_8

    invoke-static {p0}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/services/j$a;

    move-result-object p0

    invoke-interface {p0}, Lcom/sigmob/sdk/base/services/j$a;->b()Z

    goto :goto_4

    :cond_8
    sget-object p0, Lcom/sigmob/sdk/base/services/j;->e:Lcom/sigmob/sdk/base/services/j$a;

    if-eqz p0, :cond_9

    invoke-interface {p0}, Lcom/sigmob/sdk/base/services/j$a;->d()V

    :cond_9
    :goto_4
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/ClientMetadata;->setEnableLocation(Z)V

    :cond_a
    :goto_5
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x39ad5cfd -> :sswitch_3
        0x15187cfb -> :sswitch_2
        0x32f35120 -> :sswitch_1
        0x526324ed -> :sswitch_0
    .end sparse-switch
.end method

.method public static b()Lcom/sigmob/sdk/base/services/j$a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/j;->g:Lcom/sigmob/sdk/base/services/j$a;

    return-object v0
.end method

.method public static c()Lcom/sigmob/sdk/base/services/j$a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/j;->h:Lcom/sigmob/sdk/base/services/j$a;

    return-object v0
.end method

.method public static d()Lcom/sigmob/sdk/base/services/j$a;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/j;->e:Lcom/sigmob/sdk/base/services/j$a;

    return-object v0
.end method
