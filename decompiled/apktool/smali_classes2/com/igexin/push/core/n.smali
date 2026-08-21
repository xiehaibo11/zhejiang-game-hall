.class public Lcom/igexin/push/core/n;
.super Ljava/lang/Object;


# static fields
.field private static volatile e:Lcom/igexin/push/core/n;


# instance fields
.field private final a:Ljava/lang/Object;

.field private b:Z

.field private final c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private final d:Ljava/util/concurrent/ExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 8

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/n;->c:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v7}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    const/4 v2, 0x0

    const/4 v3, 0x1

    const-wide/16 v4, 0x1e

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    iput-object v0, p0, Lcom/igexin/push/core/n;->d:Ljava/util/concurrent/ExecutorService;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/push/core/n;->b:Z

    invoke-direct {p0}, Lcom/igexin/push/core/n;->b()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/n;
    .locals 2

    sget-object v0, Lcom/igexin/push/core/n;->e:Lcom/igexin/push/core/n;

    if-nez v0, :cond_1

    const-class v0, Lcom/igexin/push/core/n;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/n;->e:Lcom/igexin/push/core/n;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/core/n;

    invoke-direct {v1}, Lcom/igexin/push/core/n;-><init>()V

    sput-object v1, Lcom/igexin/push/core/n;->e:Lcom/igexin/push/core/n;

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
    sget-object v0, Lcom/igexin/push/core/n;->e:Lcom/igexin/push/core/n;

    return-object v0
.end method

.method static synthetic a(Lcom/igexin/push/core/n;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/n;->c()V

    return-void
.end method

.method private b()V
    .locals 3

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/igexin/push/core/o;

    invoke-direct {v1, p0}, Lcom/igexin/push/core/o;-><init>(Lcom/igexin/push/core/n;)V

    const-string v2, "MessageTaskIDPreferences-load"

    invoke-direct {v0, v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private c()V
    .locals 7

    iget-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-boolean v1, p0, Lcom/igexin/push/core/n;->b:Z

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_7

    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/32 v4, 0x240c8400

    sub-long/2addr v2, v4

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, " createtime >= "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v3

    const-string v4, "message"

    const-string v5, "taskid"

    filled-new-array {v5}, [Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5, v2}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    if-eqz v2, :cond_2

    :try_start_2
    invoke-interface {v2}, Landroid/database/Cursor;->getCount()I

    move-result v3

    if-gtz v3, :cond_1

    goto :goto_1

    :cond_1
    :goto_0
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/igexin/push/core/n;->c:Ljava/util/Map;

    const-string v4, "taskid"

    invoke-interface {v2, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {v2, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, v4, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    :goto_1
    const-string v0, "MessageTaskIDPreference|db cnt = 0"

    const/4 v3, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_3
    iget-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v0

    :try_start_3
    iput-boolean v1, p0, Lcom/igexin/push/core/n;->b:Z

    iget-object v1, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v2, :cond_5

    :try_start_4
    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_5

    goto :goto_4

    :catchall_0
    move-exception v1

    :try_start_5
    monitor-exit v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    throw v1

    :catchall_1
    move-exception v0

    goto :goto_2

    :catch_0
    move-object v0, v2

    goto :goto_3

    :catchall_2
    move-exception v2

    move-object v6, v2

    move-object v2, v0

    move-object v0, v6

    :goto_2
    iget-object v3, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v3

    :try_start_6
    iput-boolean v1, p0, Lcom/igexin/push/core/n;->b:Z

    iget-object v1, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    monitor-exit v3
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    if-eqz v2, :cond_4

    :try_start_7
    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catchall_3
    :cond_4
    throw v0

    :catchall_4
    move-exception v0

    :try_start_8
    monitor-exit v3
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    throw v0

    :catch_1
    :goto_3
    iget-object v2, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v2

    :try_start_9
    iput-boolean v1, p0, Lcom/igexin/push/core/n;->b:Z

    iget-object v1, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    monitor-exit v2
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_6

    if-eqz v0, :cond_5

    :try_start_a
    invoke-interface {v0}, Landroid/database/Cursor;->close()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_5

    :catchall_5
    :cond_5
    :goto_4
    return-void

    :catchall_6
    move-exception v0

    :try_start_b
    monitor-exit v2
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_6

    throw v0

    :catchall_7
    move-exception v1

    :try_start_c
    monitor-exit v0
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_7

    throw v1
.end method

.method private d()V
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v0

    :catch_0
    :goto_0
    :try_start_0
    iget-boolean v1, p0, Lcom/igexin/push/core/n;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    :try_start_1
    iget-object v1, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->wait()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_0
    :try_start_2
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v1
.end method


# virtual methods
.method public a(Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/core/n;->d()V

    iget-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/n;->c:Ljava/util/Map;

    const/4 v2, 0x0

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object p1, p0, Lcom/igexin/push/core/n;->d:Ljava/util/concurrent/ExecutorService;

    new-instance v0, Lcom/igexin/push/core/p;

    invoke-direct {v0, p0, p2}, Lcom/igexin/push/core/p;-><init>(Lcom/igexin/push/core/n;Landroid/content/ContentValues;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public a(Ljava/lang/String;)Z
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/core/n;->d()V

    iget-object v0, p0, Lcom/igexin/push/core/n;->a:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/n;->c:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    monitor-exit v0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public b(Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 2

    invoke-virtual {p0, p1}, Lcom/igexin/push/core/n;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/n;->d:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/push/core/q;

    invoke-direct {v1, p0, p2, p1}, Lcom/igexin/push/core/q;-><init>(Lcom/igexin/push/core/n;Landroid/content/ContentValues;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
