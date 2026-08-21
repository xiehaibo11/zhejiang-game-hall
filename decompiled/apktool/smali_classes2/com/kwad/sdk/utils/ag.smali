.class public final Lcom/kwad/sdk/utils/ag;
.super Ljava/lang/Object;


# static fields
.field private static aIR:I

.field private static aIS:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static ci(Landroid/content/Context;)Landroid/net/NetworkInfo;
    .locals 2

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/SystemUtil;->b(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    if-nez p0, :cond_1

    return-object v1

    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method public static cj(Landroid/content/Context;)I
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_5

    const-string v1, "android.permission.ACCESS_NETWORK_STATE"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/SystemUtil;->b(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    const-string v1, "android.permission.READ_PHONE_STATE"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/SystemUtil;->b(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v3

    if-eqz v3, :cond_1

    move v3, v2

    goto :goto_0

    :cond_1
    move v3, v0

    :goto_0
    if-nez v3, :cond_2

    return v0

    :cond_2
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    if-ne v2, v1, :cond_3

    const/16 p0, 0x64

    return p0

    :cond_3
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "phone"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result v1

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/ag;->l(Landroid/content/Context;I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v1, 0x14

    if-eq p0, v1, :cond_4

    packed-switch p0, :pswitch_data_0

    return v0

    :pswitch_0
    const/4 p0, 0x4

    return p0

    :pswitch_1
    const/4 p0, 0x3

    return p0

    :pswitch_2
    const/4 p0, 0x2

    return p0

    :cond_4
    const/4 p0, 0x5

    return p0

    :catch_0
    :cond_5
    :goto_1
    return v0

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
        :pswitch_2
    .end packed-switch
.end method

.method public static d(Landroid/content/Context;Ljava/lang/String;Z)I
    .locals 10

    if-eqz p0, :cond_a

    sget v0, Lcom/kwad/sdk/utils/ag;->aIR:I

    if-gtz v0, :cond_a

    sget-boolean v0, Lcom/kwad/sdk/utils/ag;->aIS:Z

    if-eqz v0, :cond_0

    goto/16 :goto_5

    :cond_0
    const-string v0, "46003"

    const-string v1, "46001"

    const-string v2, "46002"

    const-string v3, "46000"

    const/4 v4, 0x2

    const/4 v5, 0x3

    const/4 v6, 0x1

    const/4 v7, 0x0

    if-nez p2, :cond_3

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p2, "phone"

    invoke-virtual {p0, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v8, 0x16

    if-lt p2, v8, :cond_4

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object p0

    const/4 p2, -0x1

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v8

    const v9, 0x2f60c8e

    if-eq v8, v9, :cond_1

    packed-switch v8, :pswitch_data_0

    packed-switch v8, :pswitch_data_1

    goto/16 :goto_0

    :pswitch_0
    const-string v8, "46009"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p2, 0x6

    goto :goto_0

    :pswitch_1
    const-string v8, "46008"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    move p2, v5

    goto :goto_0

    :pswitch_2
    const-string v8, "46007"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    move p2, v4

    goto :goto_0

    :pswitch_3
    const-string v8, "46006"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p2, 0x5

    goto :goto_0

    :pswitch_4
    const-string v8, "46005"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/16 p2, 0x8

    goto :goto_0

    :pswitch_5
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p2, 0x7

    goto :goto_0

    :pswitch_6
    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    move p2, v6

    goto :goto_0

    :pswitch_7
    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p2, 0x4

    goto :goto_0

    :pswitch_8
    invoke-virtual {p0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    move p2, v7

    goto :goto_0

    :cond_1
    const-string v8, "46011"

    invoke-virtual {p0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/16 p2, 0x9

    :cond_2
    :goto_0
    packed-switch p2, :pswitch_data_2

    :cond_3
    sput v7, Lcom/kwad/sdk/utils/ag;->aIR:I

    goto :goto_1

    :pswitch_9
    sput v4, Lcom/kwad/sdk/utils/ag;->aIR:I

    goto :goto_1

    :pswitch_a
    sput v5, Lcom/kwad/sdk/utils/ag;->aIR:I

    goto :goto_1

    :pswitch_b
    sput v6, Lcom/kwad/sdk/utils/ag;->aIR:I

    :cond_4
    :goto_1
    sget p0, Lcom/kwad/sdk/utils/ag;->aIR:I

    if-nez p0, :cond_8

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_8

    invoke-virtual {p1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_7

    invoke-virtual {p1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_5

    goto :goto_2

    :cond_5
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_6

    sput v5, Lcom/kwad/sdk/utils/ag;->aIR:I

    goto :goto_3

    :cond_6
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_8

    sput v4, Lcom/kwad/sdk/utils/ag;->aIR:I

    goto :goto_3

    :cond_7
    :goto_2
    sput v6, Lcom/kwad/sdk/utils/ag;->aIR:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_8
    :goto_3
    sget p0, Lcom/kwad/sdk/utils/ag;->aIR:I

    if-nez p0, :cond_9

    goto :goto_4

    :cond_9
    move v6, v7

    :goto_4
    sput-boolean v6, Lcom/kwad/sdk/utils/ag;->aIS:Z

    sget p0, Lcom/kwad/sdk/utils/ag;->aIR:I

    return p0

    :cond_a
    :goto_5
    sget p0, Lcom/kwad/sdk/utils/ag;->aIR:I

    return p0

    nop

    :pswitch_data_0
    .packed-switch 0x2f60c6e
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x2f60c73
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0x0
        :pswitch_b
        :pswitch_b
        :pswitch_b
        :pswitch_b
        :pswitch_a
        :pswitch_a
        :pswitch_a
        :pswitch_9
        :pswitch_9
        :pswitch_9
    .end packed-switch
.end method

.method private static fA(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "nrState=NOT_RESTRICTED"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "nrState=CONNECTED"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static fB(Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0xbb8

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/ag;->p(Ljava/lang/String;I)Z

    move-result p0

    return p0
.end method

.method public static getActiveNetworkType(Landroid/content/Context;)I
    .locals 1

    const/4 v0, -0x1

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    return p0

    :catch_0
    return v0
.end method

.method private static getSubId()I
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_0

    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, -0x1

    :goto_0
    return v0
.end method

.method public static isMobileConnected(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static isNetworkConnected(Landroid/content/Context;)Z
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static isWifiConnected(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    if-ne v1, p0, :cond_0

    return v1

    :cond_0
    return v0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return v0
.end method

.method private static l(Landroid/content/Context;I)I
    .locals 5

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_5

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/SystemUtil;->b(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    :try_start_0
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    if-nez v0, :cond_0

    return p1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/ag;->getSubId()I

    move-result v1

    const/4 v2, -0x1

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v1, v2, :cond_1

    :catchall_0
    :goto_0
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getServiceState()Landroid/telephony/ServiceState;

    move-result-object p0

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/16 v2, 0x1d

    if-lt p0, v2, :cond_2

    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lt p0, v2, :cond_2

    goto :goto_0

    :cond_2
    :try_start_1
    const-string p0, "getServiceStateForSubscriber"

    new-array v2, v4, [Ljava/lang/Object;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v2, v3

    invoke-static {v0, p0, v2}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/ServiceState;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_1
    if-nez p0, :cond_3

    return p1

    :cond_3
    :try_start_2
    invoke-static {}, Lcom/kwad/sdk/utils/as;->IS()Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "com.huawei.android.telephony.ServiceStateEx"

    const-string v1, "getConfigRadioTechnology"

    new-array v2, v4, [Ljava/lang/Object;

    aput-object p0, v2, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-eqz p0, :cond_5

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    move p1, p0

    goto :goto_2

    :cond_4
    invoke-virtual {p0}, Landroid/telephony/ServiceState;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/ag;->fA(Ljava/lang/String;)Z

    move-result p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    if-eqz p0, :cond_5

    const/16 p1, 0x14

    :catch_0
    :cond_5
    :goto_2
    return p1
.end method

.method private static p(Ljava/lang/String;I)Z
    .locals 0

    :try_start_0
    invoke-static {p0}, Ljava/net/InetAddress;->getByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object p0

    const/16 p1, 0xbb8

    invoke-virtual {p0, p1}, Ljava/net/InetAddress;->isReachable(I)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    const/4 p0, 0x0

    return p0
.end method
