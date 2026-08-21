.class public final Lcom/kwad/framework/filedownloader/download/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/download/b$a;
    }
.end annotation


# instance fields
.field private acn:Lcom/kwad/framework/filedownloader/services/c;

.field private aco:Lcom/kwad/framework/filedownloader/f/c$a;

.field private acp:Lcom/kwad/framework/filedownloader/f/c$b;

.field private acq:Lcom/kwad/framework/filedownloader/f/c$e;

.field private volatile acr:Lcom/kwad/framework/filedownloader/b/a;

.field private acs:Lcom/kwad/framework/filedownloader/f/c$d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/framework/filedownloader/b/a$a;)V
    .locals 25

    move-object/from16 v1, p0

    const-string v2, "refreshed data count: %d , delete data count: %d, reset id count: %d. consume %d"

    invoke-interface/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/b/a$a;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/download/b;->uq()Lcom/kwad/framework/filedownloader/f/c$d;

    move-result-object v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const-wide/16 v8, 0x0

    const-wide/16 v10, 0x0

    const-wide/16 v12, 0x0

    :goto_0
    const/4 v15, 0x3

    const/16 v16, 0x0

    :try_start_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_c

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v6

    const/4 v14, -0x2

    if-eq v6, v15, :cond_0

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v6

    const/4 v15, 0x2

    if-eq v6, v15, :cond_0

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v6

    const/4 v15, -0x1

    if-eq v6, v15, :cond_0

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v6

    const/4 v15, 0x1

    if-ne v6, v15, :cond_1

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v20

    const-wide/16 v17, 0x0

    cmp-long v6, v20, v17

    if-lez v6, :cond_1

    :cond_0
    invoke-virtual {v7, v14}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V

    :cond_1
    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v6

    if-nez v6, :cond_2

    move-object/from16 v20, v2

    move-wide/from16 v21, v4

    move-wide/from16 v23, v8

    const/4 v2, 0x1

    const-wide/16 v8, 0x0

    goto/16 :goto_4

    :cond_2
    new-instance v15, Ljava/io/File;

    invoke-direct {v15, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v6

    if-ne v6, v14, :cond_3

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v6

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getPath()Ljava/lang/String;

    move-result-object v14
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    move-object/from16 v20, v2

    const/4 v2, 0x0

    :try_start_1
    invoke-static {v6, v7, v14, v2}, Lcom/kwad/framework/filedownloader/f/f;->a(ILcom/kwad/framework/filedownloader/d/c;Ljava/lang/String;Ljava/lang/Boolean;)Z

    move-result v2

    if-eqz v2, :cond_4

    new-instance v2, Ljava/io/File;

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v2, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v6

    if-nez v6, :cond_4

    invoke-virtual {v15}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-virtual {v15, v2}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    move-result v6

    sget-boolean v14, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v14, :cond_4

    const-class v14, Lcom/kwad/framework/filedownloader/b/a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move-wide/from16 v21, v4

    :try_start_2
    const-string v4, "resume from the old no-temp-file architecture [%B], [%s]->[%s]"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-wide/from16 v23, v8

    const/4 v5, 0x3

    :try_start_3
    new-array v8, v5, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    aput-object v5, v8, v16

    invoke-virtual {v15}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x1

    aput-object v5, v8, v6

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    const/4 v5, 0x2

    aput-object v2, v8, v5

    invoke-static {v14, v4, v8}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_2

    :catchall_0
    move-exception v0

    goto :goto_1

    :catchall_1
    move-exception v0

    move-wide/from16 v21, v4

    :goto_1
    move-wide/from16 v23, v8

    goto/16 :goto_5

    :cond_3
    move-object/from16 v20, v2

    :cond_4
    move-wide/from16 v21, v4

    move-wide/from16 v23, v8

    :goto_2
    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v2

    const/4 v4, 0x1

    if-ne v2, v4, :cond_5

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v4

    const-wide/16 v8, 0x0

    cmp-long v2, v4, v8

    if-gtz v2, :cond_6

    :goto_3
    const/4 v2, 0x1

    goto :goto_4

    :cond_5
    const-wide/16 v8, 0x0

    :cond_6
    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-static {v2, v7}, Lcom/kwad/framework/filedownloader/f/f;->b(ILcom/kwad/framework/filedownloader/d/c;)Z

    move-result v2

    if-nez v2, :cond_7

    goto :goto_3

    :cond_7
    invoke-virtual {v15}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_8

    goto :goto_3

    :cond_8
    move/from16 v2, v16

    :goto_4
    const-wide/16 v4, 0x1

    if-eqz v2, :cond_9

    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    add-long/2addr v10, v4

    move-object/from16 v2, v20

    move-wide/from16 v4, v21

    move-wide/from16 v8, v23

    goto/16 :goto_0

    :cond_9
    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getPath()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v15

    invoke-interface {v3, v6, v14, v15}, Lcom/kwad/framework/filedownloader/f/c$d;->f(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result v6

    if-eq v6, v2, :cond_b

    sget-boolean v14, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v14, :cond_a

    const-class v14, Lcom/kwad/framework/filedownloader/b/a;

    const-string v15, "the id is changed on restoring from db: old[%d] -> new[%d]"

    const/4 v8, 0x2

    new-array v9, v8, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v9, v16

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v19, 0x1

    aput-object v8, v9, v19

    invoke-static {v14, v15, v9}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_a
    invoke-virtual {v7, v6}, Lcom/kwad/framework/filedownloader/d/c;->setId(I)V

    invoke-interface {v1, v2, v7}, Lcom/kwad/framework/filedownloader/b/a$a;->a(ILcom/kwad/framework/filedownloader/d/c;)V

    add-long/2addr v12, v4

    :cond_b
    invoke-interface {v1, v7}, Lcom/kwad/framework/filedownloader/b/a$a;->c(Lcom/kwad/framework/filedownloader/d/c;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    add-long v8, v23, v4

    move-object/from16 v2, v20

    move-wide/from16 v4, v21

    goto/16 :goto_0

    :catchall_2
    move-exception v0

    :goto_5
    move-object/from16 v2, v20

    goto :goto_6

    :cond_c
    move-object/from16 v20, v2

    move-wide/from16 v21, v4

    move-wide/from16 v23, v8

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->ar(Landroid/content/Context;)V

    invoke-interface/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/b/a$a;->ui()V

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_d

    const-class v0, Lcom/kwad/framework/filedownloader/b/a;

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static/range {v23 .. v24}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v1, v16

    invoke-static {v10, v11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v2, v2, v21

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x3

    aput-object v2, v1, v3

    move-object/from16 v2, v20

    invoke-static {v0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_d
    return-void

    :catchall_3
    move-exception v0

    move-wide/from16 v21, v4

    move-wide/from16 v23, v8

    :goto_6
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/framework/filedownloader/f/f;->ar(Landroid/content/Context;)V

    invoke-interface/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/b/a$a;->ui()V

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_e

    const-class v1, Lcom/kwad/framework/filedownloader/b/a;

    const/4 v3, 0x4

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static/range {v23 .. v24}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v3, v16

    invoke-static {v10, v11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    const/4 v5, 0x1

    aput-object v4, v3, v5

    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    const/4 v5, 0x2

    aput-object v4, v3, v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v4, v4, v21

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    const/4 v5, 0x3

    aput-object v4, v3, v5

    invoke-static {v1, v2, v3}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_e
    throw v0
.end method

.method public static up()Lcom/kwad/framework/filedownloader/download/b;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b$a;->uy()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    return-object v0
.end method

.method private uu()Lcom/kwad/framework/filedownloader/f/c$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->aco:Lcom/kwad/framework/filedownloader/f/c$a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->aco:Lcom/kwad/framework/filedownloader/f/c$a;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->vv()Lcom/kwad/framework/filedownloader/f/c$a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->aco:Lcom/kwad/framework/filedownloader/f/c$a;

    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->aco:Lcom/kwad/framework/filedownloader/f/c$a;

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private uv()Lcom/kwad/framework/filedownloader/f/c$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->vu()Lcom/kwad/framework/filedownloader/f/c$b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private uw()Lcom/kwad/framework/filedownloader/f/c$e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acq:Lcom/kwad/framework/filedownloader/f/c$e;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acq:Lcom/kwad/framework/filedownloader/f/c$e;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->vt()Lcom/kwad/framework/filedownloader/f/c$e;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acq:Lcom/kwad/framework/filedownloader/f/c$e;

    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acq:Lcom/kwad/framework/filedownloader/f/c$e;

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private ux()Lcom/kwad/framework/filedownloader/services/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/framework/filedownloader/services/c;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/services/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method


# virtual methods
.method public final a(ILjava/lang/String;Ljava/lang/String;J)I
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->uu()Lcom/kwad/framework/filedownloader/f/c$a;

    move-result-object p1

    invoke-interface {p1, p4, p5}, Lcom/kwad/framework/filedownloader/f/c$a;->H(J)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/kwad/framework/filedownloader/services/c$b;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    new-instance v0, Lcom/kwad/framework/filedownloader/services/c;

    invoke-direct {v0, p1}, Lcom/kwad/framework/filedownloader/services/c;-><init>(Lcom/kwad/framework/filedownloader/services/c$b;)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/b;->acq:Lcom/kwad/framework/filedownloader/f/c$e;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/b;->acs:Lcom/kwad/framework/filedownloader/f/c$d;

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final b(Ljava/io/File;)Lcom/kwad/framework/filedownloader/e/a;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->uw()Lcom/kwad/framework/filedownloader/f/c$e;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/f/c$e;->c(Ljava/io/File;)Lcom/kwad/framework/filedownloader/e/a;

    move-result-object p1

    return-object p1
.end method

.method public final b(Lcom/kwad/framework/filedownloader/services/c$b;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    new-instance v0, Lcom/kwad/framework/filedownloader/services/c;

    invoke-direct {v0, p1}, Lcom/kwad/framework/filedownloader/services/c;-><init>(Lcom/kwad/framework/filedownloader/services/c$b;)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acn:Lcom/kwad/framework/filedownloader/services/c;

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final bc(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a/b;
    .locals 1

    :try_start_0
    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->uv()Lcom/kwad/framework/filedownloader/f/c$b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/f/c$b;->aZ(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a/b;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    new-instance v0, Lcom/kwad/framework/filedownloader/a/c$b;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/a/c$b;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acp:Lcom/kwad/framework/filedownloader/f/c$b;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/f/c$b;->aZ(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a/b;

    move-result-object p1

    :goto_0
    return-object p1
.end method

.method public final uq()Lcom/kwad/framework/filedownloader/f/c$d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acs:Lcom/kwad/framework/filedownloader/f/c$d;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acs:Lcom/kwad/framework/filedownloader/f/c$d;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->vw()Lcom/kwad/framework/filedownloader/f/c$d;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acs:Lcom/kwad/framework/filedownloader/f/c$d;

    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acs:Lcom/kwad/framework/filedownloader/f/c$d;

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method public final declared-synchronized ur()Lcom/kwad/framework/filedownloader/b/a;
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->vs()Lcom/kwad/framework/filedownloader/b/a;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/b/a;->uh()Lcom/kwad/framework/filedownloader/b/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/download/b;->a(Lcom/kwad/framework/filedownloader/b/a$a;)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/b;->acr:Lcom/kwad/framework/filedownloader/b/a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final us()I
    .locals 1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->ux()Lcom/kwad/framework/filedownloader/services/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/services/c;->us()I

    move-result v0

    return v0
.end method

.method public final ut()Z
    .locals 1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/b;->uw()Lcom/kwad/framework/filedownloader/f/c$e;

    const/4 v0, 0x1

    return v0
.end method
