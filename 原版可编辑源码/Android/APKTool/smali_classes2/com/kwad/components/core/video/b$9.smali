.class final Lcom/kwad/components/core/video/b$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/video/b;->start()V
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

    iput-object p1, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v1, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v1}, Lcom/kwad/components/core/video/b;->j(Lcom/kwad/components/core/video/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    const-wide/16 v2, 0x1388

    invoke-virtual {v1, v2, v3}, Ljava/lang/Object;->wait(J)V

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getMediaPlayerType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/video/b$9;->Sn:Lcom/kwad/components/core/video/b;

    invoke-static {v0}, Lcom/kwad/components/core/video/b;->e(Lcom/kwad/components/core/video/b;)Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->start()V

    const-string v0, "videoStartPlay"

    invoke-static {v0}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
