.class public Lcom/kwad/sdk/api/core/KSLifecycleObserver;
.super Ljava/lang/Object;


# static fields
.field private static volatile sKSLifecycleObserver:Lcom/kwad/sdk/api/core/KSLifecycleObserver;


# instance fields
.field private currentActivity:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private mApplication:Landroid/app/Application;

.field private mEnable:Z

.field private mHasInit:Z

.field private mIsInBackground:Z

.field private final mListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/api/core/KSLifecycleListener;",
            ">;"
        }
    .end annotation
.end field

.field private startedActivityCount:I


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mIsInBackground:Z

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mHasInit:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mEnable:Z

    return-void
.end method

.method static synthetic access$002(Lcom/kwad/sdk/api/core/KSLifecycleObserver;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mEnable:Z

    return p1
.end method

.method static synthetic access$100(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    return-object p0
.end method

.method static synthetic access$200(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    return p0
.end method

.method static synthetic access$208(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)I
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    return v0
.end method

.method static synthetic access$210(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)I
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->startedActivityCount:I

    return v0
.end method

.method static synthetic access$300(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->onAppBackToForeground()V

    return-void
.end method

.method static synthetic access$400(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)Ljava/lang/ref/WeakReference;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->currentActivity:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method static synthetic access$402(Lcom/kwad/sdk/api/core/KSLifecycleObserver;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->currentActivity:Ljava/lang/ref/WeakReference;

    return-object p1
.end method

.method static synthetic access$500(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->onAppGoToBackground()V

    return-void
.end method

.method public static getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->sKSLifecycleObserver:Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->sKSLifecycleObserver:Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    invoke-direct {v1}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;-><init>()V

    sput-object v1, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->sKSLifecycleObserver:Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->sKSLifecycleObserver:Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    return-object v0
.end method

.method private onAppBackToForeground()V
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mIsInBackground:Z

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/core/KSLifecycleListener;

    invoke-interface {v1}, Lcom/kwad/sdk/api/core/KSLifecycleListener;->onBackToForeground()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method private onAppGoToBackground()V
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mIsInBackground:Z

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/api/core/KSLifecycleListener;

    invoke-interface {v1}, Lcom/kwad/sdk/api/core/KSLifecycleListener;->onBackToBackground()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method


# virtual methods
.method public getApplication()Landroid/app/Application;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mApplication:Landroid/app/Application;

    return-object v0
.end method

.method public getCurrentActivity()Landroid/app/Activity;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->currentActivity:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 1

    :try_start_0
    instance-of v0, p1, Landroid/app/Application;

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mHasInit:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mHasInit:Z

    check-cast p1, Landroid/app/Application;

    iput-object p1, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mApplication:Landroid/app/Application;

    new-instance v0, Lcom/kwad/sdk/api/core/KSLifecycleObserver$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver$1;-><init>(Lcom/kwad/sdk/api/core/KSLifecycleObserver;)V

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    :goto_0
    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public isAppOnForeground()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mIsInBackground:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isEnable()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mEnable:Z

    return v0
.end method

.method public registerLifecycleListener(Lcom/kwad/sdk/api/core/KSLifecycleListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public unRegisterLifecycleListener(Lcom/kwad/sdk/api/core/KSLifecycleListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->mListeners:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method
