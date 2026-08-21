.class public final Lcom/tkay/core/common/b/e;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# instance fields
.field a:I

.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field c:Z

.field d:Z


# direct methods
.method public constructor <init>(Z)V
    .locals 2

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 28
    iput-boolean v0, p0, Lcom/tkay/core/common/b/e;->c:Z

    .line 30
    iput-boolean v0, p0, Lcom/tkay/core/common/b/e;->d:Z

    .line 34
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/b/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 36
    iput-boolean p1, p0, Lcom/tkay/core/common/b/e;->d:Z

    .line 38
    invoke-static {}, Lcom/tkay/core/common/b/e;->a()V

    :cond_0
    return-void
.end method

.method private static a()V
    .locals 3

    .line 75
    invoke-static {}, Lcom/tkay/core/common/k/c;->a()V

    .line 77
    new-instance v0, Lcom/tkay/core/common/f/d;

    invoke-direct {v0}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 78
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0x15

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    return-void
.end method


# virtual methods
.method public final onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 0

    .line 67
    iget-boolean p1, p0, Lcom/tkay/core/common/b/e;->d:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 68
    iput-boolean p1, p0, Lcom/tkay/core/common/b/e;->d:Z

    .line 70
    invoke-static {}, Lcom/tkay/core/common/b/e;->a()V

    :cond_0
    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onActivityStarted(Landroid/app/Activity;)V
    .locals 3

    .line 49
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/m;->a(Landroid/app/Activity;)V

    .line 51
    iget v0, p0, Lcom/tkay/core/common/b/e;->a:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/core/common/b/e;->a:I

    .line 52
    iget-object v0, p0, Lcom/tkay/core/common/b/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, p1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    iget p1, p0, Lcom/tkay/core/common/b/e;->a:I

    if-ne p1, v1, :cond_0

    iget-boolean p1, p0, Lcom/tkay/core/common/b/e;->d:Z

    if-nez p1, :cond_0

    .line 54
    iput-boolean v1, p0, Lcom/tkay/core/common/b/e;->d:Z

    .line 56
    invoke-static {}, Lcom/tkay/core/common/b/e;->a()V

    :cond_0
    return-void
.end method

.method public final onActivityStopped(Landroid/app/Activity;)V
    .locals 3

    .line 83
    iget v0, p0, Lcom/tkay/core/common/b/e;->a:I

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/core/common/b/e;->a:I

    .line 84
    iget-object v0, p0, Lcom/tkay/core/common/b/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    .line 85
    iget-boolean v2, p0, Lcom/tkay/core/common/b/e;->c:Z

    if-nez v2, :cond_0

    if-nez v0, :cond_0

    .line 86
    iput-boolean v1, p0, Lcom/tkay/core/common/b/e;->c:Z

    .line 87
    iget v2, p0, Lcom/tkay/core/common/b/e;->a:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/tkay/core/common/b/e;->a:I

    :cond_0
    if-eqz v0, :cond_1

    .line 92
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 98
    :catchall_0
    :cond_1
    iget p1, p0, Lcom/tkay/core/common/b/e;->a:I

    if-nez p1, :cond_2

    const/4 p1, 0x0

    .line 99
    iput-boolean p1, p0, Lcom/tkay/core/common/b/e;->d:Z

    :cond_2
    return-void
.end method
