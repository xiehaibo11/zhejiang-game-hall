.class public Lcom/igexin/push/core/x;
.super Ljava/lang/Object;


# static fields
.field public static a:Landroid/content/Context;


# instance fields
.field public b:Landroid/util/Pair;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Lcom/igexin/sdk/IPushCore;

.field private final d:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private e:Ljava/util/concurrent/ExecutorService;

.field private f:Ljava/lang/Class;

.field private g:Ljava/lang/Class;

.field private h:Ljava/lang/String;

.field private i:Landroid/content/ServiceConnection;


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/igexin/push/core/x;->d:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Lcom/igexin/push/core/z;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/z;-><init>(Lcom/igexin/push/core/x;)V

    iput-object v0, p0, Lcom/igexin/push/core/x;->i:Landroid/content/ServiceConnection;

    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/core/x;->e:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method synthetic constructor <init>(Lcom/igexin/push/core/y;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/x;-><init>()V

    return-void
.end method

.method private a(Landroid/app/Service;)I
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "ServiceManager|start by system ####"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/x;->f(Landroid/content/Context;)Z

    move-result v1

    const/4 v2, 0x2

    if-eqz v1, :cond_1

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "ServiceManager|intent = null"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/core/x;->d:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/x;->b(Landroid/app/Service;Landroid/content/Intent;)V

    :cond_0
    return v2

    :cond_1
    invoke-virtual {p1}, Landroid/app/Service;->stopSelf()V

    return v2
.end method

.method private a(Landroid/content/Intent;II)I
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/x;->c:Lcom/igexin/sdk/IPushCore;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "ServiceManager|inInit = true, call onServiceStartCommand..."

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/core/x;->c:Lcom/igexin/sdk/IPushCore;

    invoke-interface {v0, p1, p2, p3}, Lcom/igexin/sdk/IPushCore;->onServiceStartCommand(Landroid/content/Intent;II)I

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x2

    return p1
.end method

.method public static a()Lcom/igexin/push/core/x;
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/aa;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/igexin/push/core/x;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/igexin/push/core/x;->h:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/igexin/push/core/x;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/x;->h:Ljava/lang/String;

    return-object p1
.end method

.method private b(Landroid/app/Service;Landroid/content/Intent;II)I
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "ServiceManager|start from initialize..."

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    const-string v1, "ServiceManager start from initialize..."

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/core/x;->b(Landroid/app/Service;Landroid/content/Intent;)V

    iget-object p1, p0, Lcom/igexin/push/core/x;->c:Lcom/igexin/sdk/IPushCore;

    if-eqz p1, :cond_0

    invoke-interface {p1, p2, p3, p4}, Lcom/igexin/sdk/IPushCore;->onServiceStartCommand(Landroid/content/Intent;II)I

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x2

    return p1
.end method

.method static synthetic b(Lcom/igexin/push/core/x;)Landroid/content/ServiceConnection;
    .locals 0

    iget-object p0, p0, Lcom/igexin/push/core/x;->i:Landroid/content/ServiceConnection;

    return-object p0
.end method

.method private b(Landroid/app/Service;Landroid/content/Intent;)V
    .locals 1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    const-string v0, "ServiceManager|startPushCore ++++"

    invoke-static {v0, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->isLoadSuccess()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/igexin/sdk/a/a;->a()Lcom/igexin/sdk/a/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/igexin/sdk/a/a;->b()V

    invoke-static {}, Lcom/igexin/sdk/a/a;->a()Lcom/igexin/sdk/a/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/igexin/sdk/a/a;->c()Lcom/igexin/sdk/IPushCore;

    move-result-object p2

    iput-object p2, p0, Lcom/igexin/push/core/x;->c:Lcom/igexin/sdk/IPushCore;

    if-eqz p2, :cond_1

    invoke-interface {p2, p1}, Lcom/igexin/sdk/IPushCore;->start(Landroid/content/Context;)Z

    goto :goto_0

    :cond_0
    const-string p2, "ServiceManager"

    const-string v0, "load so error, stop Service"

    invoke-static {p2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p1}, Landroid/app/Service;->stopSelf()V

    :cond_1
    :goto_0
    return-void
.end method

.method private b(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/x;->e:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/push/core/y;

    invoke-direct {v1, p0, p1, p2}, Lcom/igexin/push/core/y;-><init>(Lcom/igexin/push/core/x;Landroid/content/Context;Landroid/content/Intent;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    const/4 p1, 0x1

    return p1
.end method

.method private c(Landroid/app/Service;Landroid/content/Intent;II)I
    .locals 1

    invoke-direct {p0, p1}, Lcom/igexin/push/core/x;->f(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/core/x;->b(Landroid/app/Service;Landroid/content/Intent;)V

    iget-object p1, p0, Lcom/igexin/push/core/x;->c:Lcom/igexin/sdk/IPushCore;

    if-eqz p1, :cond_1

    invoke-interface {p1, p2, p3, p4}, Lcom/igexin/sdk/IPushCore;->onServiceStartCommand(Landroid/content/Intent;II)I

    move-result p1

    return p1

    :cond_0
    iget-object p2, p0, Lcom/igexin/push/core/x;->d:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p3, 0x0

    invoke-virtual {p2, p3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-virtual {p1}, Landroid/app/Service;->stopSelf()V

    :cond_1
    const/4 p1, 0x2

    return p1
.end method

.method private f(Landroid/content/Context;)Z
    .locals 0

    invoke-static {p1}, Lcom/igexin/push/util/c;->a(Landroid/content/Context;)Z

    move-result p1

    xor-int/lit8 p1, p1, 0x1

    return p1
.end method


# virtual methods
.method public a(Landroid/app/Service;Landroid/content/Intent;II)I
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p2, :cond_0

    :try_start_0
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-static {p2, v1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p2

    iput-object p2, p0, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    invoke-direct {p0, p1}, Lcom/igexin/push/core/x;->a(Landroid/app/Service;)I

    move-result p1

    return p1

    :cond_0
    invoke-static {p1, p2}, Lcom/igexin/push/util/k;->a(Landroid/content/Context;Landroid/content/Intent;)V

    const-string v3, "action"

    invoke-virtual {p2, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/igexin/push/core/x;->d:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-direct {p0, p2, p3, p4}, Lcom/igexin/push/core/x;->a(Landroid/content/Intent;II)I

    move-result p1

    return p1

    :cond_1
    sget-object v4, Lcom/igexin/sdk/PushConsts;->ACTION_SERVICE_INITIALIZE:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v2, v1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object v1

    iput-object v1, p0, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/igexin/push/core/x;->b(Landroid/app/Service;Landroid/content/Intent;II)I

    move-result p1

    return p1

    :cond_2
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "pkg"

    invoke-virtual {p2, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object v1

    iput-object v1, p0, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/igexin/push/core/x;->c(Landroid/app/Service;Landroid/content/Intent;II)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "ServiceManager|"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x2

    return p1
.end method

.method public a(Landroid/app/Service;Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "ServiceManager|onBind..."

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0, p1, p2, v0, v0}, Lcom/igexin/push/core/x;->a(Landroid/app/Service;Landroid/content/Intent;II)I

    const/4 p1, 0x0

    return-object p1
.end method

.method public a(Landroid/app/Activity;)V
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    if-nez v1, :cond_0

    new-instance v1, Landroid/content/Intent;

    invoke-virtual {p0, v2}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    goto :goto_0

    :cond_0
    new-instance v3, Landroid/content/ComponentName;

    invoke-virtual {p0, v2}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v4

    invoke-direct {v3, v2, v4}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v1, v3}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    :goto_0
    invoke-virtual {p0, v2, v1}, Lcom/igexin/push/core/x;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    const-string v1, "ServiceManager|start PushService from da"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ServiceManager"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_1
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void

    :catchall_1
    move-exception v0

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    throw v0
.end method

.method public a(Landroid/content/Context;)V
    .locals 0

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    sput-object p1, Lcom/igexin/push/core/x;->a:Landroid/content/Context;

    return-void
.end method

.method public a(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/core/x;->b(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public b()V
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "ServiceManager|onDestroy..."

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public b(Landroid/content/Context;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "us"

    const-string v2, ""

    new-array v3, v0, [Ljava/lang/String;

    invoke-static {p1, v1, v2, v3}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    :cond_0
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ServiceManager|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v0
.end method

.method public c(Landroid/content/Context;)Ljava/lang/Class;
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/x;->g:Ljava/lang/Class;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-class v0, Lcom/igexin/sdk/PushService;

    invoke-static {p1, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Class;

    iput-object v0, p0, Lcom/igexin/push/core/x;->g:Ljava/lang/Class;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "us"

    const-string v2, ""

    new-array v3, v0, [Ljava/lang/String;

    invoke-static {p1, v1, v2, v3}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/core/x;->g:Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ServiceManager|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    const-class p1, Lcom/igexin/sdk/PushService;

    return-object p1
.end method

.method public d(Landroid/content/Context;)Ljava/lang/Class;
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/x;->f:Ljava/lang/Class;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-class v0, Lcom/igexin/sdk/GTIntentService;

    invoke-static {p1, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Class;

    iput-object v0, p0, Lcom/igexin/push/core/x;->f:Ljava/lang/Class;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "uis"

    const-string v2, ""

    new-array v3, v0, [Ljava/lang/String;

    invoke-static {p1, v1, v2, v3}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/core/x;->f:Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ServiceManager|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    iget-object p1, p0, Lcom/igexin/push/core/x;->f:Ljava/lang/Class;

    return-object p1
.end method

.method public e(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    const-string v1, "ua"

    const-string v2, ""

    invoke-static {p1, v1, v2, v0}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method
