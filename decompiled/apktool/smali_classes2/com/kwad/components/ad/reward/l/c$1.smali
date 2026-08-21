.class final Lcom/kwad/components/ad/reward/l/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/l/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yh:Lcom/kwad/components/ad/reward/l/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/l/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAudioBeOccupied()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/l/c;->a(Lcom/kwad/components/ad/reward/l/c;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l/c;->a(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l/c;->b(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->setAudioEnabled(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l/c;->c(Lcom/kwad/components/ad/reward/l/c;)Ljava/util/List;

    move-result-object v0

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/l/c;->c(Lcom/kwad/components/ad/reward/l/c;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/utils/h$a;

    invoke-interface {v2}, Lcom/kwad/sdk/utils/h$a;->onAudioBeOccupied()V

    goto :goto_0

    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final onAudioBeReleased()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l/c;->c(Lcom/kwad/components/ad/reward/l/c;)Ljava/util/List;

    move-result-object v0

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c$1;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/l/c;->c(Lcom/kwad/components/ad/reward/l/c;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/utils/h$a;

    invoke-interface {v2}, Lcom/kwad/sdk/utils/h$a;->onAudioBeReleased()V

    goto :goto_0

    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
