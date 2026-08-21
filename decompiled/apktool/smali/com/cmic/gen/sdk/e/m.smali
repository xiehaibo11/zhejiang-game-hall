.class public Lcom/cmic/gen/sdk/e/m;
.super Ljava/lang/Object;
.source "TelephonyUtils.java"


# static fields
.field private static final a:Ljava/lang/String;

.field private static final b:Ljava/lang/String;

.field private static final c:Ljava/lang/String;

.field private static final d:Z

.field private static final e:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 21
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    sput-object v0, Lcom/cmic/gen/sdk/e/m;->a:Ljava/lang/String;

    .line 22
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    sput-object v0, Lcom/cmic/gen/sdk/e/m;->b:Ljava/lang/String;

    .line 23
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "android"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/cmic/gen/sdk/e/m;->c:Ljava/lang/String;

    .line 24
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-gt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sput-boolean v0, Lcom/cmic/gen/sdk/e/m;->d:Z

    .line 25
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    sput-object v0, Lcom/cmic/gen/sdk/e/m;->e:Ljava/lang/String;

    return-void
.end method

.method public static a(Landroid/content/Context;ZLcom/cmic/gen/sdk/a;)I
    .locals 6

    const/4 v0, 0x0

    .line 35
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "connectivity"

    .line 36
    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 39
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v2

    :cond_0
    if-eqz v2, :cond_4

    .line 41
    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_0

    .line 44
    :cond_1
    invoke-virtual {v2}, Landroid/net/NetworkInfo;->getType()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v3, 0x1

    const-string v4, "TelephonyUtils"

    if-ne v2, v3, :cond_3

    :try_start_1
    const-string v2, "WIFI"

    .line 46
    invoke-static {v4, v2}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "android.permission.CHANGE_NETWORK_STATE"

    .line 47
    invoke-static {p0, v2}, Lcom/cmic/gen/sdk/e/g;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    .line 48
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "CHANGE_NETWORK_STATE="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v2, :cond_2

    if-eqz p1, :cond_2

    .line 49
    invoke-static {v1, p0, p2}, Lcom/cmic/gen/sdk/e/m;->a(Landroid/net/ConnectivityManager;Landroid/content/Context;Lcom/cmic/gen/sdk/a;)Z

    move-result p0

    if-eqz p0, :cond_2

    const-string p0, "\u6d41\u91cf\u6570\u636e WIFI \u540c\u5f00"

    .line 50
    invoke-static {v4, p0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x3

    return p0

    :cond_2
    const/4 p0, 0x2

    return p0

    :cond_3
    if-nez v2, :cond_5

    const-string p0, "\u6d41\u91cf"

    .line 56
    invoke-static {v4, p0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return v3

    :cond_4
    :goto_0
    return v0

    :catch_0
    move-exception p0

    .line 60
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    return v0
.end method

.method public static a()Ljava/lang/String;
    .locals 1

    .line 100
    sget-object v0, Lcom/cmic/gen/sdk/e/m;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 1

    const-string v0, "phone"

    .line 149
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    const/4 v0, 0x1

    if-eqz p0, :cond_1

    .line 151
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result p0

    if-eq v0, p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_0
    return v0
.end method

.method private static a(Landroid/net/ConnectivityManager;Landroid/content/Context;Lcom/cmic/gen/sdk/a;)Z
    .locals 5

    const-string v0, "TelephonyUtils"

    const/4 v1, 0x0

    .line 68
    :try_start_0
    const-class v2, Landroid/net/ConnectivityManager;

    const-string v3, "getMobileDataEnabled"

    new-array v4, v1, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v3, 0x1

    .line 69
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v3, v1, [Ljava/lang/Object;

    .line 70
    invoke-virtual {v2, p0, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 71
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "data is on ---------"

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v2, 0x1a

    const-string v3, "networkTypeByAPI"

    if-lt p0, v2, :cond_1

    :try_start_1
    const-string p0, "phone"

    .line 74
    invoke-virtual {p1, p0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-eqz p0, :cond_2

    .line 76
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultSubscriptionId()I

    move-result p1

    invoke-virtual {p0, p1}, Landroid/telephony/TelephonyManager;->createForSubscriptionId(I)Landroid/telephony/TelephonyManager;

    move-result-object p0

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->isDataEnabled()Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "1"

    .line 77
    invoke-virtual {p2, v3, p0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p0, "0"

    .line 79
    invoke-virtual {p2, v3, p0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string p0, "-1"

    .line 83
    invoke-virtual {p2, v3, p0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_2
    :goto_0
    return v1

    :catch_0
    const-string p0, "isMobileEnabled ----\u53cd\u5c04\u51fa\u9519-----"

    .line 88
    invoke-static {v0, p0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public static b()Ljava/lang/String;
    .locals 1

    .line 109
    sget-object v0, Lcom/cmic/gen/sdk/e/m;->b:Ljava/lang/String;

    return-object v0
.end method

.method public static c()Ljava/lang/String;
    .locals 1

    .line 118
    sget-object v0, Lcom/cmic/gen/sdk/e/m;->c:Ljava/lang/String;

    return-object v0
.end method

.method public static d()Z
    .locals 1

    .line 122
    sget-boolean v0, Lcom/cmic/gen/sdk/e/m;->d:Z

    return v0
.end method

.method public static e()Z
    .locals 2

    .line 126
    sget-object v0, Lcom/cmic/gen/sdk/e/m;->e:Ljava/lang/String;

    const-string v1, "brand"

    .line 127
    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "HUAWEI"

    .line 129
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method
