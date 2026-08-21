.class public Lcom/sigmob/sdk/base/services/WifiScanReceiver;
.super Landroid/content/BroadcastReceiver;


# instance fields
.field private a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/net/wifi/ScanResult;",
            ">;"
        }
    .end annotation
.end field

.field private b:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->b:J

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;-><init>()V

    const-string v1, "wifi_list"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->setCategory(Ljava/lang/String;)V

    const-string v1, "101"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->setWifi_id_list(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->setWifi_mac_list(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->commit()V

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getWifiManager(Landroid/content/Context;)Landroid/net/wifi/WifiManager;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/16 v1, 0x3c

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "private :use_wifi "

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/net/wifi/WifiManager;->startScan()Z

    move-result p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "scanResult "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_1
    :goto_0
    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    const-string v0, ","

    :try_start_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getWifiManager(Landroid/content/Context;)Landroid/net/wifi/WifiManager;

    move-result-object v1

    if-nez v1, :cond_0

    return-void

    :cond_0
    const-string v2, "private :use_wifi"

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    const/4 v2, -0x1

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v3

    const v4, -0x6fcd6bbb

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eq v3, v4, :cond_2

    const v4, 0x6ff575fd

    if-eq v3, v4, :cond_1

    goto :goto_0

    :cond_1
    const-string v3, "android.net.wifi.SCAN_RESULTS"

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    move v2, v5

    goto :goto_0

    :cond_2
    const-string v3, "android.net.wifi.WIFI_STATE_CHANGED"

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    move v2, v6

    :cond_3
    :goto_0
    if-eqz v2, :cond_5

    if-eq v2, v6, :cond_4

    goto/16 :goto_2

    :cond_4
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a(Landroid/content/Context;)V

    goto/16 :goto_2

    :cond_5
    invoke-virtual {v1}, Landroid/net/wifi/WifiManager;->getScanResults()Ljava/util/List;

    move-result-object p1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/16 v1, 0x3c

    if-lt p2, v1, :cond_8

    iget-wide v1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->b:J

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long v3, p2

    add-long/2addr v1, v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    cmp-long p2, v1, v3

    if-gez p2, :cond_8

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-nez p2, :cond_8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->b:J

    iput-object p1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string p1, ""

    move-object p2, p1

    :goto_1
    :try_start_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v5, v1, :cond_7

    iget-object v1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a:Ljava/util/List;

    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/wifi/ScanResult;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, v1, Landroid/net/wifi/ScanResult;->SSID:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v3, 0x2

    invoke-static {p1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, v1, Landroid/net/wifi/ScanResult;->BSSID:Ljava/lang/String;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    sub-int/2addr v1, v6

    if-eq v5, v1, :cond_6

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :cond_6
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "name List "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mac List "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/services/WifiScanReceiver;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    const-string p2, "WifiScanReceiver error"

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_8
    :goto_2
    return-void
.end method
