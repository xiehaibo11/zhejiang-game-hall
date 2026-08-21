.class public final Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Ljava/lang/Boolean;

.field private static volatile b:Landroid/os/Handler;

.field private static c:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Ljava/lang/Boolean;
    .locals 1

    .line 11
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    return-object v0
.end method

.method static synthetic a(Ljava/lang/Boolean;)Ljava/lang/Boolean;
    .locals 0

    .line 11
    sput-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    return-object p0
.end method

.method static synthetic a(Landroid/content/Context;)Z
    .locals 0

    .line 11
    invoke-static {p0}, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->b(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method private static b(Landroid/content/Context;)Z
    .locals 1

    .line 81
    :try_start_0
    new-instance v0, Landroid/webkit/WebView;

    invoke-direct {v0, p0}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static isWebViewAvailable(Landroid/content/Context;)Z
    .locals 3

    .line 32
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    .line 34
    sput-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->c:Ljava/lang/Boolean;

    const/4 v1, 0x1

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 38
    :cond_0
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    if-ne v0, v2, :cond_3

    .line 39
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    if-nez v0, :cond_1

    .line 41
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->b(Landroid/content/Context;)Z

    move-result p0

    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    sput-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 43
    :catch_0
    sget-object p0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sput-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    .line 47
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    if-nez p0, :cond_2

    .line 48
    sget-object p0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sput-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    .line 50
    :cond_2
    sget-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0

    .line 52
    :cond_3
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    if-nez v0, :cond_4

    .line 53
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->b:Landroid/os/Handler;

    if-nez v0, :cond_4

    .line 54
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 55
    sput-object v0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->b:Landroid/os/Handler;

    new-instance v2, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 70
    :cond_4
    sget-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    if-nez p0, :cond_5

    return v1

    .line 73
    :cond_5
    sget-object p0, Lcom/tkay/expressad/atsignalcommon/webEnvCheck/MBWebViewChecker;->a:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0

    :cond_6
    :goto_1
    return v1
.end method
