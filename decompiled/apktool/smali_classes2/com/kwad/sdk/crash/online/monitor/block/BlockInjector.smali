.class public Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;
.super Ljava/lang/Object;


# static fields
.field private static volatile aAJ:Z

.field private static volatile aAK:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic E(Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->onError(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/crash/online/monitor/a/b;)Ljava/lang/String;
    .locals 2

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBd:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBd:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, "b25SZXBvcnRJc3N1ZQ=="

    :goto_0
    new-instance v0, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AL()Lcom/kwad/sdk/core/a/c$a;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/a/c$a;->decode(Ljava/lang/String;)[B

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([B)V

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "report methodName:"

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "perfMonitor.Injector"

    invoke-static {v1, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static b(Lcom/kwad/sdk/crash/online/monitor/a/b;)Ljava/lang/String;
    .locals 2

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBc:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBc:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, "Y29tLnRlbmNlbnQubWF0cml4LnBsdWdpbi5QbHVnaW5MaXN0ZW5lcg=="

    :goto_0
    new-instance v0, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AL()Lcom/kwad/sdk/core/a/c$a;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/a/c$a;->decode(Ljava/lang/String;)[B

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([B)V

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "ListenerName:"

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "perfMonitor.Injector"

    invoke-static {v1, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public static b(Lcom/kwad/sdk/crash/online/monitor/a/a;)V
    .locals 2

    sget-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->aAJ:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->c(Lcom/kwad/sdk/crash/online/monitor/a/a;)Lcom/kwad/sdk/crash/online/monitor/a/b;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->b(Lcom/kwad/sdk/crash/online/monitor/a/b;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->a(Lcom/kwad/sdk/crash/online/monitor/a/b;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector$1;

    invoke-direct {v1}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector$1;-><init>()V

    invoke-static {v0, p0, v1}, Lcom/kwad/sdk/ranger/RangerInjector;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$b;)V

    const/4 p0, 0x1

    sput-boolean p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->aAJ:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->onError(Ljava/lang/String;)V

    return-void
.end method

.method private static c(Lcom/kwad/sdk/crash/online/monitor/a/a;)Lcom/kwad/sdk/crash/online/monitor/a/b;
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->getAppId()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    const/4 v1, 0x0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/crash/online/monitor/a/a;->eK(Ljava/lang/String;)Lcom/kwad/sdk/crash/online/monitor/a/b;

    move-result-object v1

    :cond_1
    return-object v1
.end method

.method private static onError(Ljava/lang/String;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eJ(Ljava/lang/String;)V

    const-string v0, "perfMonitor.Injector"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static tryProxyOtherOutput(Lcom/kwad/sdk/crash/online/monitor/a/a;)V
    .locals 5

    const-string v0, "perfMonitor.Injector"

    sget-boolean v1, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->aAK:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->c(Lcom/kwad/sdk/crash/online/monitor/a/a;)Lcom/kwad/sdk/crash/online/monitor/a/b;

    move-result-object p0

    if-nez p0, :cond_1

    return-void

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "featureConfig:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/online/monitor/a/b;->toJson()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBe:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBf:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBg:Ljava/lang/String;

    iget-object p0, p0, Lcom/kwad/sdk/crash/online/monitor/a/b;->aBh:Ljava/lang/String;

    new-instance v4, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector$2;

    invoke-direct {v4}, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector$2;-><init>()V

    invoke-static {v1, v2, v3, p0, v4}, Lcom/kwad/sdk/ranger/RangerInjector;->tryProxyOtherOutput(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$a;)V

    const/4 p0, 0x1

    sput-boolean p0, Lcom/kwad/sdk/crash/online/monitor/block/BlockInjector;->aAK:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
