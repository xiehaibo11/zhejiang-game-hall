.class public final Lcom/kwad/framework/filedownloader/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/b/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/b/b$b;,
        Lcom/kwad/framework/filedownloader/b/b$a;
    }
.end annotation


# instance fields
.field final abK:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/kwad/framework/filedownloader/d/c;",
            ">;"
        }
    .end annotation
.end field

.field final abL:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    return-void
.end method

.method private d(Lcom/kwad/framework/filedownloader/d/c;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v1, v2, p1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method


# virtual methods
.method public final a(IIJ)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/d/a;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/a;->getIndex()I

    move-result v1

    if-ne v1, p2, :cond_1

    invoke-virtual {v0, p3, p4}, Lcom/kwad/framework/filedownloader/d/a;->J(J)V

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public final a(IJLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(ILjava/lang/String;JJI)V
    .locals 0

    return-void
.end method

.method public final a(ILjava/lang/Throwable;)V
    .locals 0

    return-void
.end method

.method public final a(ILjava/lang/Throwable;J)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/framework/filedownloader/d/a;)V
    .locals 4

    :try_start_0
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/a;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    monitor-enter v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v2, v0}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    if-nez v2, :cond_0

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v3, v0, v2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_0
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-interface {v2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :catchall_0
    move-exception p1

    :try_start_3
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw p1
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :catch_0
    return-void
.end method

.method public final b(Lcom/kwad/framework/filedownloader/d/c;)V
    .locals 3

    if-nez p1, :cond_0

    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/Object;

    const-string v0, "update but model == null!"

    invoke-static {p0, v0, p1}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/kwad/framework/filedownloader/b/b;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->remove(I)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v1, v2, p1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/b/b;->d(Lcom/kwad/framework/filedownloader/d/c;)V

    :goto_0
    return-void
.end method

.method public final be(I)V
    .locals 0

    return-void
.end method

.method public final bf(I)Lcom/kwad/framework/filedownloader/d/c;
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/framework/filedownloader/d/c;

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final bg(I)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;"
        }
    .end annotation

    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    monitor-enter v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v2, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v2, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_0

    :try_start_2
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :cond_0
    return-object v0

    :catchall_0
    move-exception p1

    :try_start_3
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw p1
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :catch_0
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    return-object p1
.end method

.method public final bh(I)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abL:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->remove(I)V

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :goto_0
    return-void
.end method

.method public final bi(I)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->remove(I)V

    monitor-exit v0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final bj(I)V
    .locals 0

    return-void
.end method

.method public final c(IJ)V
    .locals 0

    return-void
.end method

.method public final clear()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/b/b;->abK:Landroid/util/SparseArray;

    invoke-virtual {v1}, Landroid/util/SparseArray;->clear()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final d(IJ)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/framework/filedownloader/b/b;->bi(I)Z

    return-void
.end method

.method public final e(IJ)V
    .locals 0

    return-void
.end method

.method public final q(II)V
    .locals 0

    return-void
.end method

.method public final uh()Lcom/kwad/framework/filedownloader/b/a$a;
    .locals 1

    new-instance v0, Lcom/kwad/framework/filedownloader/b/b$a;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/b/b$a;-><init>(Lcom/kwad/framework/filedownloader/b/b;)V

    return-object v0
.end method
