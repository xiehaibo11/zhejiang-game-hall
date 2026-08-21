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

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getEthernetType()Ljava/lang/String;
    .locals 2

    .line 143
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 145
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 147
    sget-object v1, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v0, v1, :cond_0

    sget-object v1, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v0, v1, :cond_1

    :cond_0
    const-string v0, "NETWORN_ETHERNET"
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_1
    const-string v0, "NETWORN_NONE"

    return-object v0
.end method

.method private static getMobileType()Ljava/lang/String;
    .locals 3

    .line 94
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 96
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    .line 97
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getSubtypeName()Ljava/lang/String;

    move-result-object v0

    if-eqz v1, :cond_4

    .line 99
    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v1, v2, :cond_0

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_4

    .line 100
    :cond_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getSubtype()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v2, 0x14

    if-eq v1, v2, :cond_3

    const-string v2, "NETWORN_3G"

    packed-switch v1, :pswitch_data_0

    :try_start_1
    const-string v1, "TD-SCDMA"

    .line 126
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "WCDMA"

    .line 127
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "CDMA2000"

    .line 128
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "NETWORN_MOBILE"

    return-object v0

    :cond_2
    :goto_0
    return-object v2

    :pswitch_0
    const-string v0, "NETWORN_4G"

    return-object v0

    :pswitch_1
    return-object v2

    :pswitch_2
    const-string v0, "NETWORN_2G"

    return-object v0

    :cond_3
    const-string v0, "NETWORN_5G"
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    :cond_4
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

    const-string v0, "NETWORN_NONE"

    .line 81
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 85
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->activeNetInfo:Landroid/net/NetworkInfo;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :catch_0
    :cond_1
    :goto_0
    return-object v0
.end method

.method public static getNetworkState(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, "NETWORN_NONE"

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "connectivity"

    .line 33
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    .line 35
    sget-object p0, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    if-nez p0, :cond_1

    return-object v0

    .line 38
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkInfo()Ljava/lang/String;

    move-result-object p0

    .line 39
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    return-object p0

    .line 42
    :cond_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getWifiType()Ljava/lang/String;

    move-result-object p0

    .line 43
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    return-object p0

    .line 46
    :cond_3
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getMobileType()Ljava/lang/String;

    move-result-object p0

    .line 47
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    return-object p0

    .line 50
    :cond_4
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getEthernetType()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static getWifiType()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 61
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->connManager:Landroid/net/ConnectivityManager;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_2

    .line 64
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 66
    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-eq v1, v2, :cond_1

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_0

    goto :goto_1

    .line 68
    :cond_0
    sget-object v2, Landroid/net/NetworkInfo$State;->DISCONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_2

    const-string v0, "UNCON_WIFI"

    return-object v0

    :cond_1
    :goto_1
    const-string v0, "NETWORN_WIFI"

    :cond_2
    return-object v0
.end method
