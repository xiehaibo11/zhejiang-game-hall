.class final Lcom/kwad/sdk/core/NetworkMonitor$1;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/NetworkMonitor;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aki:Lcom/kwad/sdk/core/NetworkMonitor;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/NetworkMonitor;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/NetworkMonitor$1;->aki:Lcom/kwad/sdk/core/NetworkMonitor;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    :try_start_0
    const-string p2, "android.permission.ACCESS_NETWORK_STATE"

    invoke-static {p1, p2}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result p2

    const/4 v0, 0x1

    if-nez p2, :cond_0

    move p2, v0

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    if-nez p2, :cond_1

    return-void

    :cond_1
    const-string p2, "connectivity"

    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/net/ConnectivityManager;

    if-nez p1, :cond_2

    return-void

    :cond_2
    invoke-virtual {p1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p1

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result p2

    if-eqz p2, :cond_5

    invoke-virtual {p1}, Landroid/net/NetworkInfo;->getType()I

    move-result p2

    if-ne v0, p2, :cond_3

    iget-object p1, p0, Lcom/kwad/sdk/core/NetworkMonitor$1;->aki:Lcom/kwad/sdk/core/NetworkMonitor;

    sget-object p2, Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;->NETWORK_WIFI:Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;

    :goto_1
    invoke-static {p1, p2}, Lcom/kwad/sdk/core/NetworkMonitor;->a(Lcom/kwad/sdk/core/NetworkMonitor;Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;)V

    goto :goto_2

    :cond_3
    invoke-virtual {p1}, Landroid/net/NetworkInfo;->getType()I

    move-result p1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/sdk/core/NetworkMonitor$1;->aki:Lcom/kwad/sdk/core/NetworkMonitor;

    sget-object p2, Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;->NETWORK_MOBILE:Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/kwad/sdk/core/NetworkMonitor$1;->aki:Lcom/kwad/sdk/core/NetworkMonitor;

    sget-object p2, Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;->NETWORK_NONE:Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/kwad/sdk/core/NetworkMonitor$1;->aki:Lcom/kwad/sdk/core/NetworkMonitor;

    sget-object p2, Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;->NETWORK_NONE:Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/NetworkMonitor;->a(Lcom/kwad/sdk/core/NetworkMonitor;Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_2
    return-void
.end method
