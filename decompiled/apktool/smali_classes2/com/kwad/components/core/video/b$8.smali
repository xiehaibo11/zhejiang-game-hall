.class final Lcom/kwad/components/core/video/b$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/video/b;->prepareAsync()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Sn:Lcom/kwad/components/core/video/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/video/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->b(Lcom/kwad/components/core/video/b;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "prepareAsync now:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v2}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/b;)I

    move-result v2

    invoke-static {v2}, Lcom/kwad/components/core/video/b;->getStateString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->e(Lcom/kwad/components/core/video/b;)Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->e(Lcom/kwad/components/core/video/b;)Lcom/kwad/sdk/core/video/a/c;

    move-result-object v1

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v2, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    iget-object v3, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v3}, Lcom/kwad/components/core/video/b;->h(Lcom/kwad/components/core/video/b;)Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;)V

    iget-object v2, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v2}, Lcom/kwad/components/core/video/b;->e(Lcom/kwad/components/core/video/b;)Lcom/kwad/sdk/core/video/a/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/kwad/sdk/core/video/a/c;->prepareAsync()Z

    move-result v2

    iget-object v3, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v3}, Lcom/kwad/components/core/video/b;->b(Lcom/kwad/components/core/video/b;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "prepareAsync:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v5}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/b;)I

    move-result v5

    invoke-static {v5}, Lcom/kwad/components/core/video/b;->getStateString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "->STATE_PREPARING, success: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    const/4 v4, 0x1

    invoke-static {v3, v4}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/components/core/video/b;I)I

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v2, :cond_1

    :try_start_2
    iget-object v1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->i(Lcom/kwad/components/core/video/b;)Landroid/os/Handler;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/video/b$8$1;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/video/b$8$1;-><init>(Lcom/kwad/components/core/video/b$8;)V

    invoke-virtual {v1, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->b(Lcom/kwad/components/core/video/b;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "prepareAsync failed"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_3
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v1

    :try_start_5
    iget-object v2, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v2}, Lcom/kwad/components/core/video/b;->b(Lcom/kwad/components/core/video/b;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "prepareAsync Exception:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v4}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/b;)I

    move-result v4

    invoke-static {v4}, Lcom/kwad/components/core/video/b;->getStateString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    :try_start_6
    iget-object v0, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    monitor-enter v0
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0

    :try_start_7
    iget-object v1, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    monitor-exit v0

    goto :goto_1

    :catchall_2
    move-exception v1

    monitor-exit v0
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    :try_start_8
    throw v1
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_1
    return-void

    :catchall_3
    move-exception v1

    iget-object v2, p0, Lcom/kwad/components/core/video/b$8;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v2}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v2

    invoke-virtual {v2, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    throw v1
.end method
