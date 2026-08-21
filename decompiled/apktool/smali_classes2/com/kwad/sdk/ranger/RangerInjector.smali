.class public Lcom/kwad/sdk/ranger/RangerInjector;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/ranger/RangerInjector$b;,
        Lcom/kwad/sdk/ranger/RangerInjector$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static E(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "threadStack"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method private static F(Lorg/json/JSONObject;)J
    .locals 2

    :try_start_0
    const-string v0, "cost"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method private static G(Lorg/json/JSONObject;)J
    .locals 2

    :try_start_0
    const-string v0, "time"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method private static H(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "scene"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method private static I(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "process"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method static synthetic J(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerInjector;->E(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic K(Lorg/json/JSONObject;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerInjector;->F(Lorg/json/JSONObject;)J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic L(Lorg/json/JSONObject;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerInjector;->G(Lorg/json/JSONObject;)J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic M(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerInjector;->H(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic N(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerInjector;->I(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$b;)V
    .locals 6

    const-string v0, "pluginListener"

    :try_start_0
    invoke-static {}, Lcom/tencent/matrix/Matrix;->with()Lcom/tencent/matrix/Matrix;

    move-result-object v1

    const-class v2, Lcom/tencent/matrix/trace/TracePlugin;

    invoke-virtual {v1, v2}, Lcom/tencent/matrix/Matrix;->getPluginByClass(Ljava/lang/Class;)Lcom/tencent/matrix/plugin/Plugin;

    move-result-object v1

    check-cast v1, Lcom/tencent/matrix/trace/TracePlugin;

    if-nez v1, :cond_0

    const-string p0, "getPluginByClass is null"

    invoke-interface {p2, p0}, Lcom/kwad/sdk/ranger/RangerInjector$b;->onError(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tencent/matrix/plugin/PluginListener;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v2, :cond_1

    :try_start_1
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Class;

    const/4 v5, 0x0

    aput-object p0, v4, v5

    new-instance p0, Lcom/kwad/sdk/ranger/RangerInjector$1;

    invoke-direct {p0, p1, p2, v2}, Lcom/kwad/sdk/ranger/RangerInjector$1;-><init>(Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$b;Lcom/tencent/matrix/plugin/PluginListener;)V

    invoke-static {v3, v4, p0}, Ljava/lang/reflect/Proxy;->newProxyInstance(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;

    move-result-object p0

    invoke-static {v1, v0, p0}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    :try_start_2
    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p2, p0}, Lcom/kwad/sdk/ranger/RangerInjector$b;->onError(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :cond_1
    return-void

    :catch_1
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p2, p0}, Lcom/kwad/sdk/ranger/RangerInjector$b;->onError(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static tryProxyOtherOutput(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$a;)V
    .locals 2

    :try_start_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/s;->an(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {p0, p2}, Lcom/kwad/sdk/utils/s;->an(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    const/4 v1, 0x4

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result v1

    :cond_1
    new-instance p2, Lcom/kwad/sdk/ranger/RangerInjector$2;

    invoke-direct {p2, v1, v0, p3, p4}, Lcom/kwad/sdk/ranger/RangerInjector$2;-><init>(ILcom/bytedance/apm/common/utility/Logger$ILogWritter;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$a;)V

    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "perfMonitor.RangerInjector"

    invoke-static {p1, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
