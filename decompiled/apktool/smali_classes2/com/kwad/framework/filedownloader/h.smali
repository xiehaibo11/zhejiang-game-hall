.class public final Lcom/kwad/framework/filedownloader/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/h$a;
    }
.end annotation


# instance fields
.field private final aaX:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/kwad/framework/filedownloader/a$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/h;-><init>()V

    return-void
.end method

.method public static tD()Lcom/kwad/framework/filedownloader/h;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/h$a;->tE()Lcom/kwad/framework/filedownloader/h;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method final a(Lcom/kwad/framework/filedownloader/a$a;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public final a(Lcom/kwad/framework/filedownloader/a$a;Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)Z
    .locals 7

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;->sX()B

    move-result v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    move-result v2

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x2

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    aput-object p1, v1, v4

    invoke-static {v0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v6

    aput-object v6, v1, v3

    iget-object v6, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v1, v5

    const-string v6, "remove %s left %d %d"

    invoke-static {p0, v6, v1}, Lcom/kwad/framework/filedownloader/f/d;->e(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    if-eqz v2, :cond_5

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tg()Lcom/kwad/framework/filedownloader/x$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/x$a;->tv()Lcom/kwad/framework/filedownloader/t;

    move-result-object p1

    const/4 v1, -0x4

    if-eq v0, v1, :cond_4

    const/4 v1, -0x3

    if-eq v0, v1, :cond_3

    const/4 v1, -0x2

    if-eq v0, v1, :cond_2

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    goto :goto_0

    :cond_1
    invoke-interface {p1, p2}, Lcom/kwad/framework/filedownloader/t;->m(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    goto :goto_0

    :cond_2
    invoke-interface {p1, p2}, Lcom/kwad/framework/filedownloader/t;->n(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    goto :goto_0

    :cond_3
    invoke-static {p2}, Lcom/kwad/framework/filedownloader/message/f;->t(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/framework/filedownloader/t;->j(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    goto :goto_0

    :cond_4
    invoke-interface {p1, p2}, Lcom/kwad/framework/filedownloader/t;->l(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    goto :goto_0

    :cond_5
    new-array p2, v5, [Ljava/lang/Object;

    aput-object p1, p2, v4

    invoke-static {v0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, p2, v3

    const-string p1, "remove error, not exist: %s %d"

    invoke-static {p0, p1, p2}, Lcom/kwad/framework/filedownloader/f/d;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return v2

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method final aU(I)I
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    const/4 v2, 0x0

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v3, p1}, Lcom/kwad/framework/filedownloader/a$a;->aT(I)Z

    move-result v3

    if-eqz v3, :cond_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    monitor-exit v0

    return v2

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final aV(I)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/a$a;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v3, p1}, Lcom/kwad/framework/filedownloader/a$a;->aT(I)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Lcom/kwad/framework/filedownloader/a$a;->isOver()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-interface {v3}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/a;->sX()B

    move-result v4

    if-eqz v4, :cond_0

    const/16 v5, 0xa

    if-eq v4, v5, :cond_0

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    monitor-exit v1

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final aW(I)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/a$a;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {v3, p1}, Lcom/kwad/framework/filedownloader/a$a;->aT(I)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Lcom/kwad/framework/filedownloader/a$a;->isOver()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    monitor-exit v1

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final b(Lcom/kwad/framework/filedownloader/a$a;)V
    .locals 1

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a;->sQ()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->ti()V

    :cond_0
    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tg()Lcom/kwad/framework/filedownloader/x$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x$a;->tv()Lcom/kwad/framework/filedownloader/t;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/t;->tI()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/kwad/framework/filedownloader/h;->c(Lcom/kwad/framework/filedownloader/a$a;)V

    :cond_1
    return-void
.end method

.method final c(Lcom/kwad/framework/filedownloader/a$a;)V
    .locals 5

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tj()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    const-string v1, "already has %s"

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v2

    invoke-static {p0, v1, v3}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tk()V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_2

    const-string v1, "add list in all %s %d %d"

    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p1, v4, v2

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a$a;->tf()Lcom/kwad/framework/filedownloader/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/framework/filedownloader/a;->sX()B

    move-result p1

    invoke-static {p1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, v4, v3

    const/4 p1, 0x2

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v4, p1

    invoke-static {p0, v1, v4}, Lcom/kwad/framework/filedownloader/f/d;->e(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final l(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/a$a;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/framework/filedownloader/a$a;

    invoke-interface {p1, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clear()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final size()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/h;->aaX:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    return v0
.end method
