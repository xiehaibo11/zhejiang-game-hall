.class public Lcom/kwad/sdk/core/c/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/c/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/c/c<",
        "Landroid/app/Activity;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile aox:Lcom/kwad/sdk/core/c/b;

.field private static final mListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/c/c;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final IP:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private mApplication:Landroid/app/Application;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/c/b;->mListeners:Ljava/util/List;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/sdk/core/c/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public static AU()Lcom/kwad/sdk/core/c/b;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/c/b;->aox:Lcom/kwad/sdk/core/c/b;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/core/c/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/c/b;->aox:Lcom/kwad/sdk/core/c/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/c/b;

    invoke-direct {v1}, Lcom/kwad/sdk/core/c/b;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/c/b;->aox:Lcom/kwad/sdk/core/c/b;

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
    sget-object v0, Lcom/kwad/sdk/core/c/b;->aox:Lcom/kwad/sdk/core/c/b;

    return-object v0
.end method

.method public static AV()Z
    .locals 2

    :try_start_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    const-string v1, "3.3.26"

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/bk;->aw(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->isEnable()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/c/b;Lcom/kwad/sdk/g/a;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/c/c;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/c/b;->mListeners:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/c/c;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/c/b;->mListeners:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method private static c(Lcom/kwad/sdk/g/a;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/kwad/sdk/g/a<",
            "Lcom/kwad/sdk/core/c/c;",
            ">;)V"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/c/b;->mListeners:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/c/c;

    if-eqz v1, :cond_0

    invoke-interface {p0, v1}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static getCurrentActivity()Landroid/app/Activity;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AV()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/c/a;->isEnable()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/c/a;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v0

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public static isAppOnForeground()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AV()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->isAppOnForeground()Z

    move-result v0

    return v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/c/a;->isEnable()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/c/a;->isAppOnForeground()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public static isEnable()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AV()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/c/a;->isEnable()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/c/b$2;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/sdk/core/c/b$2;-><init>(Lcom/kwad/sdk/core/c/b;Landroid/app/Activity;Landroid/os/Bundle;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method private onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/c/b$5;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/c/b$5;-><init>(Lcom/kwad/sdk/core/c/b;Landroid/app/Activity;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method private onActivityPaused(Landroid/app/Activity;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/c/b$4;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/c/b$4;-><init>(Lcom/kwad/sdk/core/c/b;Landroid/app/Activity;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method private onActivityResumed(Landroid/app/Activity;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/c/b$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/c/b$3;-><init>(Lcom/kwad/sdk/core/c/b;Landroid/app/Activity;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method


# virtual methods
.method public final synthetic a(Ljava/lang/Object;Landroid/os/Bundle;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/c/b;->onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V

    return-void
.end method

.method public final synthetic b(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/c/b;->onActivityPaused(Landroid/app/Activity;)V

    return-void
.end method

.method public final synthetic c(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/c/b;->onActivityResumed(Landroid/app/Activity;)V

    return-void
.end method

.method public final synthetic d(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/c/b;->onActivityDestroyed(Landroid/app/Activity;)V

    return-void
.end method

.method public final getApplication()Landroid/app/Application;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/c/b;->mApplication:Landroid/app/Application;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/c/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_2

    if-nez p1, :cond_0

    goto :goto_1

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/core/c/b;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    :try_start_0
    const-class p1, Lcom/kwad/sdk/service/a/e;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p1}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object p1

    const-string v0, "3.3.26"

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/bk;->aw(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getApplication()Landroid/app/Application;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/c/b;->mApplication:Landroid/app/Application;

    invoke-static {}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->getInstance()Lcom/kwad/sdk/api/core/KSLifecycleObserver;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/c/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/c/b$1;-><init>(Lcom/kwad/sdk/core/c/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/api/core/KSLifecycleObserver;->registerLifecycleListener(Lcom/kwad/sdk/api/core/KSLifecycleListener;)V

    goto :goto_0

    :cond_1
    const-string p1, "LifecycleHolder"

    const-string v0, "init KSLifecycleObserver not support"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->M(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_0
    invoke-static {}, Lcom/kwad/sdk/m/l;->KT()Landroid/app/Application;

    move-result-object p1

    if-eqz p1, :cond_2

    iput-object p1, p0, Lcom/kwad/sdk/core/c/b;->mApplication:Landroid/app/Application;

    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/sdk/core/c/b;->mApplication:Landroid/app/Application;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/c/a;->init(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/a;->AS()Lcom/kwad/sdk/core/c/a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/core/c/a;->a(Lcom/kwad/sdk/core/c/c;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public final onBackToBackground()V
    .locals 2

    const-string v0, "LifecycleHolder"

    const-string v1, "onBackToBackground old"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->M(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/c/b$7;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/c/b$7;-><init>(Lcom/kwad/sdk/core/c/b;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final onBackToForeground()V
    .locals 2

    const-string v0, "LifecycleHolder"

    const-string v1, "onBackToForeground old"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->M(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/c/b$6;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/c/b$6;-><init>(Lcom/kwad/sdk/core/c/b;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method
