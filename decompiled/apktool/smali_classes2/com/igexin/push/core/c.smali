.class public Lcom/igexin/push/core/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/b/a/d/a/b;


# static fields
.field private static l:Lcom/igexin/push/core/c;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Lcom/igexin/push/core/f;

.field private c:Landroid/os/Handler;

.field private d:Landroid/os/Handler;

.field private e:Ljava/util/concurrent/ConcurrentLinkedQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentLinkedQueue<",
            "Landroid/os/Message;",
            ">;"
        }
    .end annotation
.end field

.field private f:Lcom/igexin/push/core/a/e;

.field private g:Lcom/igexin/b/a/b/c;

.field private h:Lcom/igexin/b/a/b/b;

.field private volatile i:Lcom/igexin/push/e/a;

.field private final j:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private k:Lcom/igexin/push/b/b;


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/igexin/push/core/c;->j:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/c;->e:Ljava/util/concurrent/ConcurrentLinkedQueue;

    new-instance v0, Lcom/igexin/push/core/f;

    invoke-direct {v0}, Lcom/igexin/push/core/f;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/c;->b:Lcom/igexin/push/core/f;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    new-instance v0, Lcom/igexin/push/d/a;

    iget-object v1, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/d/a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    invoke-virtual {v1, v0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/a/a;)V

    iget-object v0, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    invoke-virtual {v0, p0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/a/b;)Z

    new-instance v0, Lcom/igexin/push/e/a;

    invoke-direct {v0}, Lcom/igexin/push/e/a;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/c;->i:Lcom/igexin/push/e/a;

    return-void
.end method

.method public static a()Lcom/igexin/push/core/c;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/c;->l:Lcom/igexin/push/core/c;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/c;

    invoke-direct {v0}, Lcom/igexin/push/core/c;-><init>()V

    sput-object v0, Lcom/igexin/push/core/c;->l:Lcom/igexin/push/core/c;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/c;->l:Lcom/igexin/push/core/c;

    return-object v0
.end method

