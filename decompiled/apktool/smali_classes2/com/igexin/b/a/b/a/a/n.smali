.class public final Lcom/igexin/b/a/b/a/a/n;
.super Lcom/igexin/b/a/b/a/a/a;


# instance fields
.field private L:Lcom/igexin/b/a/b/a/a/a/c;

.field private M:Lcom/igexin/b/a/b/d;

.field public i:Lcom/igexin/b/a/b/b;

.field j:Lcom/igexin/b/a/b/a/a/p;


# direct methods
.method public constructor <init>(Lcom/igexin/b/a/b/a/a/p;Lcom/igexin/b/a/b/b;Lcom/igexin/b/a/b/d;)V
    .locals 2

    const/16 v0, -0x7f4

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1, p2}, Lcom/igexin/b/a/b/a/a/a;-><init>(ILjava/lang/String;Lcom/igexin/b/a/b/b;)V

    iput-object p2, p0, Lcom/igexin/b/a/b/a/a/n;->i:Lcom/igexin/b/a/b/b;

    iput-object p3, p0, Lcom/igexin/b/a/b/a/a/n;->M:Lcom/igexin/b/a/b/d;

    iput-object p1, p0, Lcom/igexin/b/a/b/a/a/n;->j:Lcom/igexin/b/a/b/a/a/p;

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/b/a/a/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    return-void
.end method

.method public b()V
    .locals 10

    invoke-super {p0}, Lcom/igexin/b/a/b/a/a/a;->b()V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "GS-W|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " running"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {v1, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/b/a/a/f;->a()Lcom/igexin/b/a/b/a/a/f;

    move-result-object v1

    :catch_0
    :goto_0
    iget-boolean v4, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    if-eqz v4, :cond_3

    invoke-virtual {v0}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v4

    if-nez v4, :cond_3

    iget-boolean v4, p0, Lcom/igexin/b/a/b/a/a/n;->e:Z

    if-nez v4, :cond_3

    :try_start_0
    iget-object v4, v1, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v4}, Ljava/util/concurrent/locks/Lock;->lock()V

    iget-object v4, v1, Lcom/igexin/b/a/b/a/a/f;->c:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v4}, Ljava/util/concurrent/ConcurrentLinkedQueue;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_0

    iget-boolean v4, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    if-eqz v4, :cond_0

    iget-object v4, v1, Lcom/igexin/b/a/b/a/a/f;->b:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v4}, Ljava/util/concurrent/locks/Condition;->await()V

    :cond_0
    iget-object v4, v1, Lcom/igexin/b/a/b/a/a/f;->c:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v4}, Ljava/util/concurrent/ConcurrentLinkedQueue;->poll()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/igexin/b/a/b/a/a/m;

    if-eqz v4, :cond_2

    iget-boolean v5, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    if-eqz v5, :cond_2

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->M:Lcom/igexin/b/a/b/d;

    iput-object v5, v4, Lcom/igexin/b/a/b/a/a/m;->d:Lcom/igexin/b/a/b/d;

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->M:Lcom/igexin/b/a/b/d;

    if-eqz v5, :cond_2

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->j:Lcom/igexin/b/a/b/a/a/p;

    if-eqz v5, :cond_2

    iget-boolean v5, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    if-eqz v5, :cond_2

    sget-object v5, Lcom/igexin/b/a/b/a/a/b;->a:Lcom/igexin/b/a/b/a/a/b;

    iput-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->f:Lcom/igexin/b/a/b/a/a/b;

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    if-eqz v5, :cond_1

    iget-boolean v5, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    if-eqz v5, :cond_1

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    invoke-interface {v5, v4}, Lcom/igexin/b/a/b/a/a/a/c;->a(Lcom/igexin/b/a/b/a/a/m;)V

    :cond_1
    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->j:Lcom/igexin/b/a/b/a/a/p;

    iget-object v6, p0, Lcom/igexin/b/a/b/a/a/n;->i:Lcom/igexin/b/a/b/b;

    const/4 v7, 0x0

    iget-object v8, p0, Lcom/igexin/b/a/b/a/a/n;->M:Lcom/igexin/b/a/b/d;

    iget-object v9, v4, Lcom/igexin/b/a/b/a/a/m;->c:Ljava/lang/Object;

    invoke-virtual {v6, v7, v8, v9}, Lcom/igexin/b/a/b/b;->d(Lcom/igexin/b/a/b/e;Lcom/igexin/b/a/b/d;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, [B

    check-cast v6, [B

    invoke-virtual {v5, v6}, Lcom/igexin/b/a/b/a/a/p;->a([B)V

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " --> "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v4, Lcom/igexin/b/a/b/a/a/m;->c:Ljava/lang/Object;

    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "-- send success"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    :goto_1
    :try_start_1
    iget-object v4, v1, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v4}, Ljava/util/concurrent/locks/Lock;->unlock()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto/16 :goto_0

    :catchall_0
    move-exception v4

    :try_start_2
    iput-boolean v3, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v6, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    if-eq v5, v6, :cond_2

    sget-object v5, Lcom/igexin/b/a/b/a/a/b;->b:Lcom/igexin/b/a/b/a/a/b;

    iput-object v5, p0, Lcom/igexin/b/a/b/a/a/n;->f:Lcom/igexin/b/a/b/a/a/b;

    invoke-virtual {v4}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/igexin/b/a/b/a/a/n;->g:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    :try_start_3
    iget-object v1, v1, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->unlock()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    throw v0

    :cond_3
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/b/a/b/a/a/n;->e:Z

    new-array v0, v3, [Ljava/lang/Object;

    const-string v1, "GS-W|finish ~~~~~~"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public final b_()I
    .locals 1

    const/16 v0, -0x7f4

    return v0
.end method

.method public f()V
    .locals 3

    invoke-super {p0}, Lcom/igexin/b/a/b/a/a/a;->f()V

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "GS-W|wt dispose"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->b:Lcom/igexin/b/a/b/a/a/b;

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    new-instance v1, Ljava/lang/Exception;

    iget-object v2, p0, Lcom/igexin/b/a/b/a/a/n;->g:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1}, Lcom/igexin/b/a/b/a/a/a/c;->a(Ljava/lang/Exception;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    invoke-interface {v0, p0}, Lcom/igexin/b/a/b/a/a/a/c;->a(Lcom/igexin/b/a/b/e;)V

    :cond_1
    :goto_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->L:Lcom/igexin/b/a/b/a/a/a/c;

    return-void
.end method

.method public j()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/b/a/b/a/a/n;->h:Z

    sget-object v0, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/n;->f:Lcom/igexin/b/a/b/a/a/b;

    invoke-static {}, Lcom/igexin/b/a/b/a/a/f;->a()Lcom/igexin/b/a/b/a/a/f;

    move-result-object v0

    :try_start_0
    iget-boolean v1, p0, Lcom/igexin/b/a/b/a/a/n;->e:Z

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v1}, Ljava/util/concurrent/locks/Lock;->lock()V

    iget-object v1, v0, Lcom/igexin/b/a/b/a/a/f;->b:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v1}, Ljava/util/concurrent/locks/Condition;->signalAll()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catch_0
    :cond_0
    :try_start_1
    iget-object v0, v0, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_2
    iget-object v0, v0, Lcom/igexin/b/a/b/a/a/f;->a:Ljava/util/concurrent/locks/Lock;

    invoke-interface {v0}, Ljava/util/concurrent/locks/Lock;->unlock()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    throw v1

    :catch_2
    :goto_0
    return-void
.end method
