.class public Lcom/carlt/networklibs/utils/NetworkUtils;
.super Ljava/lang/Object;
.source "NetworkUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getNetType()Lcom/carlt/networklibs/NetType;
    .locals 2

    .line 49
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/carlt/networklibs/NetworkManager;->getApplication()Landroid/app/Application;

    move-result-object v0

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/app/Application;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    if-nez v0, :cond_0

    .line 51
    sget-object v0, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    return-object v0

    .line 53
    :cond_0
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 55
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    if-nez v1, :cond_3

    .line 57
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_1

    sget-object v0, Lcom/carlt/networklibs/NetType;->CMWAP:Lcom/carlt/networklibs/NetType;

    return-object v0

    .line 58
    :cond_1
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "cmnet"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 59
    sget-object v0, Lcom/carlt/networklibs/NetType;->CMNET:Lcom/carlt/networklibs/NetType;

    return-object v0

    .line 61
    :cond_2
    sget-object v0, Lcom/carlt/networklibs/NetType;->CMWAP:Lcom/carlt/networklibs/NetType;

    return-object v0

    :cond_3
    const/4 v0, 0x1

    if-ne v1, v0, :cond_4

    .line 64
    sget-object v0, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    return-object v0

    .line 68
    :cond_4
    sget-object v0, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    return-object v0
.end method

.method public static isAvailable()Z
    .locals 6

    .line 27
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/carlt/networklibs/NetworkManager;->getApplication()Landroid/app/Application;

    move-result-object v0

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/app/Application;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 31
    :cond_0
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getAllNetworkInfo()[Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 33
    array-length v2, v0

    move v3, v1

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v0, v3

    .line 34
    invoke-virtual {v4}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v4

    sget-object v5, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v4, v5, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return v1
.end method

.method public static openNetSetting(Landroid/app/Activity;I)V
    .locals 4

    .line 72
    new-instance v0, Landroid/content/Intent;

    const-string v1, "/"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 73
    new-instance v1, Landroid/content/ComponentName;

    const-string v2, "com.android.settings"

    const-string v3, "com.android.settings.WirelessSettings"

    invoke-direct {v1, v2, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 74
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 75
    invoke-virtual {p0, v0, p1}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method
