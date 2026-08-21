.class public Lcom/cmic/gen/sdk/e/r;
.super Ljava/lang/Object;
.source "WifiNetworkUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/e/r$a;
    }
.end annotation


# static fields
.field private static a:Lcom/cmic/gen/sdk/e/r;


# instance fields
.field private b:Landroid/net/ConnectivityManager;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    const-string v0, "connectivity"

    .line 26
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/net/ConnectivityManager;

    iput-object p1, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 28
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/e/r;)Landroid/net/ConnectivityManager;
    .locals 0

    .line 14
    iget-object p0, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/cmic/gen/sdk/e/r;
    .locals 2

    .line 33
    sget-object v0, Lcom/cmic/gen/sdk/e/r;->a:Lcom/cmic/gen/sdk/e/r;

    if-nez v0, :cond_1

    .line 34
    const-class v0, Lcom/cmic/gen/sdk/e/r;

    monitor-enter v0

    .line 35
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/e/r;->a:Lcom/cmic/gen/sdk/e/r;

    if-nez v1, :cond_0

    .line 36
    new-instance v1, Lcom/cmic/gen/sdk/e/r;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/e/r;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/cmic/gen/sdk/e/r;->a:Lcom/cmic/gen/sdk/e/r;

    .line 38
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 40
    :cond_1
    :goto_0
    sget-object p0, Lcom/cmic/gen/sdk/e/r;->a:Lcom/cmic/gen/sdk/e/r;

    return-object p0
.end method


# virtual methods
.method public a(Landroid/net/ConnectivityManager$NetworkCallback;)V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;

    if-nez v0, :cond_0

    return-void

    .line 107
    :cond_0
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_2

    if-nez p1, :cond_1

    return-void

    :cond_1
    const-string v0, "WifiNetworkUtils"

    const-string v1, "unregisterNetworkCallback"

    .line 111
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;

    invoke-virtual {v0, p1}, Landroid/net/ConnectivityManager;->unregisterNetworkCallback(Landroid/net/ConnectivityManager$NetworkCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 115
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public declared-synchronized a(Lcom/cmic/gen/sdk/e/r$a;)V
    .locals 4

    monitor-enter p0

    .line 45
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    const-string v0, "WifiNetworkUtils"

    const-string v2, "mConnectivityManager \u4e3a\u7a7a"

    .line 46
    invoke-static {v0, v2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    invoke-interface {p1, v1, v1}, Lcom/cmic/gen/sdk/e/r$a;->a(Landroid/net/Network;Landroid/net/ConnectivityManager$NetworkCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 48
    monitor-exit p0

    return-void

    .line 70
    :cond_0
    :try_start_1
    new-instance v0, Landroid/net/NetworkRequest$Builder;

    invoke-direct {v0}, Landroid/net/NetworkRequest$Builder;-><init>()V

    const/16 v2, 0xc

    .line 71
    invoke-virtual {v0, v2}, Landroid/net/NetworkRequest$Builder;->addCapability(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    const/4 v2, 0x0

    .line 72
    invoke-virtual {v0, v2}, Landroid/net/NetworkRequest$Builder;->addTransportType(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    .line 73
    invoke-virtual {v0}, Landroid/net/NetworkRequest$Builder;->build()Landroid/net/NetworkRequest;

    move-result-object v0

    .line 75
    new-instance v2, Lcom/cmic/gen/sdk/e/r$1;

    invoke-direct {v2, p0, p1}, Lcom/cmic/gen/sdk/e/r$1;-><init>(Lcom/cmic/gen/sdk/e/r;Lcom/cmic/gen/sdk/e/r$a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 95
    :try_start_2
    iget-object v3, p0, Lcom/cmic/gen/sdk/e/r;->b:Landroid/net/ConnectivityManager;

    invoke-virtual {v3, v0, v2}, Landroid/net/ConnectivityManager;->requestNetwork(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 97
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 98
    invoke-interface {p1, v1, v2}, Lcom/cmic/gen/sdk/e/r$a;->a(Landroid/net/Network;Landroid/net/ConnectivityManager$NetworkCallback;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 100
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
