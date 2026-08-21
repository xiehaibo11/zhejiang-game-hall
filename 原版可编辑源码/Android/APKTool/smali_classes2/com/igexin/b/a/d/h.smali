.class final Lcom/igexin/b/a/d/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final a:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/igexin/b/a/d/e;",
            ">;"
        }
    .end annotation
.end field

.field b:Lcom/igexin/b/a/d/e;

.field c:Lcom/igexin/b/a/d/e;

.field volatile d:I

.field final synthetic e:Lcom/igexin/b/a/d/g;


# direct methods
.method public constructor <init>(Lcom/igexin/b/a/d/g;Lcom/igexin/b/a/d/e;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/igexin/b/a/d/h;->b:Lcom/igexin/b/a/d/e;

    new-instance p1, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {p1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object p1, p0, Lcom/igexin/b/a/d/h;->a:Ljava/util/concurrent/BlockingQueue;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/d/h;->a:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0}, Ljava/util/concurrent/BlockingQueue;->clear()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/b/a/d/h;->c:Lcom/igexin/b/a/d/e;

    return-void
.end method

.method public final a(Lcom/igexin/b/a/d/e;)V
    .locals 8

    iget v0, p0, Lcom/igexin/b/a/d/h;->d:I

    if-nez v0, :cond_0

    iget v0, p1, Lcom/igexin/b/a/d/e;->z:I

    iput v0, p0, Lcom/igexin/b/a/d/h;->d:I

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x1

    move v2, v1

    :goto_0
    if-eqz v2, :cond_6

    const-wide/16 v3, 0x0

    :try_start_0
    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->b()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->g()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->e_()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v5, :cond_1

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_1
    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v5, :cond_3

    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->o:Z

    if-eqz v5, :cond_3

    iget-wide v5, p1, Lcom/igexin/b/a/d/e;->u:J

    cmp-long v3, v5, v3

    if-eqz v3, :cond_3

    goto :goto_0

    :catchall_0
    move-exception v5

    goto :goto_1

    :catch_0
    move-exception v5

    :try_start_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "TaskService"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    new-array v7, v0, [Ljava/lang/Object;

    invoke-static {v6, v7}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iput-boolean v1, p1, Lcom/igexin/b/a/d/e;->t:Z

    iput-object v5, p1, Lcom/igexin/b/a/d/e;->B:Ljava/lang/Exception;

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->t()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->p()V

    iget-object v5, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    iget-object v5, v5, Lcom/igexin/b/a/d/g;->i:Lcom/igexin/b/a/d/f;

    invoke-virtual {v5, p1}, Lcom/igexin/b/a/d/f;->a(Ljava/lang/Object;)Z

    iget-object v5, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    iget-object v5, v5, Lcom/igexin/b/a/d/g;->i:Lcom/igexin/b/a/d/f;

    invoke-virtual {v5}, Lcom/igexin/b/a/d/f;->f()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v5, :cond_2

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_2
    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v5, :cond_3

    iget-boolean v5, p1, Lcom/igexin/b/a/d/e;->o:Z

    if-eqz v5, :cond_3

    iget-wide v5, p1, Lcom/igexin/b/a/d/e;->u:J

    cmp-long v3, v5, v3

    if-eqz v3, :cond_3

    goto :goto_0

    :cond_3
    const/4 p1, 0x0

    move v2, v0

    goto :goto_0

    :goto_1
    iget-boolean v6, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v6, :cond_4

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_4
    iget-boolean v6, p1, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v6, :cond_5

    iget-boolean v6, p1, Lcom/igexin/b/a/d/e;->o:Z

    if-eqz v6, :cond_5

    iget-wide v6, p1, Lcom/igexin/b/a/d/e;->u:J

    cmp-long v3, v6, v3

    if-eqz v3, :cond_5

    goto/16 :goto_0

    :cond_5
    throw v5

    :cond_6
    return-void
.end method

.method final b()Lcom/igexin/b/a/d/e;
    .locals 5

    :catch_0
    :cond_0
    :goto_0
    iget v0, p0, Lcom/igexin/b/a/d/h;->d:I

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    :try_start_0
    iget-object v0, p0, Lcom/igexin/b/a/d/h;->a:Ljava/util/concurrent/BlockingQueue;

    iget-object v2, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    iget-wide v2, v2, Lcom/igexin/b/a/d/g;->e:J

    sget-object v4, Ljava/util/concurrent/TimeUnit;->NANOSECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-interface {v0, v2, v3, v4}, Ljava/util/concurrent/BlockingQueue;->poll(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/b/a/d/e;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    iget-object v0, p0, Lcom/igexin/b/a/d/h;->a:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0}, Ljava/util/concurrent/BlockingQueue;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    iget-object v0, v0, Lcom/igexin/b/a/d/g;->c:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v2, p0, Lcom/igexin/b/a/d/h;->a:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v2}, Ljava/util/concurrent/BlockingQueue;->isEmpty()Z

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v2, :cond_2

    :try_start_2
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :cond_2
    :try_start_3
    iget-object v2, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    iget-object v2, v2, Lcom/igexin/b/a/d/g;->b:Ljava/util/HashMap;

    iget v3, p0, Lcom/igexin/b/a/d/h;->d:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/igexin/b/a/d/h;->c:Lcom/igexin/b/a/d/e;

    invoke-virtual {v2}, Lcom/igexin/b/a/d/e;->e()V

    const/4 v2, 0x0

    iput v2, p0, Lcom/igexin/b/a/d/h;->d:I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw v1
    :try_end_4
    .catch Ljava/lang/InterruptedException; {:try_start_4 .. :try_end_4} :catch_0

    :cond_3
    return-object v1
.end method

.method public final run()V
    .locals 3

    const/4 v0, 0x1

    :cond_0
    :goto_0
    if-eqz v0, :cond_4

    :try_start_0
    iget-object v0, p0, Lcom/igexin/b/a/d/h;->b:Lcom/igexin/b/a/d/e;

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/igexin/b/a/d/h;->b:Lcom/igexin/b/a/d/e;

    :goto_1
    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/igexin/b/a/d/h;->b()Lcom/igexin/b/a/d/e;

    move-result-object v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/g;->a()Lcom/igexin/b/a/d/e;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_3

    :cond_1
    iget-object v0, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    invoke-virtual {v0, p0}, Lcom/igexin/b/a/d/g;->a(Lcom/igexin/b/a/d/h;)Z

    move-result v0

    if-nez v0, :cond_0

    :goto_2
    invoke-virtual {p0}, Lcom/igexin/b/a/d/h;->a()V

    goto :goto_0

    :cond_2
    :goto_3
    :try_start_1
    iput-object v1, p0, Lcom/igexin/b/a/d/h;->c:Lcom/igexin/b/a/d/e;

    invoke-virtual {p0, v0}, Lcom/igexin/b/a/d/h;->a(Lcom/igexin/b/a/d/e;)V

    iput-object v0, p0, Lcom/igexin/b/a/d/h;->c:Lcom/igexin/b/a/d/e;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v0, v1

    goto :goto_1

    :catchall_0
    move-exception v0

    goto :goto_4

    :catch_0
    move-exception v0

    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TaskService|Worker|run()|error"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    iget-object v0, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    invoke-virtual {v0, p0}, Lcom/igexin/b/a/d/g;->a(Lcom/igexin/b/a/d/h;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    :goto_4
    iget-object v1, p0, Lcom/igexin/b/a/d/h;->e:Lcom/igexin/b/a/d/g;

    invoke-virtual {v1, p0}, Lcom/igexin/b/a/d/g;->a(Lcom/igexin/b/a/d/h;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {p0}, Lcom/igexin/b/a/d/h;->a()V

    :cond_3
    throw v0

    :cond_4
    return-void
.end method