.method private n()V
    .locals 3

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.TIME_SET"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.SCREEN_ON"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.SCREEN_OFF"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-static {}, Lcom/igexin/push/core/l;->a()Lcom/igexin/push/core/l;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)Z
    .locals 2

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    iget-object p1, p0, Lcom/igexin/push/core/c;->b:Lcom/igexin/push/core/f;

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/f;->isAlive()Z

    move-result p1

    if-eqz p1, :cond_0

    new-array p1, v0, [Ljava/lang/Object;

    const-string v0, "CoreLogic|coreThread is alive +++++"

    invoke-static {v0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v1

    :cond_0
    iget-object p1, p0, Lcom/igexin/push/core/c;->j:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result p1

    if-nez p1, :cond_1

    new-array p1, v0, [Ljava/lang/Object;

    const-string v0, "CoreLogic|start coreThread +++++"

    invoke-static {v0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/push/core/c;->b:Lcom/igexin/push/core/f;

    invoke-virtual {p1}, Lcom/igexin/push/core/f;->start()V

    new-instance p1, Lcom/igexin/push/core/b;

    iget-object v0, p0, Lcom/igexin/push/core/c;->b:Lcom/igexin/push/core/f;

    invoke-virtual {v0}, Lcom/igexin/push/core/f;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/igexin/push/core/b;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/igexin/push/core/c;->c:Landroid/os/Handler;

    new-instance p1, Lcom/igexin/b/a/b/a/a/d;

    iget-object v0, p0, Lcom/igexin/push/core/c;->b:Lcom/igexin/push/core/f;

    invoke-virtual {v0}, Lcom/igexin/push/core/f;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/igexin/b/a/b/a/a/d;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/igexin/push/core/c;->d:Landroid/os/Handler;

    :cond_1
    return v1
.end method

.method public a(Landroid/os/Message;)Z
    .locals 1

    sget-object v0, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/core/c;->c:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/c;->e:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentLinkedQueue;->add(Ljava/lang/Object;)Z

    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/f;)Z
    .locals 0

    iget-object p2, p0, Lcom/igexin/push/core/c;->f:Lcom/igexin/push/core/a/e;

    if-eqz p2, :cond_0

    invoke-virtual {p2, p1}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public a(Lcom/igexin/b/a/d/e;Lcom/igexin/b/a/d/f;)Z
    .locals 0

    iget-object p2, p0, Lcom/igexin/push/core/c;->f:Lcom/igexin/push/core/a/e;

    if-eqz p2, :cond_0

    invoke-virtual {p2, p1}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/b/a/d/e;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public a(Lcom/igexin/push/f/b/g;)Z
    .locals 3

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v2

    invoke-virtual {v2, p1, v1, v0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    return v0
.end method

.method public a(Z)Z
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "CoreLogic|start sdkSwitch isSlave = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    if-nez v0, :cond_0

    return v1

    :cond_0
    new-instance v0, Lcom/igexin/sdk/a/c;

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/sdk/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/c;->b()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    new-instance v0, Lcom/igexin/sdk/a/d;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/igexin/sdk/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/d;->a()V

    sput-boolean v1, Lcom/igexin/push/core/d;->k:Z

    new-instance v0, Lcom/igexin/sdk/a/c;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/igexin/sdk/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/c;->a()V

    :cond_1
    if-eqz p1, :cond_2

    new-instance p1, Lcom/igexin/sdk/a/d;

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/igexin/sdk/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1}, Lcom/igexin/sdk/a/d;->a()V

    sput-boolean v1, Lcom/igexin/push/core/d;->k:Z

    :cond_2
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/e/a;->b()V

    return v1
.end method

.method public b()Landroid/os/Handler;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/c;->d:Landroid/os/Handler;

    return-object v0
.end method

.method public c()V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lcom/igexin/push/b/b;

    iget-object v2, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/igexin/push/b/b;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/igexin/push/core/c;->k:Lcom/igexin/push/b/b;

    iget-object v1, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/igexin/push/core/d;->a(Landroid/content/Context;)Z

    invoke-static {}, Lcom/igexin/push/config/h;->a()Lcom/igexin/push/config/h;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/config/h;->b()Z

    invoke-direct {p0}, Lcom/igexin/push/core/c;->n()V

    new-instance v1, Lcom/igexin/push/b/a;

    invoke-direct {v1}, Lcom/igexin/push/b/a;-><init>()V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/igexin/push/b/a;->a(Lcom/igexin/push/core/b/b;)V

    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/igexin/push/b/a;->a(Lcom/igexin/push/core/b/b;)V

    invoke-static {}, Lcom/igexin/push/core/b/c;->a()Lcom/igexin/push/core/b/c;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/igexin/push/b/a;->a(Lcom/igexin/push/core/b/b;)V

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/igexin/push/b/a;->a(Lcom/igexin/push/core/b/b;)V

    iget-object v2, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    const/4 v3, 0x1

    invoke-virtual {v2, v1, v3, v0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    iget-object v1, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    iget-object v2, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/igexin/b/a/b/c;->a(Landroid/content/Context;)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/b/b/a;->a([B)[B

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/igexin/b/a/b/c;->a([B)V

    iget-object v1, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    invoke-static {}, Lcom/igexin/push/f/b/b;->i()Lcom/igexin/push/f/b/b;

    move-result-object v2

    invoke-virtual {v1, v2, v0, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v1

    sput-boolean v1, Lcom/igexin/push/core/d;->W:Z

    iget-object v1, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    invoke-static {}, Lcom/igexin/push/f/b/f;->i()Lcom/igexin/push/f/b/f;

    move-result-object v2

    invoke-virtual {v1, v2, v3, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v1

    sput-boolean v1, Lcom/igexin/push/core/d;->X:Z

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/c/i;->b()V

    invoke-virtual {p0}, Lcom/igexin/push/core/c;->d()V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v1

    iput-object v1, p0, Lcom/igexin/push/core/c;->f:Lcom/igexin/push/core/a/e;

    iget-object v1, p0, Lcom/igexin/push/core/c;->i:Lcom/igexin/push/e/a;

    invoke-virtual {v1}, Lcom/igexin/push/e/a;->b()V

    invoke-static {}, Lcom/igexin/push/a/a/c;->c()Lcom/igexin/push/a/a/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/a/a/c;->d()V

    sget-object v1, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v1

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/igexin/push/core/r;->a(I)V

    invoke-static {}, Lcom/igexin/push/extension/a;->a()Lcom/igexin/push/extension/a;

    move-result-object v1

    iget-object v2, p0, Lcom/igexin/push/core/c;->a:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/igexin/push/extension/a;->a(Landroid/content/Context;)Z

    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/igexin/push/core/c;->e:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentLinkedQueue;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/igexin/push/core/c;->e:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentLinkedQueue;->poll()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Message;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/igexin/push/core/c;->c:Landroid/os/Handler;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/igexin/push/core/c;->c:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/core/w;->d()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-static {}, Lcom/igexin/assist/sdk/AssistPushManager;->getInstance()Lcom/igexin/assist/sdk/AssistPushManager;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/assist/sdk/AssistPushManager;->initialize(Landroid/content/Context;)V

    invoke-static {}, Lcom/igexin/assist/sdk/AssistPushManager;->getInstance()Lcom/igexin/assist/sdk/AssistPushManager;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/assist/sdk/AssistPushManager;->register(Landroid/content/Context;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreLogic|init|failed|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreLogic init failed = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    :catchall_1
    :goto_1
    return-void
.end method

.method public d()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/f/b/a;->i()Lcom/igexin/push/f/b/a;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/a/a/b;

    invoke-direct {v1}, Lcom/igexin/push/a/a/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/igexin/push/f/b/a;->a(Lcom/igexin/push/f/b/c;)Z

    new-instance v2, Lcom/igexin/push/a/a/a;

    invoke-direct {v2}, Lcom/igexin/push/a/a/a;-><init>()V

    invoke-virtual {v0, v2}, Lcom/igexin/push/f/b/a;->a(Lcom/igexin/push/f/b/c;)Z

    invoke-static {}, Lcom/igexin/push/a/a/c;->c()Lcom/igexin/push/a/a/c;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/push/f/b/a;->a(Lcom/igexin/push/f/b/c;)Z

    :try_start_0
    invoke-virtual {v1}, Lcom/igexin/push/a/a/b;->a()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/igexin/push/a/a/b;->a(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iget-object v1, p0, Lcom/igexin/push/core/c;->g:Lcom/igexin/b/a/b/c;

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->Y:Z

    return-void
.end method

.method public e()J
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/c;->c:Landroid/os/Handler;

    if-nez v0, :cond_0

    const-wide/16 v0, -0x2

    return-wide v0

    :cond_0
    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getId()J

    move-result-wide v0

    return-wide v0
.end method

.method public f()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method g()V
    .locals 2

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/igexin/sdk/a/d;

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/sdk/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/d;->b()V

    const/4 v0, 0x0

    sput-boolean v0, Lcom/igexin/push/core/d;->k:Z

    sput-boolean v0, Lcom/igexin/push/core/d;->o:Z

    iget-object v0, p0, Lcom/igexin/push/core/c;->i:Lcom/igexin/push/e/a;

    invoke-virtual {v0}, Lcom/igexin/push/e/a;->c()V

    :cond_0
    return-void
.end method

.method public h()Lcom/igexin/b/a/b/b;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/c;->h:Lcom/igexin/b/a/b/b;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/d/a/b;->a()Lcom/igexin/b/a/b/b;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/core/c;->h:Lcom/igexin/b/a/b/b;

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/c;->h:Lcom/igexin/b/a/b/b;

    return-object v0
.end method

.method public i()Lcom/igexin/push/e/a;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/c;->i:Lcom/igexin/push/e/a;

    return-object v0
.end method

.method public j()Lcom/igexin/push/core/a/e;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/c;->f:Lcom/igexin/push/core/a/e;

    return-object v0
.end method

.method public k()Lcom/igexin/push/b/b;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/c;->k:Lcom/igexin/push/b/b;

    return-object v0
.end method

.method public l()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public m()J
    .locals 2

    const-wide/32 v0, 0x17258

    return-wide v0
.end method
