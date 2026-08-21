.class public final Lcom/kwad/framework/filedownloader/z;
.super Lcom/kwad/framework/filedownloader/e;

# interfaces
.implements Lcom/kwad/framework/filedownloader/v;


# instance fields
.field private final abD:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/kwad/framework/filedownloader/a$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/e;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method public final d(Lcom/kwad/framework/filedownloader/a$a;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final e(Lcom/kwad/framework/filedownloader/a$a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_0
    return-void
.end method

.method public final f(Lcom/kwad/framework/filedownloader/a$a;)Z
    .locals 6

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tY()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tY()Z

    move-result v2

    if-nez v2, :cond_2

    sget-boolean v2, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    const-string v2, "Waiting for connecting with the downloader service... %d"

    new-array v4, v3, [Ljava/lang/Object;

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v5

    invoke-interface {v5}, Lcom/kwad/framework/filedownloader/a;->getId()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v1

    invoke-static {p0, v2, v4}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/n;->tO()Lcom/kwad/framework/filedownloader/n;

    move-result-object v1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/n;->an(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->free()V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    monitor-exit v0

    return v3

    :cond_2
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_3
    :goto_0
    invoke-virtual {p0, p1}, Lcom/kwad/framework/filedownloader/z;->e(Lcom/kwad/framework/filedownloader/a$a;)V

    return v1
.end method

.method public final ty()V
    .locals 7

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/r;->tZ()Lcom/kwad/framework/filedownloader/w;

    move-result-object v0

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    const-string v2, "The downloader service is connected."

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    new-instance v3, Ljava/util/ArrayList;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/w;->ud()I

    move-result v4

    invoke-direct {v3, v4}, Ljava/util/ArrayList;-><init>(I)V

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a$a;->th()I

    move-result v5

    invoke-interface {v0, v5}, Lcom/kwad/framework/filedownloader/w;->bc(I)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a;->sO()Lcom/kwad/framework/filedownloader/a$b;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a$b;->tn()I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a$a;->tl()V

    goto :goto_0

    :cond_3
    invoke-interface {v0, v3}, Lcom/kwad/framework/filedownloader/w;->m(Ljava/util/List;)V

    monitor-exit v1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method public final tz()V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/z;->tA()Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    move-result-object v0

    sget-object v1, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;->lost:Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v0, v1, :cond_3

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/r;->tZ()Lcom/kwad/framework/filedownloader/w;

    move-result-object v0

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_0

    new-array v1, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/h;->size()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "lost the connection to the file download service, and current active task size is %d"

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/h;->size()I

    move-result v1

    if-lez v1, :cond_2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v2, v3}, Lcom/kwad/framework/filedownloader/h;->l(Ljava/util/List;)V

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/z;->abD:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v3}, Lcom/kwad/framework/filedownloader/a$a;->free()V

    goto :goto_0

    :cond_1
    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/w;->uc()V

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/r;->tX()V

    goto :goto_1

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    :cond_2
    :goto_1
    return-void

    :cond_3
    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/h;->size()I

    move-result v0

    if-lez v0, :cond_4

    new-array v0, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/h;->size()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v2

    const-string v1, "file download service has be unbound but the size of active tasks are not empty %d "

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    return-void
.end method
