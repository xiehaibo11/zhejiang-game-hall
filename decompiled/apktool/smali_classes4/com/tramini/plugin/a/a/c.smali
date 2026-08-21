.class public Lcom/tramini/plugin/a/a/c;
.super Ljava/lang/Object;


# static fields
.field private static b:Lcom/tramini/plugin/a/a/c;


# instance fields
.field a:Z

.field private c:Landroid/content/Context;

.field private d:Landroid/os/Handler;

.field private e:Landroid/content/BroadcastReceiver;

.field private f:Landroid/content/BroadcastReceiver;

.field private g:[Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 60
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 182
    iput-boolean v0, p0, Lcom/tramini/plugin/a/a/c;->a:Z

    .line 61
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tramini/plugin/a/a/c;->d:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/tramini/plugin/a/a/c;Landroid/content/BroadcastReceiver;)Landroid/content/BroadcastReceiver;
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c;->e:Landroid/content/BroadcastReceiver;

    return-object p1
.end method

.method static synthetic a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    return-object p0
.end method

.method public static a()Lcom/tramini/plugin/a/a/c;
    .locals 2

    .line 52
    sget-object v0, Lcom/tramini/plugin/a/a/c;->b:Lcom/tramini/plugin/a/a/c;

    if-nez v0, :cond_0

    .line 53
    const-class v0, Lcom/tramini/plugin/a/a/c;

    monitor-enter v0

    .line 54
    :try_start_0
    new-instance v1, Lcom/tramini/plugin/a/a/c;

    invoke-direct {v1}, Lcom/tramini/plugin/a/a/c;-><init>()V

    sput-object v1, Lcom/tramini/plugin/a/a/c;->b:Lcom/tramini/plugin/a/a/c;

    .line 55
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 57
    :cond_0
    :goto_0
    sget-object v0, Lcom/tramini/plugin/a/a/c;->b:Lcom/tramini/plugin/a/a/c;

    return-object v0
.end method

.method static synthetic a(Lcom/tramini/plugin/a/a/c;Landroid/content/Context;)V
    .locals 1

    .line 1175
    invoke-static {p1}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/b/b;->b()Lcom/tramini/plugin/b/a;

    move-result-object v0

    .line 1176
    invoke-direct {p0, v0}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/b/a;)V

    .line 1179
    invoke-virtual {p0, p1}, Lcom/tramini/plugin/a/a/c;->b(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/tramini/plugin/a/a/c;Lcom/tramini/plugin/b/a;)V
    .locals 0

    .line 38
    invoke-direct {p0, p1}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/b/a;)V

    return-void
.end method

.method public static a(Ljava/lang/Runnable;)V
    .locals 1

    .line 342
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic b(Lcom/tramini/plugin/a/a/c;)Landroid/content/BroadcastReceiver;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tramini/plugin/a/a/c;->e:Landroid/content/BroadcastReceiver;

    return-object p0
.end method

.method private b(Lcom/tramini/plugin/b/a;)V
    .locals 1

    .line 233
    new-instance v0, Lcom/tramini/plugin/a/a/c$4;

    invoke-direct {v0, p0, p1}, Lcom/tramini/plugin/a/a/c$4;-><init>(Lcom/tramini/plugin/a/a/c;Lcom/tramini/plugin/b/a;)V

    invoke-direct {p0, v0}, Lcom/tramini/plugin/a/a/c;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b(Ljava/lang/Runnable;)V
    .locals 2

    .line 334
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 335
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    return-void

    .line 337
    :cond_0
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->d:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private static b(Ljava/lang/Runnable;J)V
    .locals 1

    .line 354
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private static c()V
    .locals 0

    return-void
.end method

