.class Lcom/igexin/push/c/r;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Callable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/concurrent/Callable<",
        "Lcom/igexin/push/c/j;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/igexin/push/c/q;


# direct methods
.method constructor <init>(Lcom/igexin/push/c/q;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Lcom/igexin/push/c/j;
    .locals 12

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v0

    if-nez v0, :cond_5

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_0
    const-class v2, Lcom/igexin/push/c/p;

    monitor-enter v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    iget-object v3, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v3}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v3

    if-eqz v3, :cond_1

    iget-object v3, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v3}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v3

    iget-object v4, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v4}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v4

    invoke-interface {v3, v4}, Lcom/igexin/push/c/p;->a(Lcom/igexin/push/c/j;)V

    :cond_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-object v4, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v4}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v4

    invoke-virtual {v4}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/net/Socket;

    invoke-direct {v5}, Ljava/net/Socket;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    new-instance v1, Ljava/net/InetSocketAddress;

    const/4 v6, 0x1

    aget-object v4, v4, v6

    iget-object v6, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v6}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v6

    invoke-virtual {v6}, Lcom/igexin/push/c/j;->d()I

    move-result v6

    invoke-direct {v1, v4, v6}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    const/16 v4, 0x9c4

    invoke-virtual {v5, v1, v4}, Ljava/net/Socket;->connect(Ljava/net/SocketAddress;I)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-object v1, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v1}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v6

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "socket://"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/net/Socket;->getInetAddress()Ljava/net/InetAddress;

    move-result-object v4

    invoke-virtual {v4}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v4}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v4

    invoke-virtual {v4}, Lcom/igexin/push/c/j;->d()I

    move-result v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    sub-long v8, v10, v2

    invoke-virtual/range {v6 .. v11}, Lcom/igexin/push/c/j;->a(Ljava/lang/String;JJ)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/igexin/push/c/q;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|detect "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v2}, Lcom/igexin/push/c/q;->c(Lcom/igexin/push/c/q;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|time = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v2}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/c/j;->e()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-class v1, Lcom/igexin/push/c/p;

    monitor-enter v1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    :try_start_4
    iget-object v2, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v2}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v2

    if-eqz v2, :cond_2

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v2}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v2

    sget-object v3, Lcom/igexin/push/c/g;->a:Lcom/igexin/push/c/g;

    iget-object v4, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v4}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Lcom/igexin/push/c/p;->a(Lcom/igexin/push/c/g;Lcom/igexin/push/c/j;)V

    :cond_2
    monitor-exit v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    invoke-virtual {v5}, Ljava/net/Socket;->isClosed()Z

    move-result v0

    if-nez v0, :cond_5

    :goto_0
    :try_start_5
    invoke-virtual {v5}, Ljava/net/Socket;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto/16 :goto_3

    :catchall_0
    move-exception v2

    :try_start_6
    monitor-exit v1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :try_start_7
    throw v2
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_0
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    :catch_0
    move-exception v1

    goto :goto_1

    :catchall_1
    move-exception v3

    :try_start_8
    monitor-exit v2
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    :try_start_9
    throw v3
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_1
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    :catchall_2
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v2

    move-object v5, v1

    move-object v1, v2

    :goto_1
    :try_start_a
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/igexin/push/c/q;->f()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|detect "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v3}, Lcom/igexin/push/c/q;->c(Lcom/igexin/push/c/q;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "thread -->"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-class v0, Lcom/igexin/push/c/p;

    monitor-enter v0
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_4

    :try_start_b
    iget-object v1, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v1}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v1}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/c/j;->b()V

    iget-object v1, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v1}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/c/g;->c:Lcom/igexin/push/c/g;

    iget-object v3, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v3}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/igexin/push/c/p;->a(Lcom/igexin/push/c/g;Lcom/igexin/push/c/j;)V

    :cond_3
    monitor-exit v0
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    if-eqz v5, :cond_5

    invoke-virtual {v5}, Ljava/net/Socket;->isClosed()Z

    move-result v0

    if-nez v0, :cond_5

    goto :goto_0

    :catchall_3
    move-exception v1

    :try_start_c
    monitor-exit v0
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_3

    :try_start_d
    throw v1
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_4

    :catchall_4
    move-exception v0

    move-object v1, v5

    :goto_2
    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/net/Socket;->isClosed()Z

    move-result v2

    if-nez v2, :cond_4

    :try_start_e
    invoke-virtual {v1}, Ljava/net/Socket;->close()V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_2

    :catch_2
    :cond_4
    throw v0

    :catch_3
    :cond_5
    :goto_3
    iget-object v0, p0, Lcom/igexin/push/c/r;->a:Lcom/igexin/push/c/q;

    invoke-static {v0}, Lcom/igexin/push/c/q;->b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;

    move-result-object v0

    return-object v0
.end method

.method public synthetic call()Ljava/lang/Object;
    .locals 1

    invoke-virtual {p0}, Lcom/igexin/push/c/r;->a()Lcom/igexin/push/c/j;

    move-result-object v0

    return-object v0
.end method
