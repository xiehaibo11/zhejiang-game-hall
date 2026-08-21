.class public Lcom/tkay/expressad/foundation/g/f/g/b;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/expressad/foundation/g/f/g/b;

.field private static c:Landroid/net/ConnectivityManager;

.field private static d:Lcom/tkay/expressad/foundation/g/f/c/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 14
    const-class v0, Lcom/tkay/expressad/foundation/g/f/g/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/f/g/b;
    .locals 5

    .line 25
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->b:Lcom/tkay/expressad/foundation/g/f/g/b;

    if-nez v0, :cond_c

    .line 26
    const-class v0, Lcom/tkay/expressad/foundation/g/f/g/b;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->b:Lcom/tkay/expressad/foundation/g/f/g/b;

    if-nez v1, :cond_b

    .line 28
    new-instance v1, Lcom/tkay/expressad/foundation/g/f/g/b;

    invoke-direct {v1}, Lcom/tkay/expressad/foundation/g/f/g/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->b:Lcom/tkay/expressad/foundation/g/f/g/b;

    if-eqz p0, :cond_0

    const-string v1, "connectivity"

    .line 31
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    sput-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->c:Landroid/net/ConnectivityManager;

    .line 33
    :cond_0
    new-instance p0, Lcom/tkay/expressad/foundation/g/f/c/a;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/f/c/a;-><init>()V

    sput-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1043
    :try_start_1
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->c:Landroid/net/ConnectivityManager;

    if-nez p0, :cond_1

    goto/16 :goto_2

    .line 1046
    :cond_1
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->c:Landroid/net/ConnectivityManager;

    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_b

    const-string v1, "wifi"

    .line 1048
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v2, v3}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_2

    .line 1049
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "wifi"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->e:Ljava/lang/String;

    .line 1050
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v2, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    goto/16 :goto_2

    .line 1063
    :cond_2
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x1

    if-eqz v1, :cond_7

    .line 1064
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object p0

    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {p0, v1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_7

    const-string v1, "cmwap"

    .line 1066
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, "uniwap"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, "3gwap"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_3
    const-string v1, "ctwap"

    .line 1073
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1074
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1075
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 1076
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "10.0.0.200"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 1077
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "80"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto/16 :goto_1

    :cond_4
    const-string v1, "cmnet"

    .line 1080
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "uninet"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "ctnet"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "3gnet"

    .line 1081
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 1082
    :cond_5
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v2, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1083
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    goto :goto_1

    .line 1067
    :cond_6
    :goto_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1068
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 1069
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "10.0.0.172"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 1070
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "80"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 1089
    :cond_7
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 1090
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz p0, :cond_a

    .line 1091
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v4

    if-lez v4, :cond_a

    .line 1092
    sget-object v4, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    const-string p0, "10.0.0.172"

    .line 1093
    sget-object v4, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_8

    .line 1094
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1095
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "80"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    :cond_8
    const-string p0, "10.0.0.200"

    .line 1096
    sget-object v4, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_9

    .line 1097
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1098
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    const-string v1, "80"

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 1100
    :cond_9
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v2, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1101
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 1104
    :cond_a
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v2, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 1053
    :goto_1
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->e:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 1057
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 36
    :cond_b
    :goto_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 38
    :cond_c
    :goto_3
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->b:Lcom/tkay/expressad/foundation/g/f/g/b;

    return-object p0
.end method

.method private static a()V
    .locals 8

    const-string v0, "wifi"

    .line 43
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->c:Landroid/net/ConnectivityManager;

    if-nez v1, :cond_0

    return-void

    .line 46
    :cond_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->c:Landroid/net/ConnectivityManager;

    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-eqz v1, :cond_a

    .line 48
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v2, v3}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    .line 49
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->e:Ljava/lang/String;

    .line 50
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    return-void

    .line 2063
    :cond_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "10.0.0.200"

    const-string v4, "10.0.0.172"

    const-string v5, "80"

    const/4 v6, 0x1

    if-eqz v0, :cond_6

    .line 2064
    :try_start_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v0, v1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_6

    const-string v1, "cmwap"

    .line 2066
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "uniwap"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "3gwap"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_0

    :cond_2
    const-string v1, "ctwap"

    .line 2073
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 2074
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v6, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2075
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 2076
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v2, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 2077
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto/16 :goto_1

    :cond_3
    const-string v1, "cmnet"

    .line 2080
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "uninet"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "ctnet"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "3gnet"

    .line 2081
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 2082
    :cond_4
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2083
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    goto :goto_1

    .line 2067
    :cond_5
    :goto_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v6, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2068
    sget-object v1, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v0, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 2069
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v4, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 2070
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 2089
    :cond_6
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object v0

    .line 2090
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz v0, :cond_9

    .line 2091
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v7

    if-lez v7, :cond_9

    .line 2092
    sget-object v7, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v0, v7, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 2093
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 2094
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v6, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2095
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 2096
    :cond_7
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 2097
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v6, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2098
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 2100
    :cond_8
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 2101
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    goto :goto_1

    .line 2104
    :cond_9
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 53
    :goto_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->e:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_a
    return-void

    :catch_0
    move-exception v0

    .line 57
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static a(Landroid/net/NetworkInfo;)V
    .locals 7

    .line 63
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v0

    const-string v1, "10.0.0.200"

    const-string v2, "10.0.0.172"

    const/4 v3, 0x0

    const-string v4, "80"

    const/4 v5, 0x1

    if-eqz v0, :cond_4

    .line 64
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object p0

    sget-object v0, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {p0, v0}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_4

    const-string v0, "cmwap"

    .line 66
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "uniwap"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "3gwap"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "ctwap"

    .line 73
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 74
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 75
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 76
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v1, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 77
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v4, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    return-void

    :cond_1
    const-string v0, "cmnet"

    .line 80
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "uninet"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "ctnet"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "3gnet"

    .line 81
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 82
    :cond_2
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 83
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    return-void

    .line 67
    :cond_3
    :goto_0
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v5, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 68
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->a:Ljava/lang/String;

    .line 69
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v2, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 70
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v4, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    return-void

    .line 89
    :cond_4
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 90
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v0

    if-eqz p0, :cond_7

    .line 91
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v6

    if-lez v6, :cond_7

    .line 92
    sget-object v6, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object p0, v6, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    .line 93
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    .line 94
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v5, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 95
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v4, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    return-void

    .line 96
    :cond_5
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_6

    .line 97
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v5, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 98
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-object v4, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    return-void

    .line 100
    :cond_6
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    .line 101
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    return-void

    .line 104
    :cond_7
    sget-object p0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    iput-boolean v3, p0, Lcom/tkay/expressad/foundation/g/f/c/a;->d:Z

    return-void
.end method

.method private static b()Lcom/tkay/expressad/foundation/g/f/c/a;
    .locals 1

    .line 109
    sget-object v0, Lcom/tkay/expressad/foundation/g/f/g/b;->d:Lcom/tkay/expressad/foundation/g/f/c/a;

    return-object v0
.end method
