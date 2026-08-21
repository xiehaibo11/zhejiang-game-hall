.class final Lcom/kwad/framework/filedownloader/services/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/y;


# instance fields
.field private final aew:Lcom/kwad/framework/filedownloader/b/a;

.field private final aex:Lcom/kwad/framework/filedownloader/services/h;


# direct methods
.method constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/b;->ur()Lcom/kwad/framework/filedownloader/b/a;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    new-instance v1, Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/b;->us()I

    move-result v0

    invoke-direct {v1, v0}, Lcom/kwad/framework/filedownloader/services/h;-><init>(I)V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    return-void
.end method

.method private bD(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/framework/filedownloader/services/g;->a(Lcom/kwad/framework/filedownloader/d/c;)Z

    move-result p1

    return p1
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/d/c;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/services/h;->bF(I)Z

    move-result v1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v2

    invoke-static {v2}, Lcom/kwad/framework/filedownloader/d/d;->bA(I)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_1
    if-eqz v1, :cond_2

    :goto_0
    move v0, v3

    goto :goto_1

    :cond_2
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v0

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result p1

    invoke-static {p1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    aput-object p1, v1, v3

    const-string p1, "%d status is[%s](not finish) & but not in the pool"

    invoke-static {p0, p1, v1}, Lcom/kwad/framework/filedownloader/f/d;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    :goto_1
    return v0
.end method

.method public final aY(I)Z
    .locals 4

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v1

    const-string v3, "request pause the task %d"

    invoke-static {p0, v3, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    const/4 v1, -0x2

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/h;->cancel(I)V

    return v2
.end method

.method public final aZ(I)B
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result p1

    return p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)V
    .locals 18

    move-object/from16 v7, p0

    move-object/from16 v0, p1

    move-object/from16 v8, p2

    move/from16 v9, p3

    monitor-enter p0

    :try_start_0
    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v10, 0x2

    const/4 v11, 0x0

    const/4 v12, 0x1

    if-eqz v1, :cond_0

    const-string v1, "request start the task with url(%s) path(%s) isDirectory(%B)"

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    aput-object v0, v2, v11

    aput-object v8, v2, v12

    invoke-static/range {p3 .. p3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v2, v10

    invoke-static {v7, v1, v2}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-static/range {p1 .. p3}, Lcom/kwad/framework/filedownloader/f/f;->g(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result v13

    iget-object v1, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v13}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v9, :cond_3

    if-nez v1, :cond_3

    invoke-static/range {p2 .. p2}, Lcom/kwad/framework/filedownloader/f/f;->br(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v12}, Lcom/kwad/framework/filedownloader/f/f;->g(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result v1

    iget-object v3, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v3, v1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v3

    if-eqz v3, :cond_2

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v8, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    sget-boolean v4, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v4, :cond_1

    const-string v4, "task[%d] find model by dirCaseId[%d]"

    new-array v5, v10, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v11

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v12

    invoke-static {v7, v4, v5}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    iget-object v4, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v4, v1}, Lcom/kwad/framework/filedownloader/b/a;->bg(I)Ljava/util/List;

    move-result-object v1

    move-object v15, v1

    goto :goto_0

    :cond_2
    move-object v15, v2

    :goto_0
    move-object v14, v3

    goto :goto_1

    :cond_3
    move-object v14, v1

    move-object v15, v2

    :goto_1
    invoke-static {v13, v14, v7, v12}, Lcom/kwad/framework/filedownloader/f/c;->a(ILcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/y;Z)Z

    move-result v1

    if-eqz v1, :cond_5

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_4

    const-string v0, "has already started download %d"

    new-array v1, v12, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v11

    invoke-static {v7, v0, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_4
    monitor-exit p0

    return-void

    :cond_5
    if-eqz v14, :cond_6

    :try_start_1
    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_6
    invoke-static {v8, v9, v2}, Lcom/kwad/framework/filedownloader/f/f;->a(Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :goto_2
    move/from16 v5, p7

    move-object v6, v1

    invoke-static {v13, v6, v5, v12}, Lcom/kwad/framework/filedownloader/f/c;->a(ILjava/lang/String;ZZ)Z

    move-result v1

    if-eqz v1, :cond_8

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_7

    const-string v0, "has already completed downloading %d"

    new-array v1, v12, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v11

    invoke-static {v7, v0, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_7
    monitor-exit p0

    return-void

    :cond_8
    const-wide/16 v2, 0x0

    if-eqz v14, :cond_9

    :try_start_2
    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v16

    goto :goto_3

    :cond_9
    move-wide/from16 v16, v2

    :goto_3
    if-eqz v14, :cond_a

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v1

    goto :goto_4

    :cond_a
    invoke-static {v6}, Lcom/kwad/framework/filedownloader/f/f;->bo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :goto_4
    move-object v4, v1

    move v1, v13

    move-wide/from16 v2, v16

    move-object v5, v6

    move-object/from16 v16, v6

    move-object/from16 v6, p0

    invoke-static/range {v1 .. v6}, Lcom/kwad/framework/filedownloader/f/c;->a(IJLjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/y;)Z

    move-result v1

    if-eqz v1, :cond_c

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_b

    const-string v0, "there is an another task with the same target-file-path %d %s"

    new-array v1, v10, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v11

    aput-object v16, v1, v12

    invoke-static {v7, v0, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v14, :cond_b

    iget-object v0, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, v13}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v0, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, v13}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_b
    monitor-exit p0

    return-void

    :cond_c
    if-eqz v14, :cond_f

    :try_start_3
    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    const/4 v2, -0x2

    if-eq v1, v2, :cond_d

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_d

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    if-eq v1, v12, :cond_d

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    const/4 v2, 0x6

    if-eq v1, v2, :cond_d

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    if-ne v1, v10, :cond_f

    :cond_d
    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    if-eq v1, v13, :cond_e

    iget-object v0, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v0, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    invoke-virtual {v14, v13}, Lcom/kwad/framework/filedownloader/d/c;->setId(I)V

    invoke-virtual {v14, v8, v9}, Lcom/kwad/framework/filedownloader/d/c;->c(Ljava/lang/String;Z)V

    if-eqz v15, :cond_11

    invoke-interface {v15}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_5
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_11

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/framework/filedownloader/d/a;

    invoke-virtual {v1, v13}, Lcom/kwad/framework/filedownloader/d/a;->setId(I)V

    iget-object v2, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v2, v1}, Lcom/kwad/framework/filedownloader/b/a;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    goto :goto_5

    :cond_e
    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_12

    invoke-virtual {v14, v0}, Lcom/kwad/framework/filedownloader/d/c;->setUrl(Ljava/lang/String;)V

    goto :goto_6

    :cond_f
    if-nez v14, :cond_10

    new-instance v14, Lcom/kwad/framework/filedownloader/d/c;

    invoke-direct {v14}, Lcom/kwad/framework/filedownloader/d/c;-><init>()V

    :cond_10
    invoke-virtual {v14, v0}, Lcom/kwad/framework/filedownloader/d/c;->setUrl(Ljava/lang/String;)V

    invoke-virtual {v14, v8, v9}, Lcom/kwad/framework/filedownloader/d/c;->c(Ljava/lang/String;Z)V

    invoke-virtual {v14, v13}, Lcom/kwad/framework/filedownloader/d/c;->setId(I)V

    const-wide/16 v0, 0x0

    invoke-virtual {v14, v0, v1}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    invoke-virtual {v14, v0, v1}, Lcom/kwad/framework/filedownloader/d/c;->N(J)V

    invoke-virtual {v14, v12}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V

    invoke-virtual {v14, v12}, Lcom/kwad/framework/filedownloader/d/c;->by(I)V

    :cond_11
    :goto_6
    move v11, v12

    :cond_12
    if-eqz v11, :cond_13

    iget-object v0, v7, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, v14}, Lcom/kwad/framework/filedownloader/b/a;->b(Lcom/kwad/framework/filedownloader/d/c;)V

    :cond_13
    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;-><init>()V

    invoke-virtual {v0, v14}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->e(Lcom/kwad/framework/filedownloader/d/c;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    move-object/from16 v1, p8

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->b(Lcom/kwad/framework/filedownloader/d/b;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-virtual {v0, v7}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->a(Lcom/kwad/framework/filedownloader/y;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-static/range {p5 .. p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->a(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->b(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-static/range {p7 .. p7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->a(Ljava/lang/Boolean;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-static/range {p9 .. p9}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->b(Ljava/lang/Boolean;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-static/range {p6 .. p6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->c(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->uF()Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;

    move-result-object v0

    iget-object v1, v7, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v1, v0}, Lcom/kwad/framework/filedownloader/services/h;->a(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final bE(I)J
    .locals 5

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v0

    const-wide/16 v1, 0x0

    if-nez v0, :cond_0

    return-wide v1

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v3

    const/4 v4, 0x1

    if-gt v3, v4, :cond_1

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v0

    return-wide v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bg(I)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-eq v0, v3, :cond_2

    goto :goto_0

    :cond_2
    invoke-static {p1}, Lcom/kwad/framework/filedownloader/d/a;->o(Ljava/util/List;)J

    move-result-wide v0

    return-wide v0

    :cond_3
    :goto_0
    return-wide v1
.end method

.method public final ba(I)Z
    .locals 3

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p1, :cond_0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "The task[%d] id is invalid, can\'t clear it."

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v1

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/services/g;->bD(I)Z

    move-result v2

    if-eqz v2, :cond_1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "The task[%d] is downloading, can\'t clear it."

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v1

    :cond_1
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, p1}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, p1}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    return v0
.end method

.method public final declared-synchronized bs(I)Z
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/h;->bs(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final bu(I)J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object p1

    if-nez p1, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v0

    return-wide v0
.end method

.method public final isIdle()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/h;->vH()I

    move-result v0

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final l(Ljava/lang/String;I)I
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/services/h;->l(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public final p(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/framework/filedownloader/f/f;->r(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/services/g;->bD(I)Z

    move-result p1

    return p1
.end method

.method public final uW()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aew:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/b/a;->clear()V

    return-void
.end method

.method public final vF()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/g;->aex:Lcom/kwad/framework/filedownloader/services/h;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/h;->vI()Ljava/util/List;

    move-result-object v0

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "pause all tasks %d"

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/kwad/framework/filedownloader/services/g;->aY(I)Z

    goto :goto_0

    :cond_1
    return-void
.end method
