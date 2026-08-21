.class public Lcom/czhj/sdk/common/utils/AdLifecycleManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;
    }
.end annotation


# static fields
.field private static b:Lcom/czhj/sdk/common/utils/AdLifecycleManager;


# instance fields
.field private final a:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;",
            ">;>;"
        }
    .end annotation
.end field

.field private c:Z


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    return-void
.end method

.method private a(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onCreate(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(Landroid/app/Application;)V
    .locals 1

    if-nez p1, :cond_0

    const-string p1, "activityCallBack error, application is null"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Lcom/czhj/sdk/common/utils/AdLifecycleManager$1;

    invoke-direct {v0, p0}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$1;-><init>(Lcom/czhj/sdk/common/utils/AdLifecycleManager;)V

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a(Landroid/app/Activity;)V

    return-void
.end method

.method private a(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)Z
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-ne v1, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private b(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)Ljava/lang/ref/WeakReference;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;",
            ")",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-ne v2, p1, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private b(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onStart(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b(Landroid/app/Activity;)V

    return-void
.end method

.method private c(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onPause(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->d(Landroid/app/Activity;)V

    return-void
.end method

.method private d(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onResume(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->c(Landroid/app/Activity;)V

    return-void
.end method

.method private e(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onStop(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic e(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->e(Landroid/app/Activity;)V

    return-void
.end method

.method private f(Landroid/app/Activity;)V
    .locals 2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-direct {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;->onDestroy(Landroid/app/Activity;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic f(Lcom/czhj/sdk/common/utils/AdLifecycleManager;Landroid/app/Activity;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->f(Landroid/app/Activity;)V

    return-void
.end method

.method public static getInstance()Lcom/czhj/sdk/common/utils/AdLifecycleManager;
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b:Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    if-nez v0, :cond_1

    const-class v0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b:Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    invoke-direct {v1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;-><init>()V

    sput-object v1, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b:Lcom/czhj/sdk/common/utils/AdLifecycleManager;

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
    sget-object v0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b:Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    return-object v0
.end method


# virtual methods
.method public addLifecycleListener(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method public initialize(Landroid/app/Application;)V
    .locals 1

    :try_start_0
    iget-boolean v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->c:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a(Landroid/app/Application;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public removeLifecycleListener(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->b(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)Ljava/lang/ref/WeakReference;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->a:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method
