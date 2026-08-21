.class final Lcom/igexin/b/a/d/j;
.super Ljava/lang/Thread;


# instance fields
.field volatile a:Z

.field b:Lcom/igexin/b/a/d/g;

.field final synthetic c:Lcom/igexin/b/a/d/f;


# direct methods
.method public constructor <init>(Lcom/igexin/b/a/d/f;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/b/a/d/j;->a:Z

    const-string p1, "TS-processor"

    invoke-virtual {p0, p1}, Lcom/igexin/b/a/d/j;->setName(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    const/4 v0, -0x2

    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    iget-object v0, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    iget-object v0, v0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    const/4 v1, -0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    :goto_0
    move-object v5, v2

    :goto_1
    move v4, v3

    :goto_2
    iget-boolean v6, p0, Lcom/igexin/b/a/d/j;->a:Z

    if-eqz v6, :cond_d

    const/4 v6, 0x0

    if-eq v4, v1, :cond_0

    if-eqz v4, :cond_3

    if-eq v4, v3, :cond_7

    const/4 v6, 0x2

    if-eq v4, v6, :cond_a

    goto :goto_2

    :cond_0
    :try_start_0
    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->d()V

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->q()Z

    move-result v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/igexin/b/a/d/j;->b:Lcom/igexin/b/a/d/g;

    if-nez v4, :cond_1

    new-instance v4, Lcom/igexin/b/a/d/g;

    iget-object v7, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-direct {v4, v7}, Lcom/igexin/b/a/d/g;-><init>(Lcom/igexin/b/a/d/f;)V

    iput-object v4, p0, Lcom/igexin/b/a/d/j;->b:Lcom/igexin/b/a/d/g;

    :cond_1
    iget-object v4, p0, Lcom/igexin/b/a/d/j;->b:Lcom/igexin/b/a/d/g;

    invoke-virtual {v4, v5}, Lcom/igexin/b/a/d/g;->a(Lcom/igexin/b/a/d/e;)V

    goto :goto_0

    :cond_2
    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->o:Z

    if-eqz v4, :cond_3

    iget-wide v7, v5, Lcom/igexin/b/a/d/e;->u:J

    const-wide/16 v9, 0x0

    cmp-long v4, v7, v9

    if-nez v4, :cond_3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "TaskService|"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v7, "|isBlock = false|cycyle = true|doTime = 0, "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "invalid ###########"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v7, v6, [Ljava/lang/Object;

    invoke-static {v4, v7}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    goto :goto_1

    :cond_3
    :try_start_1
    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->b()V

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->g()V

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->e_()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    iget-object v4, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-virtual {v4}, Lcom/igexin/b/a/d/f;->g()V

    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v4, :cond_4

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->c()V

    :cond_4
    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v4, :cond_5

    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->p:Z

    if-nez v4, :cond_5

    :goto_3
    iput v6, v5, Lcom/igexin/b/a/d/e;->A:I

    invoke-virtual {v0, v5}, Lcom/igexin/b/a/d/d;->a(Lcom/igexin/b/a/d/e;)Z

    :cond_5
    move-object v5, v2

    move v4, v3

    goto :goto_4

    :catchall_0
    move-exception v1

    goto :goto_6

    :catch_0
    move-exception v4

    :try_start_2
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "TaskService|SERVICE_PROCESSING|error|"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    new-array v8, v6, [Ljava/lang/Object;

    invoke-static {v7, v8}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iput-boolean v3, v5, Lcom/igexin/b/a/d/e;->t:Z

    iput-object v4, v5, Lcom/igexin/b/a/d/e;->B:Ljava/lang/Exception;

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->t()V

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->p()V

    iget-object v4, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    iget-object v4, v4, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {v4, v5}, Lcom/igexin/b/a/d/c;->a(Lcom/igexin/b/a/d/a/e;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    iget-object v4, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-virtual {v4}, Lcom/igexin/b/a/d/f;->g()V

    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v4, :cond_6

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->c()V

    :cond_6
    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v4, :cond_5

    iget-boolean v4, v5, Lcom/igexin/b/a/d/e;->p:Z

    if-nez v4, :cond_5

    goto :goto_3

    :cond_7
    :goto_4
    :try_start_3
    invoke-virtual {v0}, Lcom/igexin/b/a/d/d;->c()Lcom/igexin/b/a/d/e;

    move-result-object v5
    :try_end_3
    .catch Ljava/lang/InterruptedException; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    if-eqz v5, :cond_a

    iget-boolean v6, v5, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v6, :cond_9

    iget-boolean v6, v5, Lcom/igexin/b/a/d/e;->m:Z

    if-eqz v6, :cond_8

    goto :goto_5

    :cond_8
    move v4, v1

    goto/16 :goto_2

    :cond_9
    :goto_5
    move-object v5, v2

    goto/16 :goto_2

    :cond_a
    iget-object v4, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-virtual {v4}, Lcom/igexin/b/a/d/f;->g()V

    goto/16 :goto_1

    :goto_6
    iget-object v2, p0, Lcom/igexin/b/a/d/j;->c:Lcom/igexin/b/a/d/f;

    invoke-virtual {v2}, Lcom/igexin/b/a/d/f;->g()V

    iget-boolean v2, v5, Lcom/igexin/b/a/d/e;->t:Z

    if-nez v2, :cond_b

    invoke-virtual {v5}, Lcom/igexin/b/a/d/e;->c()V

    :cond_b
    iget-boolean v2, v5, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v2, :cond_c

    iget-boolean v2, v5, Lcom/igexin/b/a/d/e;->p:Z

    if-nez v2, :cond_c

    iput v6, v5, Lcom/igexin/b/a/d/e;->A:I

    invoke-virtual {v0, v5}, Lcom/igexin/b/a/d/d;->a(Lcom/igexin/b/a/d/e;)Z

    :cond_c
    throw v1

    :catch_2
    move-exception v4

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "TaskService|TASK_INIT|error|"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v6, v6, [Ljava/lang/Object;

    invoke-static {v4, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_1

    :cond_d
    invoke-virtual {v0}, Lcom/igexin/b/a/d/d;->d()V

    return-void
.end method
