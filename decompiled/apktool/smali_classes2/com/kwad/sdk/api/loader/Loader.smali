.class public Lcom/kwad/sdk/api/loader/Loader;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/loader/Loader$a;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z

.field private static mContext:Landroid/content/Context;


# instance fields
.field private final IP:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

.field private aiM:Lcom/kwad/sdk/api/loader/k;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/loader/Loader;-><init>()V

    return-void
.end method

.method static declared-synchronized a(Ljava/lang/ClassLoader;)Lcom/kwad/sdk/api/core/IKsAdSDK;
    .locals 5

    const-class v0, Lcom/kwad/sdk/api/loader/Loader;

    monitor-enter v0

    :try_start_0
    const-class v1, Lcom/kwad/sdk/api/core/IKsAdSDK;

    const-class v2, Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;

    invoke-virtual {v1, v2}, Ljava/lang/Class;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;

    invoke-interface {v1}, Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;->value()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {v1, v2, p0}, Ljava/lang/Class;->forName(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    check-cast v1, Lcom/kwad/sdk/api/core/IKsAdSDK;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :cond_0
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Can not get sdk form "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p0

    :try_start_2
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_0
    monitor-exit v0

    throw p0
.end method

.method private aC(Landroid/content/Context;)Z
    .locals 4

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/g;->ay(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/g;->az(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return v3

    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-static {v1, v0}, Lcom/kwad/sdk/api/loader/g;->F(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {p1, v1}, Lcom/kwad/sdk/api/loader/g;->k(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/kwad/sdk/api/loader/Loader;->u(Landroid/content/Context;Ljava/lang/String;)V

    const-string v0, ""

    invoke-static {p1, v0}, Lcom/kwad/sdk/api/loader/g;->l(Landroid/content/Context;Ljava/lang/String;)V

    move-object v0, v1

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    const/4 p1, 0x1

    return p1

    :cond_2
    return v3
.end method

.method private static aD(Landroid/content/Context;)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/api/loader/g;->aA(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/kwad/sdk/api/loader/g;->air:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {p0, v1, v2}, Lcom/kwad/sdk/api/loader/t;->b(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const-string v4, "3.3.42"

    if-nez v3, :cond_0

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz v1, :cond_1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/api/loader/g;->ay(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    invoke-static {p0, v1}, Lcom/kwad/sdk/api/loader/g;->k(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {p0, v1}, Lcom/kwad/sdk/api/loader/g;->l(Landroid/content/Context;Ljava/lang/String;)V

    sget-object v1, Lcom/kwad/sdk/api/loader/g;->air:Ljava/lang/String;

    invoke-static {p0, v1, v2}, Lcom/kwad/sdk/api/loader/t;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-static {p0, v0}, Lcom/kwad/sdk/api/loader/h;->p(Landroid/content/Context;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/h;->j(Ljava/io/File;)V

    invoke-static {p0, v4}, Lcom/kwad/sdk/api/loader/g;->m(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static get()Lcom/kwad/sdk/api/loader/Loader;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader$a;->yv()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v0

    return-object v0
.end method

.method private static u(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/api/loader/h;->t(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private static yu()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/api/c;->ym()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-lez v0, :cond_0

    :try_start_1
    sget-object v1, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/api/loader/d;->ax(Landroid/content/Context;)Lcom/kwad/sdk/api/loader/d;

    move-result-object v1

    invoke-static {}, Ljava/lang/Thread;->getDefaultUncaughtExceptionHandler()Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/loader/d;->setDefaultUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    sget-object v1, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/api/loader/d;->ax(Landroid/content/Context;)Lcom/kwad/sdk/api/loader/d;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Thread;->setDefaultUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    sget-object v1, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/api/loader/d;->ax(Landroid/content/Context;)Lcom/kwad/sdk/api/loader/d;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/api/loader/d;->bP(I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_0
    return-void

    :catchall_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public getContext()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method public getExternalClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/k;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getExternalResource()Landroid/content/res/Resources;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/k;->yr()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getRealClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/k;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0
.end method

.method public init(Landroid/content/Context;Ljava/lang/ClassLoader;)Lcom/kwad/sdk/api/core/IKsAdSDK;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-object p1

    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/Loader;->aD(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/api/loader/Loader;->aC(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/g;->ay(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/kwad/sdk/api/loader/k;->a(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/k;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    :cond_1
    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    const/4 p2, 0x1

    if-nez p1, :cond_2

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/Loader;->a(Ljava/lang/ClassLoader;)Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setIsExternal(Z)V

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/kwad/sdk/api/loader/k;->ys()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setIsExternal(Z)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-static {p1}, Lcom/kwad/sdk/api/c;->a(Lcom/kwad/sdk/api/core/IKsAdSDK;)V

    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    if-eqz p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->yu()V

    :cond_3
    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-object p1
.end method

.method public isExternalLoaded()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public newComponentProxy(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/Object;)Lcom/kwad/sdk/api/proxy/IComponentProxy;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/kwad/sdk/api/proxy/IComponentProxy;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/Object;",
            ")TT;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "sdkconfig"

    invoke-static {p1, v0}, Lcom/kwad/sdk/api/loader/t;->getString(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/SdkConfig;->create(Ljava/lang/String;)Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/api/KsAdSDK;->init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)Z

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {p1, p2, p3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->newComponentProxy(Ljava/lang/Class;Ljava/lang/Object;)Lcom/kwad/sdk/api/proxy/IComponentProxy;

    move-result-object p1

    return-object p1
.end method

.method public newInstance(Ljava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getApplication()Landroid/app/Application;

    move-result-object v0

    :cond_0
    const-string v1, "sdkconfig"

    invoke-static {v0, v1}, Lcom/kwad/sdk/api/loader/t;->getString(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/api/SdkConfig;->create(Ljava/lang/String;)Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/api/KsAdSDK;->init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)Z

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->newInstance(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public rest()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/sdk/api/loader/Loader;->mContext:Landroid/content/Context;

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiL:Lcom/kwad/sdk/api/core/IKsAdSDK;

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/Loader;->aiM:Lcom/kwad/sdk/api/loader/k;

    return-void
.end method
