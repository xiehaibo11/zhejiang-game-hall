.class public final Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;
.super Ljava/lang/Object;
.source "IntenetUtil.java"


# static fields
.field private static final NETWORN_2G:Ljava/lang/String; = "NETWORN_2G"

.field private static final NETWORN_3G:Ljava/lang/String; = "NETWORN_3G"

.field private static final NETWORN_4G:Ljava/lang/String; = "NETWORN_4G"

.field private static final NETWORN_5G:Ljava/lang/String; = "NETWORN_5G"

.field private static final NETWORN_ETHERNET:Ljava/lang/String; = "NETWORN_ETHERNET"

.field private static final NETWORN_MOBILE:Ljava/lang/String; = "NETWORN_MOBILE"

.field private static final NETWORN_NONE:Ljava/lang/String; = "NETWORN_NONE"

.field private static final NETWORN_WIFI:Ljava/lang/String; = "NETWORN_WIFI"

.field private static final UNCON_WIFI:Ljava/lang/String; = "UNCON_WIFI"

.field private static activeNetInfo:Landroid/net/NetworkInfo;

.field private static connManager:Landroid/net/ConnectivityManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getEthernetType()Ljava/lang/String;
    .locals 3

    .line 157
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v0

    .line 158
    .local v0, "EthernetInfo":Landroid/net/NetworkInfo;
    if-eqz v0, :cond_1

    .line 159
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    .line 160
    .local v1, "state":Landroid/net/NetworkInfo$State;
    if-eqz v1, :cond_1

    .line 161
    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v1, v2, :cond_0

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_1

    .line 162
    :cond_0
    const-string v2, "NETWORN_ETHERNET"
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 166
    .end local v0    # "EthernetInfo":Landroid/net/NetworkInfo;
    .end local v1    # "state":Landroid/net/NetworkInfo$State;
    :cond_1
    goto :goto_0

    .line 165
    :catch_0
    move-exception v0

    .line 167
    :goto_0
    const-string v0, "NETWORN_NONE"

    return-object v0
.end method

.method private static getMobileType()Ljava/lang/String;
    .locals 9

    .line 96
    const-string v0, "NETWORN_MOBILE"

    const-string v1, "NETWORN_5G"

    const-string v2, "NETWORN_4G"

    const-string v3, "NETWORN_2G"

    :try_start_0
    sget-object v4, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v4

    .line 97
    .local v4, "networkInfo":Landroid/net/NetworkInfo;
    if-eqz v4, :cond_4

    .line 98
    invoke-virtual {v4}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v5

    .line 99
    .local v5, "state":Landroid/net/NetworkInfo$State;
    invoke-virtual {v4}, Landroid/net/NetworkInfo;->getSubtypeName()Ljava/lang/String;

    move-result-object v6

    .line 100
    .local v6, "strSubTypeName":Ljava/lang/String;
    if-eqz v5, :cond_4

    .line 101
    sget-object v7, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v5, v7, :cond_0

    sget-object v7, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v5, v7, :cond_4

    .line 102
    :cond_0
    sget-object v7, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;

    invoke-virtual {v7}, Landroid/net/NetworkInfo;->getSubtype()I

    move-result v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v8, 0x14

    if-eq v7, v8, :cond_3

    const-string v1, "NETWORN_3G"

    packed-switch v7, :pswitch_data_0

    .line 136
    :try_start_1
    const-string v2, "TD-SCDMA"

    invoke-virtual {v6, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "WCDMA"

    .line 137
    invoke-virtual {v6, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "CDMA2000"

    .line 138
    invoke-virtual {v6, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    .line 144
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    return-object v0

    .line 140
    :cond_2
    :goto_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    return-object v1

    .line 128
    :pswitch_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    return-object v2

    .line 123
    :pswitch_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    return-object v1

    .line 110
    :pswitch_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v0, v1, v3}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    return-object v3

    .line 132
    :cond_3
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_network:Ljava/lang/String;

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 133
    return-object v1

    .line 150
    .end local v4    # "networkInfo":Landroid/net/NetworkInfo;
    .end local v5    # "state":Landroid/net/NetworkInfo$State;
    .end local v6    # "strSubTypeName":Ljava/lang/String;
    :catch_0
    move-exception v0

    :cond_4
    nop

    .line 152
    const/4 v0, 0x0

    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method private static getNetworkInfo()Ljava/lang/String;
    .locals 2

    .line 83
    const-string v0, "NETWORN_NONE"

    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 86
    nop

    .line 87
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 90
    :cond_0
    const/4 v0, 0x0

    return-object v0

    .line 88
    :cond_1
    :goto_0
    return-object v0

    .line 84
    :catch_0
    move-exception v1

    .line 85
    .local v1, "e":Ljava/lang/Exception;
    return-object v0
.end method

.method public static getNetworkState(Landroid/content/Context;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 31
    const-string v0, "NETWORN_NONE"

    if-nez p0, :cond_0

    .line 32
    return-object v0

    .line 35
    :cond_0
    const-string v1, "connectivity"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    .line 37
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    if-nez v1, :cond_1

    .line 38
    return-object v0

    .line 40
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkInfo()Ljava/lang/String;

    move-result-object v0

    .line 41
    .local v0, "type":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 42
    return-object v0

    .line 44
    :cond_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getWifiType()Ljava/lang/String;

    move-result-object v0

    .line 45
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 46
    return-object v0

    .line 48
    :cond_3
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getMobileType()Ljava/lang/String;

    move-result-object v0

    .line 49
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 50
    return-object v0

    .line 52
    :cond_4
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getEthernetType()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private static getWifiType()Ljava/lang/String;
    .locals 3

    .line 61
    const/4 v0, 0x0

    .line 63
    .local v0, "wifiInfo":Landroid/net/NetworkInfo;
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    goto :goto_0

    .line 64
    :catch_0
    move-exception v1

    :goto_0
    nop

    .line 65
    if-eqz v0, :cond_2

    .line 66
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    .line 67
    .local v1, "state":Landroid/net/NetworkInfo$State;
    if-eqz v1, :cond_2

    .line 68
    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v1, v2, :cond_1

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_0

    goto :goto_1

    .line 70
    :cond_0
    sget-object v2, Landroid/net/NetworkInfo$State;->DISCONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_2

    .line 71
    const-string v2, "UNCON_WIFI"

    return-object v2

    .line 69
    :cond_1
    :goto_1
    const-string v2, "NETWORN_WIFI"

    return-object v2

    .line 74
    .end local v1    # "state":Landroid/net/NetworkInfo$State;
    :cond_2
    const/4 v1, 0x0

    return-object v1
.end method