.method private c(Landroid/content/Context;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    return-void
.end method

.method private c(Ljava/lang/Runnable;)V
    .locals 1

    .line 350
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->d:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private d(Landroid/content/Context;)V
    .locals 1

    .line 175
    invoke-static {p1}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/b/b;->b()Lcom/tramini/plugin/b/a;

    move-result-object v0

    .line 176
    invoke-direct {p0, v0}, Lcom/tramini/plugin/a/a/c;->b(Lcom/tramini/plugin/b/a;)V

    .line 179
    invoke-virtual {p0, p1}, Lcom/tramini/plugin/a/a/c;->b(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 84
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 1065
    iput-object v0, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    .line 86
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$1;

    invoke-direct {v1, p0, p1}, Lcom/tramini/plugin/a/a/c$1;-><init>(Lcom/tramini/plugin/a/a/c;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    .line 95
    invoke-static {p1}, Lcom/tramini/plugin/a/g/h;->a(Landroid/content/Context;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    return-void

    .line 101
    :cond_1
    :try_start_1
    iget-object p1, p0, Lcom/tramini/plugin/a/a/c;->f:Landroid/content/BroadcastReceiver;

    if-eqz p1, :cond_2

    .line 102
    iget-object p1, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    invoke-static {p1}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/a/a/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->f:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v0}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    .line 103
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c;->f:Landroid/content/BroadcastReceiver;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 108
    :catchall_0
    :cond_2
    :try_start_2
    new-instance p1, Lcom/tramini/plugin/a/c;

    invoke-direct {p1}, Lcom/tramini/plugin/a/c;-><init>()V

    iput-object p1, p0, Lcom/tramini/plugin/a/a/c;->f:Landroid/content/BroadcastReceiver;

    .line 109
    new-instance p1, Landroid/content/IntentFilter;

    invoke-direct {p1}, Landroid/content/IntentFilter;-><init>()V

    .line 110
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 111
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tramini/plugin/a/g/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 112
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tramini/plugin/a/a/c;->f:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1, p1}, Lcom/tramini/plugin/a/a/b;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    return-void
.end method

.method public final declared-synchronized a(Lcom/tramini/plugin/b/a;)V
    .locals 4

    monitor-enter p0

    .line 185
    :try_start_0
    iget-boolean v0, p0, Lcom/tramini/plugin/a/a/c;->a:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 186
    monitor-exit p0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    const/4 v0, 0x1

    .line 190
    :try_start_1
    iput-boolean v0, p0, Lcom/tramini/plugin/a/a/c;->a:Z

    .line 191
    invoke-static {}, Lcom/tramini/plugin/a/g/b;->a()Lcom/tramini/plugin/a/g/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tramini/plugin/a/g/b;->a(Lcom/tramini/plugin/b/a;)V

    .line 193
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$2;

    invoke-direct {v1, p0, p1}, Lcom/tramini/plugin/a/a/c$2;-><init>(Lcom/tramini/plugin/a/a/c;Lcom/tramini/plugin/b/a;)V

    const-wide/32 v2, 0x1d4c0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/Runnable;J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 200
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/Runnable;J)V
    .locals 1

    .line 346
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->d:Landroid/os/Handler;

    invoke-virtual {v0, p1, p2, p3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final a([Ljava/lang/String;)V
    .locals 0

    .line 279
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c;->g:[Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 5

    .line 283
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->g:[Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 287
    :cond_0
    array-length v2, v0

    move v3, v1

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v0, v3

    .line 288
    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return v1
.end method

.method public final b()Landroid/content/Context;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c;->c:Landroid/content/Context;

    return-object v0
.end method

.method public final b(Landroid/content/Context;)V
    .locals 2

    .line 209
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$3;

    invoke-direct {v1, p0, p1}, Lcom/tramini/plugin/a/a/c$3;-><init>(Lcom/tramini/plugin/a/a/c;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 303
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$5;

    invoke-direct {v1, p0, p1}, Lcom/tramini/plugin/a/a/c$5;-><init>(Lcom/tramini/plugin/a/a/c;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 2

    .line 317
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$6;

    invoke-direct {v1, p0, p1}, Lcom/tramini/plugin/a/a/c$6;-><init>(Lcom/tramini/plugin/a/a/c;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
