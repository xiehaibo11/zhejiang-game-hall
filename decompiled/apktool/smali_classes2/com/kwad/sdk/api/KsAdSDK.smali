.class public Lcom/kwad/sdk/api/KsAdSDK;
.super Ljava/lang/Object;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/KsAdSDK$SdkType;,
        Lcom/kwad/sdk/api/KsAdSDK$KsThemeModeType;
    }
.end annotation


# static fields
.field private static mOriginalAppContext:Landroid/content/Context;

.field private static sAppTag:Ljava/lang/String;

.field public static final sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final sHasRest:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasRest:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static deleteCache()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->deleteCache()V

    :cond_0
    return-void
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getAppName()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getAppName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->mOriginalAppContext:Landroid/content/Context;

    return-object v0
.end method

.method public static getDid()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getDid()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static declared-synchronized getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;
    .locals 3
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const-class v0, Lcom/kwad/sdk/api/KsAdSDK;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object v1, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {v1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getAdManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :cond_0
    :try_start_1
    const-string v1, "KsAdSDK"

    const-string v2, "please init sdk before getLoadManager"

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v1, Lcom/kwad/sdk/api/b;

    invoke-direct {v1}, Lcom/kwad/sdk/api/b;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static getSDKType()I
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const/4 v0, 0x1

    return v0
.end method

.method public static getSDKVersion()Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const-string v0, "3.3.42"

    return-object v0
.end method

.method public static getSDKVersion(I)Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const/4 v0, 0x1

    if-eq p0, v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const-string p0, "3.3.42"

    return-object p0
.end method

.method public static declared-synchronized init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)Z
    .locals 6
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    const-class v0, Lcom/kwad/sdk/api/KsAdSDK;

    monitor-enter v0

    const/4 v1, 0x0

    if-eqz p0, :cond_3

    if-nez p1, :cond_0

    goto/16 :goto_1

    :cond_0
    :try_start_0
    sput-object p0, Lcom/kwad/sdk/api/KsAdSDK;->mOriginalAppContext:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/api/loader/c;->aw(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_1

    new-instance v2, Ljava/lang/RuntimeException;

    const-string v3, "wrappApp Exception"

    invoke-direct {v2, v3}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-static {v2, p0, p1}, Lcom/kwad/sdk/api/KsAdSDK;->revertDynamic(Ljava/lang/Throwable;Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    monitor-exit v0

    return v1

    :cond_1
    :try_start_2
    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object p0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/kwad/sdk/api/loader/Loader;->init(Landroid/content/Context;Ljava/lang/ClassLoader;)Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object p0

    sput-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    const-string v3, "3.3.42"

    invoke-interface {p0, v3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setApiVersion(Ljava/lang/String;)V

    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    const v3, 0x2e4c58

    invoke-interface {p0, v3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setApiVersionCode(I)V

    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    sget-wide v3, Lcom/kwad/sdk/api/proxy/app/AdSdkFileProvider;->sLaunchTime:J

    invoke-interface {p0, v3, v4}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setLaunchTime(J)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    :try_start_4
    invoke-static {v2}, Lcom/kwad/sdk/api/loader/Wrapper;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    if-nez p0, :cond_2

    new-instance p0, Ljava/lang/RuntimeException;

    const-string v3, "wrapContextIfNeed Exception"

    invoke-direct {p0, v3}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-static {p0, v2, p1}, Lcom/kwad/sdk/api/KsAdSDK;->revertDynamic(Ljava/lang/Throwable;Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit v0

    return v1

    :cond_2
    :try_start_5
    sget-object v3, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {v3, p0, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V

    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    sget-object v3, Lcom/kwad/sdk/api/KsAdSDK;->sAppTag:Ljava/lang/String;

    invoke-interface {p0, v3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setAppTag(Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-static {v2, p0}, Lcom/kwad/sdk/api/loader/u;->a(Landroid/content/Context;Lcom/kwad/sdk/api/core/IKsAdSDK;)V

    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance p0, Lcom/kwad/sdk/api/KsAdSDK$1;

    invoke-direct {p0, v2, p1}, Lcom/kwad/sdk/api/KsAdSDK$1;-><init>(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V

    invoke-static {p0}, Lcom/kwad/sdk/api/a/a;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    goto :goto_2

    :catchall_0
    move-exception p0

    invoke-static {p0, v2, p1}, Lcom/kwad/sdk/api/KsAdSDK;->revertDynamic(Ljava/lang/Throwable;Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    monitor-exit v0

    return v1

    :catchall_1
    move-exception p0

    move-object v5, v2

    move-object v2, p0

    move-object p0, v5

    goto :goto_0

    :catchall_2
    move-exception v2

    :goto_0
    :try_start_7
    invoke-static {v2, p0, p1}, Lcom/kwad/sdk/api/KsAdSDK;->revertDynamic(Ljava/lang/Throwable;Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    monitor-exit v0

    return v1

    :cond_3
    :goto_1
    if-eqz p1, :cond_4

    :try_start_8
    iget-object p0, p1, Lcom/kwad/sdk/api/SdkConfig;->ksInitCallback:Lcom/kwad/sdk/api/KsInitCallback;

    if-eqz p0, :cond_4

    iget-object p0, p1, Lcom/kwad/sdk/api/SdkConfig;->ksInitCallback:Lcom/kwad/sdk/api/KsInitCallback;

    const-string p1, "context or config is null"

    invoke-interface {p0, v1, p1}, Lcom/kwad/sdk/api/KsInitCallback;->onFail(ILjava/lang/String;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    goto :goto_3

    :catchall_3
    :goto_2
    :try_start_9
    sget-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p0
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    monitor-exit v0

    return p0

    :catchall_4
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_4
    :goto_3
    monitor-exit v0

    return v1
.end method

.method public static isDebugLogEnable()Z
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->isDebugLogEnable()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static pauseCurrentPlayer()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->pauseCurrentPlayer()V

    :cond_0
    return-void
.end method

.method public static re(Ljava/lang/Object;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->re(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public static resumeCurrentPlayer()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->resumeCurrentPlayer()V

    :cond_0
    return-void
.end method

.method private static revertDynamic(Ljava/lang/Throwable;Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasRest:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sHasRest:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/u;->aE(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/api/loader/Loader;->get()Lcom/kwad/sdk/api/loader/Loader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/loader/Loader;->rest()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "init appId after reset:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p2, Lcom/kwad/sdk/api/SdkConfig;->appId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KSAdSDK"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1, p2}, Lcom/kwad/sdk/api/KsAdSDK;->init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)Z

    sget-object p1, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/api/KsAdSDK;->sHasInit:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {p1, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->re(Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method public static setAdxEnable(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setAdxEnable(Z)V

    :cond_0
    return-void
.end method

.method public static setAppTag(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setAppTag(Ljava/lang/String;)V

    return-void

    :cond_0
    sput-object p0, Lcom/kwad/sdk/api/KsAdSDK;->sAppTag:Ljava/lang/String;

    return-void
.end method

.method public static setLoadingLottieAnimation(ZI)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setLoadingLottieAnimation(ZI)V

    :cond_0
    return-void
.end method

.method public static setLoadingLottieAnimationColor(ZI)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setLoadingLottieAnimationColor(ZI)V

    :cond_0
    return-void
.end method

.method public static setPersonalRecommend(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setPersonalRecommend(Z)V

    :cond_0
    return-void
.end method

.method public static setProgrammaticRecommend(Z)V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setProgrammaticRecommend(Z)V

    :cond_0
    return-void
.end method

.method public static setThemeMode(I)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->setThemeMode(I)V

    :cond_0
    return-void
.end method

.method public static unInit()V
    .locals 1
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->unInit()V

    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/sdk/api/KsAdSDK;->sSdk:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-void
.end method
