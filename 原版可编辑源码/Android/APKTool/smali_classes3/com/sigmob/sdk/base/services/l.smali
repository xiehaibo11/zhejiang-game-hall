.class public Lcom/sigmob/sdk/base/services/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/services/j$a;


# instance fields
.field a:Lcom/sigmob/sdk/base/services/WifiScanReceiver;

.field b:Lcom/sigmob/sdk/base/services/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    new-instance v0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/services/WifiScanReceiver;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/l;->a:Lcom/sigmob/sdk/base/services/WifiScanReceiver;

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.net.wifi.SCAN_RESULTS"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const-string v1, "android.net.wifi.WIFI_STATE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/services/l;->a:Lcom/sigmob/sdk/base/services/WifiScanReceiver;

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return-void
.end method

.method public b(Landroid/content/Context;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/l;->a:Lcom/sigmob/sdk/base/services/WifiScanReceiver;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    return-void
.end method

.method public b()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-eq v0, v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/services/l;->a(Landroid/content/Context;)V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public c()Lcom/sigmob/sdk/base/services/k;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    return-object v0
.end method

.method public d()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-ne v0, v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/services/l;->b(Landroid/content/Context;)V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/l;->b:Lcom/sigmob/sdk/base/services/k;

    :cond_0
    return-void
.end method

.method public e()Ljava/lang/Error;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
