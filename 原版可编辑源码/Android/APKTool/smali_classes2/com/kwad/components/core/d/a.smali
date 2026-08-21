.class public final Lcom/kwad/components/core/d/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/d/a$a;
    }
.end annotation


# static fields
.field private static IO:Z

.field private static final IP:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static IQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Throwable;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/components/core/d/a;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method private static ah(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/16 v0, 0x2e

    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->indexOf(II)I

    move-result v0

    if-lez v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static b(Ljava/lang/Throwable;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    sget-object v0, Lcom/kwad/components/core/d/a;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/components/core/d/a;->c(Ljava/lang/Throwable;)V

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/b;->l(Ljava/lang/Throwable;)V

    return-void
.end method

.method private static c(Ljava/lang/Throwable;)V
    .locals 1

    sget-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    :cond_0
    sget-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static declared-synchronized initAsync(Landroid/content/Context;)V
    .locals 1

    const-class v0, Lcom/kwad/components/core/d/a;

    monitor-enter v0

    if-eqz p0, :cond_1

    :try_start_0
    sget-object p0, Lcom/kwad/components/core/d/a;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p0

    if-nez p0, :cond_1

    sget-boolean p0, Lcom/kwad/components/core/d/a;->IO:Z

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x1

    sput-boolean p0, Lcom/kwad/components/core/d/a;->IO:Z

    new-instance p0, Lcom/kwad/components/core/d/a$1;

    invoke-direct {p0}, Lcom/kwad/components/core/d/a$1;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_1
    :goto_0
    monitor-exit v0

    return-void
.end method

.method private static mC()V
    .locals 2

    sget-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Throwable;

    invoke-static {v1}, Lcom/kwad/sdk/crash/b;->l(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_1
    sget-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/components/core/d/a;->IQ:Ljava/util/List;

    new-instance v0, Lcom/kwad/components/core/d/a$2;

    invoke-direct {v0}, Lcom/kwad/components/core/d/a$2;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->d(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method private static mD()Lcom/kwad/sdk/crash/c;
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a$a;->aa(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/kwad/sdk/crash/c$a;

    invoke-direct {v2}, Lcom/kwad/sdk/crash/c$a;-><init>()V

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/crash/c$a;->bv(Landroid/content/Context;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    sget-object v3, Lcom/kwad/sdk/core/config/c;->aly:Lcom/kwad/sdk/core/config/item/k;

    invoke-static {v3}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/k;)Z

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->bn(Z)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    sget-object v3, Lcom/kwad/sdk/core/config/c;->alz:Lcom/kwad/sdk/core/config/item/k;

    invoke-static {v3}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/k;)Z

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->bo(Z)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->bp(Z)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    sget-object v3, Lcom/kwad/sdk/core/config/c;->alA:Lcom/kwad/sdk/core/config/item/p;

    invoke-static {v3}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/p;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->em(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    sget-object v3, Lcom/kwad/sdk/core/config/c;->alB:Lcom/kwad/sdk/core/config/item/p;

    invoke-static {v3}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/p;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->el(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getSDKVersion()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    invoke-static {v3, v4}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getSdkCrashVersionName(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->es(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getSDKVersionCode()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->cC(I)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getApiVersion()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v4}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getSdkCrashVersionName(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->et(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->getApiVersionCode()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->cD(I)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/kwad/sdk/crash/c$a;->cE(I)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    const-string v3, "com.kwad.sdk"

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->er(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->eu(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/api/SdkConfig;->appId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->ev(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/api/SdkConfig;->appName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->ew(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {v0}, Lcom/kwad/sdk/utils/k;->bQ(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->ex(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getDeviceId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->eo(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/api/SdkConfig;->appId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->ep(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    const-string v3, "Android"

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/c$a;->en(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/crash/c$a;->eq(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/d/a$4;

    invoke-direct {v2, v0}, Lcom/kwad/components/core/d/a$4;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/crash/c$a;->a(Lcom/kwad/sdk/crash/h;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/d/a$3;

    invoke-direct {v1}, Lcom/kwad/components/core/d/a$3;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/c$a;->a(Lcom/kwad/sdk/crash/f;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/d/a;->mE()[Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/c$a;->d([Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/d/a;->mF()[Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/c$a;->e([Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->za()Ljava/util/List;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/c$a;->A(Ljava/util/List;)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    sget-object v1, Lcom/kwad/sdk/core/config/c;->amu:Lcom/kwad/sdk/core/config/item/f;

    invoke-static {v1}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/f;)D

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/crash/c$a;->j(D)Lcom/kwad/sdk/crash/c$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/c$a;->EB()Lcom/kwad/sdk/crash/c;

    move-result-object v0

    return-object v0
.end method

.method private static mE()[Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    :try_start_0
    const-class v1, Lcom/kwad/sdk/KsAdSDKImpl;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/core/d/a;->ah(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-class v1, Lcom/kwad/sdk/DownloadTask;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/core/d/a;->ah(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    :try_start_1
    const-class v1, Lcom/kwai/CpuMemoryProfiler;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/core/d/a;->ah(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-class v1, Lcom/kuaishou/aegon/Aegon;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/core/d/a;->ah(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    return-object v0
.end method

.method private static mF()[Ljava/lang/String;
    .locals 4

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    :try_start_0
    const-class v1, Lcom/kwad/sdk/crash/d;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "."

    invoke-virtual {v1, v2}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    return-object v0
.end method

.method static synthetic mG()Lcom/kwad/sdk/crash/c;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/d/a;->mD()Lcom/kwad/sdk/crash/c;

    move-result-object v0

    return-object v0
.end method

.method static synthetic mH()Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/d/a;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object v0
.end method

.method static synthetic mI()V
    .locals 0

    invoke-static {}, Lcom/kwad/components/core/d/a;->mC()V

    return-void
.end method
