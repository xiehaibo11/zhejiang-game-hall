.class public final Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/download/f;
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;,
        Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;,
        Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly;
    }
.end annotation


# static fields
.field private static final acH:Ljava/util/concurrent/ThreadPoolExecutor;


# instance fields
.field private final acA:Lcom/kwad/framework/filedownloader/y;

.field private acB:Z

.field acC:I

.field private final acD:Z

.field private final acE:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/kwad/framework/filedownloader/download/c;",
            ">;"
        }
    .end annotation
.end field

.field private acF:Lcom/kwad/framework/filedownloader/download/e;

.field private acG:Z

.field private acI:Z

.field private acJ:Z

.field private acK:Z

.field private final acL:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private volatile acM:Z

.field private volatile acN:Ljava/lang/Exception;

.field private acO:Ljava/lang/String;

.field private acP:J

.field private acQ:J

.field private acR:J

.field private acS:J

.field private final acr:Lcom/kwad/framework/filedownloader/b/a;

.field private final acu:Lcom/kwad/framework/filedownloader/download/d;

.field private final acv:I

.field private final acw:Lcom/kwad/framework/filedownloader/d/c;

.field private final acx:Lcom/kwad/framework/filedownloader/d/b;

.field private final acy:Z

.field private final acz:Z

.field private volatile kT:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "ConnectionBlock"

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/b;->bl(Ljava/lang/String;)Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    sput-object v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acH:Ljava/util/concurrent/ThreadPoolExecutor;

    return-void
.end method

.method private constructor <init>(Lcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/d/b;Lcom/kwad/framework/filedownloader/y;IIZZI)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acv:I

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acP:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acQ:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acR:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acS:J

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acL:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acB:Z

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acx:Lcom/kwad/framework/filedownloader/d/b;

    iput-boolean p6, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acy:Z

    iput-boolean p7, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acz:Z

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/b;->ur()Lcom/kwad/framework/filedownloader/b/a;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/download/b;->ut()Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acD:Z

    iput-object p3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acA:Lcom/kwad/framework/filedownloader/y;

    iput p8, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acC:I

    new-instance p2, Lcom/kwad/framework/filedownloader/download/d;

    invoke-direct {p2, p1, p8, p4, p5}, Lcom/kwad/framework/filedownloader/download/d;-><init>(Lcom/kwad/framework/filedownloader/d/c;III)V

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/d/b;Lcom/kwad/framework/filedownloader/y;IIZZIB)V
    .locals 0

    invoke-direct/range {p0 .. p8}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;-><init>(Lcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/d/b;Lcom/kwad/framework/filedownloader/y;IIZZI)V

    return-void
.end method

.method private a(ILjava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x1

    if-le p1, v0, :cond_0

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-ne v0, p1, :cond_0

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v0

    invoke-direct {p0, p2, v0, v1}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->b(Ljava/util/List;J)V

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method private a(JLjava/lang/String;)V
    .locals 9

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->bv(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/e/a;

    move-result-object v1

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v7

    sub-long v5, p1, v7

    invoke-static {p3}, Lcom/kwad/sdk/crash/utils/h;->getAvailableBytes(Ljava/lang/String;)J

    move-result-wide v3

    cmp-long p3, v3, v5

    if-ltz p3, :cond_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e;->vO()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object p3

    iget-boolean p3, p3, Lcom/kwad/framework/filedownloader/f/e;->aeO:Z

    if-nez p3, :cond_2

    invoke-interface {v1, p1, p2}, Lcom/kwad/framework/filedownloader/e/a;->setLength(J)V

    goto :goto_0

    :cond_0
    new-instance p1, Lcom/kwad/framework/filedownloader/exception/FileDownloadOutOfSpaceException;

    move-object v2, p1

    invoke-direct/range {v2 .. v8}, Lcom/kwad/framework/filedownloader/exception/FileDownloadOutOfSpaceException;-><init>(JJJ)V

    throw p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception p1

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/kwad/framework/filedownloader/e/a;->close()V

    :cond_1
    throw p1

    :cond_2
    :goto_0
    if-eqz v1, :cond_3

    invoke-interface {v1}, Lcom/kwad/framework/filedownloader/e/a;->close()V

    :cond_3
    return-void
.end method

.method private a(Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/a/b;)V
    .locals 12

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    new-instance v0, Lcom/kwad/framework/filedownloader/download/a;

    const-wide/16 v4, 0x0

    const-wide/16 v6, 0x0

    iget-wide v8, p1, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    iget-wide v10, p1, Lcom/kwad/framework/filedownloader/download/a;->contentLength:J

    move-object v3, v0

    invoke-direct/range {v3 .. v11}, Lcom/kwad/framework/filedownloader/download/a;-><init>(JJJJ)V

    move-object p1, v0

    :cond_0
    new-instance v0, Lcom/kwad/framework/filedownloader/download/e$a;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/download/e$a;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/framework/filedownloader/download/e$a;->b(Lcom/kwad/framework/filedownloader/download/f;)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/download/e$a;->br(I)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object v1

    const/4 v2, -0x1

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/download/e$a;->bq(I)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acz:Z

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/download/e$a;->aY(Z)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object v1

    invoke-virtual {v1, p2}, Lcom/kwad/framework/filedownloader/download/e$a;->d(Lcom/kwad/framework/filedownloader/a/b;)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/framework/filedownloader/download/e$a;->c(Lcom/kwad/framework/filedownloader/download/a;)Lcom/kwad/framework/filedownloader/download/e$a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/framework/filedownloader/download/e$a;->bg(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/e$a;

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/kwad/framework/filedownloader/d/c;->by(I)V

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-interface {p1, v1, p2}, Lcom/kwad/framework/filedownloader/b/a;->q(II)V

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/e$a;->uT()Lcom/kwad/framework/filedownloader/download/e;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acF:Lcom/kwad/framework/filedownloader/download/e;

    iget-boolean p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const/4 p2, -0x2

    invoke-virtual {p1, p2}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acF:Lcom/kwad/framework/filedownloader/download/e;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/download/e;->pause()V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acF:Lcom/kwad/framework/filedownloader/download/e;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/download/e;->run()V

    return-void
.end method

.method private a(Ljava/util/Map;Lcom/kwad/framework/filedownloader/download/ConnectTask;Lcom/kwad/framework/filedownloader/a/b;)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;",
            "Lcom/kwad/framework/filedownloader/download/ConnectTask;",
            "Lcom/kwad/framework/filedownloader/a/b;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p3

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v4

    invoke-interface/range {p3 .. p3}, Lcom/kwad/framework/filedownloader/a/b;->getResponseCode()I

    move-result v2

    const/4 v3, 0x0

    const/4 v5, 0x1

    const/16 v6, 0xce

    if-eq v2, v6, :cond_1

    if-ne v2, v5, :cond_0

    goto :goto_0

    :cond_0
    move v6, v3

    goto :goto_1

    :cond_1
    :goto_0
    move v6, v5

    :goto_1
    iput-boolean v6, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    const/16 v6, 0xc8

    const/16 v7, 0xc9

    if-eq v2, v6, :cond_3

    if-eq v2, v7, :cond_3

    if-nez v2, :cond_2

    goto :goto_2

    :cond_2
    move v6, v3

    goto :goto_3

    :cond_3
    :goto_2
    move v6, v5

    :goto_3
    iget-object v8, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v8

    invoke-static {v4, v1}, Lcom/kwad/framework/filedownloader/f/f;->a(ILcom/kwad/framework/filedownloader/a/b;)Ljava/lang/String;

    move-result-object v13

    const/16 v9, 0x19c

    const-wide/16 v10, 0x0

    if-ne v2, v9, :cond_5

    :cond_4
    :goto_4
    move v7, v5

    goto :goto_5

    :cond_5
    if-eqz v8, :cond_6

    invoke-virtual {v8, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_6

    if-nez v6, :cond_4

    iget-boolean v9, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    if-eqz v9, :cond_6

    goto :goto_4

    :cond_6
    if-ne v2, v7, :cond_7

    invoke-virtual/range {p2 .. p2}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ul()Z

    move-result v7

    if-eqz v7, :cond_7

    goto :goto_4

    :cond_7
    const/16 v7, 0x1a0

    if-ne v2, v7, :cond_8

    iget-object v7, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v14

    cmp-long v7, v14, v10

    if-lez v7, :cond_8

    goto :goto_4

    :cond_8
    move v7, v3

    :goto_5
    const/4 v9, 0x0

    if-eqz v7, :cond_b

    iget-boolean v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    const/4 v6, 0x3

    const/4 v7, 0x2

    const/4 v12, 0x4

    if-eqz v1, :cond_9

    new-array v1, v12, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v1, v3

    aput-object v8, v1, v5

    aput-object v13, v1, v7

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v1, v6

    const-string v14, "there is precondition failed on this request[%d] with old etag[%s]\u3001new etag[%s]\u3001response requestHttpCode is %d"

    invoke-static {v0, v14, v1}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_9
    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v14, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v14

    invoke-interface {v1, v14}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v1

    iget-object v14, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v14}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v14

    invoke-static {v1, v14}, Lcom/kwad/framework/filedownloader/f/f;->s(Ljava/lang/String;Ljava/lang/String;)V

    iput-boolean v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    if-eqz v8, :cond_a

    invoke-virtual {v8, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    new-array v1, v12, [Ljava/lang/Object;

    aput-object v8, v1, v3

    aput-object v13, v1, v5

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v7

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v6

    const-string v2, "the old etag[%s] is the same to the new etag[%s], but the response status requestHttpCode is %d not Partial(206), so wo have to start this task from very beginning for task[%d]!"

    invoke-static {v0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    move-object v13, v9

    :cond_a
    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1, v10, v11}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1, v10, v11}, Lcom/kwad/framework/filedownloader/d/c;->N(J)V

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1, v13}, Lcom/kwad/framework/filedownloader/d/c;->bi(Ljava/lang/String;)V

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vq()V

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v5

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v6

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v8

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v10

    invoke-interface/range {v3 .. v10}, Lcom/kwad/framework/filedownloader/b/a;->a(ILjava/lang/String;JJI)V

    new-instance v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly;

    invoke-direct {v1, v0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly;-><init>(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V

    throw v1

    :cond_b
    invoke-virtual/range {p2 .. p2}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->um()Ljava/lang/String;

    move-result-object v7

    iput-object v7, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acO:Ljava/lang/String;

    iget-boolean v7, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    if-nez v7, :cond_d

    if-eqz v6, :cond_c

    goto :goto_6

    :cond_c
    new-instance v3, Lcom/kwad/framework/filedownloader/exception/FileDownloadHttpException;

    invoke-interface/range {p3 .. p3}, Lcom/kwad/framework/filedownloader/a/b;->uf()Ljava/util/Map;

    move-result-object v1

    move-object/from16 v4, p1

    invoke-direct {v3, v2, v4, v1}, Lcom/kwad/framework/filedownloader/exception/FileDownloadHttpException;-><init>(ILjava/util/Map;Ljava/util/Map;)V

    throw v3

    :cond_d
    :goto_6
    invoke-static {v4, v1}, Lcom/kwad/framework/filedownloader/f/f;->b(ILcom/kwad/framework/filedownloader/a/b;)J

    move-result-wide v6

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v2

    if-eqz v2, :cond_e

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/framework/filedownloader/f/f;->a(Lcom/kwad/framework/filedownloader/a/b;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    move-object v14, v1

    goto :goto_7

    :cond_e
    move-object v14, v9

    :goto_7
    const-wide/16 v1, -0x1

    cmp-long v1, v6, v1

    if-nez v1, :cond_f

    move v1, v5

    goto :goto_8

    :cond_f
    move v1, v3

    :goto_8
    iput-boolean v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acK:Z

    if-nez v1, :cond_10

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v1

    add-long/2addr v1, v6

    move-wide v11, v1

    goto :goto_9

    :cond_10
    move-wide v11, v6

    :goto_9
    iget-object v9, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    iget-boolean v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    if-eqz v1, :cond_11

    iget-boolean v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    if-eqz v1, :cond_11

    move v10, v5

    goto :goto_a

    :cond_11
    move v10, v3

    :goto_a
    invoke-virtual/range {v9 .. v14}, Lcom/kwad/framework/filedownloader/download/d;->a(ZJLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private b(JI)V
    .locals 17

    move-object/from16 v0, p0

    move-wide/from16 v1, p1

    move/from16 v3, p3

    int-to-long v4, v3

    div-long v4, v1, v4

    iget-object v6, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v6}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v6

    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    const-wide/16 v8, 0x0

    const/4 v10, 0x0

    move-wide v11, v8

    :goto_0
    if-ge v10, v3, :cond_1

    add-int/lit8 v13, v3, -0x1

    if-ne v10, v13, :cond_0

    move-wide v13, v8

    goto :goto_1

    :cond_0
    add-long v13, v11, v4

    const-wide/16 v15, 0x1

    sub-long/2addr v13, v15

    :goto_1
    new-instance v15, Lcom/kwad/framework/filedownloader/d/a;

    invoke-direct {v15}, Lcom/kwad/framework/filedownloader/d/a;-><init>()V

    invoke-virtual {v15, v6}, Lcom/kwad/framework/filedownloader/d/a;->setId(I)V

    invoke-virtual {v15, v10}, Lcom/kwad/framework/filedownloader/d/a;->setIndex(I)V

    invoke-virtual {v15, v11, v12}, Lcom/kwad/framework/filedownloader/d/a;->setStartOffset(J)V

    invoke-virtual {v15, v11, v12}, Lcom/kwad/framework/filedownloader/d/a;->J(J)V

    invoke-virtual {v15, v13, v14}, Lcom/kwad/framework/filedownloader/d/a;->K(J)V

    invoke-interface {v7, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v13, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v13, v15}, Lcom/kwad/framework/filedownloader/b/a;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    add-long/2addr v11, v4

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    :cond_1
    iget-object v4, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v4, v3}, Lcom/kwad/framework/filedownloader/d/c;->by(I)V

    iget-object v4, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v4, v6, v3}, Lcom/kwad/framework/filedownloader/b/a;->q(II)V

    invoke-direct {v0, v7, v1, v2}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->b(Ljava/util/List;J)V

    return-void
.end method

.method private b(Ljava/util/List;J)V
    .locals 27
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;J)V"
        }
    .end annotation

    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acO:Ljava/lang/String;

    if-eqz v3, :cond_0

    goto :goto_0

    :cond_0
    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v3

    :goto_0
    iget-object v4, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v4

    sget-boolean v5, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v6, 0x3

    const/4 v7, 0x2

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eqz v5, :cond_1

    new-array v5, v6, [Ljava/lang/Object;

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v10

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v5, v9

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v5, v8

    invoke-static/range {p2 .. p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v10

    aput-object v10, v5, v7

    const-string v10, "fetch data with multiple connection(count: [%d]) for task[%d] totalLength[%d]"

    invoke-static {v0, v10, v5}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    iget-boolean v5, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v10

    const-wide/16 v11, 0x0

    move-wide v13, v11

    :goto_1
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v15

    if-eqz v15, :cond_7

    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/kwad/framework/filedownloader/d/a;

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vj()J

    move-result-wide v16

    cmp-long v16, v16, v11

    if-nez v16, :cond_2

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vi()J

    move-result-wide v16

    sub-long v16, p2, v16

    goto :goto_2

    :cond_2
    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vj()J

    move-result-wide v16

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vi()J

    move-result-wide v18

    sub-long v16, v16, v18

    const-wide/16 v18, 0x1

    add-long v16, v16, v18

    :goto_2
    move-wide/from16 v25, v16

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vi()J

    move-result-wide v16

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->getStartOffset()J

    move-result-wide v18

    sub-long v16, v16, v18

    add-long v13, v13, v16

    cmp-long v16, v25, v11

    if-nez v16, :cond_3

    sget-boolean v16, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v16, :cond_6

    new-array v11, v7, [Ljava/lang/Object;

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->getId()I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v9

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->getIndex()I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v8

    const-string v12, "pass connection[%d-%d], because it has been completed"

    invoke-static {v0, v12, v11}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_4

    :cond_3
    new-instance v11, Lcom/kwad/framework/filedownloader/download/c$a;

    invoke-direct {v11}, Lcom/kwad/framework/filedownloader/download/c$a;-><init>()V

    new-instance v12, Lcom/kwad/framework/filedownloader/download/a;

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->getStartOffset()J

    move-result-wide v19

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vi()J

    move-result-wide v21

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->vj()J

    move-result-wide v23

    move-object/from16 v18, v12

    invoke-direct/range {v18 .. v26}, Lcom/kwad/framework/filedownloader/download/a;-><init>(JJJJ)V

    invoke-virtual {v11, v1}, Lcom/kwad/framework/filedownloader/download/c$a;->bo(I)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v11

    invoke-virtual {v15}, Lcom/kwad/framework/filedownloader/d/a;->getIndex()I

    move-result v18

    invoke-static/range {v18 .. v18}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v11, v6}, Lcom/kwad/framework/filedownloader/download/c$a;->d(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    invoke-virtual {v6, v0}, Lcom/kwad/framework/filedownloader/download/c$a;->a(Lcom/kwad/framework/filedownloader/download/f;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    invoke-virtual {v6, v3}, Lcom/kwad/framework/filedownloader/download/c$a;->bd(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    if-eqz v5, :cond_4

    move-object v11, v2

    goto :goto_3

    :cond_4
    const/4 v11, 0x0

    :goto_3
    invoke-virtual {v6, v11}, Lcom/kwad/framework/filedownloader/download/c$a;->be(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    iget-object v11, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acx:Lcom/kwad/framework/filedownloader/d/b;

    invoke-virtual {v6, v11}, Lcom/kwad/framework/filedownloader/download/c$a;->c(Lcom/kwad/framework/filedownloader/d/b;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    iget-boolean v11, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acz:Z

    invoke-virtual {v6, v11}, Lcom/kwad/framework/filedownloader/download/c$a;->aW(Z)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    invoke-virtual {v6, v12}, Lcom/kwad/framework/filedownloader/download/c$a;->b(Lcom/kwad/framework/filedownloader/download/a;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    invoke-virtual {v6, v4}, Lcom/kwad/framework/filedownloader/download/c$a;->bf(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/c$a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/kwad/framework/filedownloader/download/c$a;->uG()Lcom/kwad/framework/filedownloader/download/c;

    move-result-object v6

    sget-boolean v11, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v11, :cond_5

    new-array v11, v8, [Ljava/lang/Object;

    aput-object v15, v11, v9

    const-string v12, "enable multiple connection: %s"

    invoke-static {v0, v12, v11}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_5
    iget-object v11, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {v11, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_6
    :goto_4
    const/4 v6, 0x3

    const-wide/16 v11, 0x0

    goto/16 :goto_1

    :cond_7
    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    cmp-long v2, v13, v2

    if-eqz v2, :cond_8

    new-array v2, v7, [Ljava/lang/Object;

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v2, v9

    invoke-static {v13, v14}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v2, v8

    const-string v3, "correct the sofar[%d] from connection table[%d]"

    invoke-static {v0, v3, v2}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2, v13, v14}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    :cond_8
    new-instance v2, Ljava/util/ArrayList;

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(I)V

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_5
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_a

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/framework/filedownloader/download/c;

    iget-boolean v5, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v5, :cond_9

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/download/c;->pause()V

    goto :goto_5

    :cond_9
    invoke-static {v4}, Ljava/util/concurrent/Executors;->callable(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;

    move-result-object v4

    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_a
    iget-boolean v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v3, :cond_b

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const/4 v2, -0x2

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V

    return-void

    :cond_b
    sget-object v3, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acH:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v3, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->invokeAll(Ljava/util/Collection;)Ljava/util/List;

    move-result-object v2

    sget-boolean v3, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v3, :cond_c

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_6
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/concurrent/Future;

    const/4 v4, 0x3

    new-array v5, v4, [Ljava/lang/Object;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v9

    invoke-interface {v3}, Ljava/util/concurrent/Future;->isDone()Z

    move-result v6

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v5, v8

    invoke-interface {v3}, Ljava/util/concurrent/Future;->isCancelled()Z

    move-result v3

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v5, v7

    const-string v3, "finish sub-task for [%d] %B %B"

    invoke-static {v0, v3, v5}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_6

    :cond_c
    return-void
.end method

.method private n(Ljava/util/List;)Lcom/kwad/framework/filedownloader/download/a;
    .locals 20
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/framework/filedownloader/d/a;",
            ">;)",
            "Lcom/kwad/framework/filedownloader/download/a;"
        }
    .end annotation

    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v1

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v3}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-le v1, v5, :cond_0

    move v6, v5

    goto :goto_0

    :cond_0
    move v6, v4

    :goto_0
    const-wide/16 v7, 0x0

    if-eqz v6, :cond_1

    iget-boolean v9, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acD:Z

    if-eqz v9, :cond_4

    :cond_1
    iget-object v9, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v9}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v9

    iget-object v10, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-static {v9, v10}, Lcom/kwad/framework/filedownloader/f/f;->b(ILcom/kwad/framework/filedownloader/d/c;)Z

    move-result v9

    if-eqz v9, :cond_4

    iget-boolean v9, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acD:Z

    if-nez v9, :cond_2

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v9

    :goto_1
    move-wide v14, v9

    goto :goto_2

    :cond_2
    if-eqz v6, :cond_3

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v6

    if-ne v1, v6, :cond_4

    invoke-static/range {p1 .. p1}, Lcom/kwad/framework/filedownloader/d/a;->o(Ljava/util/List;)J

    move-result-wide v9

    goto :goto_1

    :cond_3
    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v9

    goto :goto_1

    :cond_4
    move-wide v14, v7

    :goto_2
    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1, v14, v15}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    cmp-long v1, v14, v7

    if-lez v1, :cond_5

    move v4, v5

    :cond_5
    iput-boolean v4, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    if-nez v4, :cond_6

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v4, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v4

    invoke-interface {v1, v4}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    invoke-static {v3, v2}, Lcom/kwad/framework/filedownloader/f/f;->s(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    new-instance v1, Lcom/kwad/framework/filedownloader/download/a;

    const-wide/16 v12, 0x0

    const-wide/16 v16, 0x0

    iget-object v2, v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v2

    sub-long v18, v2, v14

    move-object v11, v1

    invoke-direct/range {v11 .. v19}, Lcom/kwad/framework/filedownloader/download/a;-><init>(JJJJ)V

    return-object v1
.end method

.method private uA()Z
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v0

    if-gt v0, v2, :cond_0

    return v1

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acJ:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acD:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acK:Z

    if-nez v0, :cond_1

    return v2

    :cond_1
    return v1
.end method

.method private uC()V
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acz:Z

    if-eqz v0, :cond_1

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->bt(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    aput-object v0, v2, v3

    const-string v0, "Task[%d] can\'t start the download runnable, because this task require wifi, but user application nor current process has %s, so we can\'t check whether the network type connection."

    invoke-static {v0, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_1
    :goto_0
    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acz:Z

    if-eqz v0, :cond_3

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vT()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_1

    :cond_2
    new-instance v0, Lcom/kwad/framework/filedownloader/exception/FileDownloadNetworkPolicyException;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/exception/FileDownloadNetworkPolicyException;-><init>()V

    throw v0

    :cond_3
    :goto_1
    return-void
.end method

.method private uD()V
    .locals 7

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v1

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v5}, Lcom/kwad/framework/filedownloader/f/f;->r(Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    iget-boolean v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acy:Z

    const/4 v3, 0x0

    invoke-static {v0, v5, v2, v3}, Lcom/kwad/framework/filedownloader/f/c;->a(ILjava/lang/String;ZZ)Z

    move-result v2

    if-nez v2, :cond_4

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v2, v1}, Lcom/kwad/framework/filedownloader/b/a;->bf(I)Lcom/kwad/framework/filedownloader/d/c;

    move-result-object v2

    if-eqz v2, :cond_2

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acA:Lcom/kwad/framework/filedownloader/y;

    invoke-static {v0, v2, v4, v3}, Lcom/kwad/framework/filedownloader/f/c;->a(ILcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/y;Z)Z

    move-result v3

    if-nez v3, :cond_1

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v3, v1}, Lcom/kwad/framework/filedownloader/b/a;->bg(I)Ljava/util/List;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v4, v1}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v4, v1}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/kwad/framework/filedownloader/f/f;->bx(Ljava/lang/String;)V

    invoke-static {v1, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(ILcom/kwad/framework/filedownloader/d/c;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v4

    invoke-virtual {v1, v4, v5}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v4

    invoke-virtual {v1, v4, v5}, Lcom/kwad/framework/filedownloader/d/c;->N(J)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Lcom/kwad/framework/filedownloader/d/c;->bi(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/d/c;->by(I)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-interface {v1, v2}, Lcom/kwad/framework/filedownloader/b/a;->b(Lcom/kwad/framework/filedownloader/d/c;)V

    if-eqz v3, :cond_0

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/framework/filedownloader/d/a;

    invoke-virtual {v2, v0}, Lcom/kwad/framework/filedownloader/d/a;->setId(I)V

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v3, v2}, Lcom/kwad/framework/filedownloader/b/a;->a(Lcom/kwad/framework/filedownloader/d/a;)V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly;-><init>(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V

    throw v0

    :cond_1
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;-><init>(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V

    throw v0

    :cond_2
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v4

    iget-object v6, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acA:Lcom/kwad/framework/filedownloader/y;

    move v1, v0

    invoke-static/range {v1 .. v6}, Lcom/kwad/framework/filedownloader/f/c;->a(IJLjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/y;)Z

    move-result v1

    if-nez v1, :cond_3

    goto :goto_1

    :cond_3
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;-><init>(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V

    throw v0

    :cond_4
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bi(I)Z

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;

    invoke-direct {v0, p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely;-><init>(Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;)V

    throw v0

    :cond_5
    :goto_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/download/c;JJ)V
    .locals 9

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_0

    new-array p1, v2, [Ljava/lang/Object;

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "the task[%d] has already been paused, so pass the completed callback"

    invoke-static {p0, p2, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    if-nez p1, :cond_2

    const/4 v0, -0x1

    goto :goto_0

    :cond_2
    iget v0, p1, Lcom/kwad/framework/filedownloader/download/c;->adb:I

    :goto_0
    sget-boolean v3, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x4

    if-eqz v3, :cond_3

    new-array v3, v6, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v3, v1

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v3, v2

    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v3, v5

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v7

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v3, v4

    const-string v0, "the connection has been completed(%d): [%d, %d)  %d"

    invoke-static {p0, v0, v3}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acG:Z

    if-eqz v0, :cond_5

    const-wide/16 v7, 0x0

    cmp-long p1, p2, v7

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v7

    cmp-long p1, p4, v7

    if-eqz p1, :cond_4

    new-array p1, v6, [Ljava/lang/Object;

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    aput-object p2, p1, v1

    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    aput-object p2, p1, v2

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide p2

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    aput-object p2, p1, v5

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v4

    const-string p2, "the single task not completed corrected(%d, %d != %d) for task(%d)"

    invoke-static {p0, p2, p1}, Lcom/kwad/framework/filedownloader/f/d;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    return-void

    :cond_5
    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    monitor-enter p2

    :try_start_0
    iget-object p3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {p3, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    monitor-exit p2

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final a(Ljava/lang/Exception;J)V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_0

    new-array p1, v2, [Ljava/lang/Object;

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p2}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v1

    const-string p2, "the task[%d] has already been paused, so pass the retry callback"

    invoke-static {p0, p2, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acC:I

    add-int/lit8 v3, v0, -0x1

    iput v3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acC:I

    if-gez v0, :cond_2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v1

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v2

    const-string v1, "valid retry times is less than 0(%d) for download task(%d)"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    iget v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acC:I

    invoke-virtual {v0, p1, v1, p2, p3}, Lcom/kwad/framework/filedownloader/download/d;->a(Ljava/lang/Exception;IJ)V

    return-void
.end method

.method public final a(Ljava/lang/Exception;)Z
    .locals 3

    instance-of v0, p1, Lcom/kwad/framework/filedownloader/exception/FileDownloadHttpException;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    move-object v0, p1

    check-cast v0, Lcom/kwad/framework/filedownloader/exception/FileDownloadHttpException;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/exception/FileDownloadHttpException;->getCode()I

    move-result v0

    iget-boolean v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acG:Z

    if-eqz v2, :cond_0

    const/16 v2, 0x1a0

    if-ne v0, v2, :cond_0

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acB:Z

    if-nez v0, :cond_0

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/framework/filedownloader/f/f;->s(Ljava/lang/String;Ljava/lang/String;)V

    iput-boolean v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acB:Z

    return v1

    :cond_0
    iget v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acC:I

    if-lez v0, :cond_1

    instance-of p1, p1, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    if-nez p1, :cond_1

    return v1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public final b(Ljava/lang/Exception;)V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acN:Ljava/lang/Exception;

    iget-boolean p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz p1, :cond_1

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_0

    new-array p1, v0, [Ljava/lang/Object;

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, p1, v0

    const-string v0, "the task[%d] has already been paused, so pass the error callback"

    invoke-static {p0, v0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/framework/filedownloader/download/c;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/c;->tM()V

    goto :goto_0

    :cond_3
    return-void
.end method

.method public final getId()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v0

    return v0
.end method

.method public final isAlive()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acL:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/d;->isAlive()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final onProgress(J)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/download/d;->onProgress(J)V

    return-void
.end method

.method public final pause()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acF:Lcom/kwad/framework/filedownloader/download/e;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/e;->pause()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acE:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/framework/filedownloader/download/c;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/download/c;->pause()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final run()V
    .locals 19

    move-object/from16 v1, p0

    const/16 v2, 0xa

    const/4 v3, 0x0

    :try_start_0
    invoke-static {v2}, Landroid/os/Process;->setThreadPriority(I)V

    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v4, "High concurrent cause, start runnable but already paused %d"

    const/4 v5, -0x2

    const/4 v6, 0x1

    if-eq v2, v6, :cond_4

    :try_start_1
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v2

    if-ne v2, v5, :cond_0

    sget-boolean v2, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v2, :cond_1

    new-array v2, v6, [Ljava/lang/Object;

    iget-object v5, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v5}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v2, v3

    invoke-static {v1, v4, v2}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    new-instance v2, Ljava/lang/RuntimeException;

    const-string v4, "Task[%d] can\'t start the download runnable, because its status is %d not %d"

    const/4 v5, 0x3

    new-array v5, v5, [Ljava/lang/Object;

    iget-object v7, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v5, v3

    iget-object v7, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v7}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v7

    invoke-static {v7}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v7

    aput-object v7, v5, v6

    const/4 v7, 0x2

    invoke-static {v6}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v6

    aput-object v6, v5, v7

    invoke-static {v4, v5}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->b(Ljava/lang/Exception;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :cond_1
    :goto_0
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_2

    :goto_1
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uL()V

    goto :goto_4

    :cond_2
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_3

    :goto_2
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acN:Ljava/lang/Exception;

    invoke-virtual {v2, v4}, Lcom/kwad/framework/filedownloader/download/d;->c(Ljava/lang/Exception;)V

    goto :goto_4

    :cond_3
    :try_start_2
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    move-object v2, v0

    :goto_3
    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v4, v2}, Lcom/kwad/framework/filedownloader/download/d;->c(Ljava/lang/Exception;)V

    :goto_4
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acL:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void

    :cond_4
    :try_start_3
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-nez v2, :cond_5

    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uJ()V

    :cond_5
    :goto_5
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_9

    sget-boolean v2, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v2, :cond_6

    new-array v2, v6, [Ljava/lang/Object;

    iget-object v5, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v5}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v2, v3

    invoke-static {v1, v4, v2}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_6
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_7

    goto :goto_1

    :cond_7
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_8

    goto :goto_2

    :cond_8
    :try_start_4
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    move-object v2, v0

    goto :goto_3

    :cond_9
    :try_start_5
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v2, :cond_1e

    const/4 v2, 0x0

    :try_start_6
    invoke-direct/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->uC()V

    iget-object v7, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v8, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v8

    invoke-interface {v7, v8}, Lcom/kwad/framework/filedownloader/b/a;->bg(I)Ljava/util/List;

    move-result-object v7

    invoke-direct {v1, v7}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->n(Ljava/util/List;)Lcom/kwad/framework/filedownloader/download/a;

    move-result-object v8

    new-instance v9, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    invoke-direct {v9}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;-><init>()V

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->bn(I)Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    move-result-object v9

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->ba(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    move-result-object v9

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->bb(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    move-result-object v9

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acx:Lcom/kwad/framework/filedownloader/d/b;

    invoke-virtual {v9, v10}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->a(Lcom/kwad/framework/filedownloader/d/b;)Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    move-result-object v9

    invoke-virtual {v9, v8}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->a(Lcom/kwad/framework/filedownloader/download/a;)Lcom/kwad/framework/filedownloader/download/ConnectTask$a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/download/ConnectTask$a;->uo()Lcom/kwad/framework/filedownloader/download/ConnectTask;

    move-result-object v8

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->uk()Lcom/kwad/framework/filedownloader/a/b;

    move-result-object v9
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_16
    .catch Ljava/lang/IllegalAccessException; {:try_start_6 .. :try_end_6} :catch_15
    .catch Ljava/lang/InterruptedException; {:try_start_6 .. :try_end_6} :catch_14
    .catch Ljava/lang/IllegalArgumentException; {:try_start_6 .. :try_end_6} :catch_13
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_6 .. :try_end_6} :catch_12
    .catch Ljava/lang/NullPointerException; {:try_start_6 .. :try_end_6} :catch_11
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_6 .. :try_end_6} :catch_10
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_6 .. :try_end_6} :catch_e
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_6 .. :try_end_6} :catch_d
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :try_start_7
    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->getRequestHeader()Ljava/util/Map;

    move-result-object v10

    invoke-direct {v1, v10, v8, v9}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(Ljava/util/Map;Lcom/kwad/framework/filedownloader/download/ConnectTask;Lcom/kwad/framework/filedownloader/a/b;)V

    iget-boolean v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v10, :cond_d

    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2, v5}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_c
    .catch Ljava/lang/IllegalAccessException; {:try_start_7 .. :try_end_7} :catch_b
    .catch Ljava/lang/InterruptedException; {:try_start_7 .. :try_end_7} :catch_a
    .catch Ljava/lang/IllegalArgumentException; {:try_start_7 .. :try_end_7} :catch_9
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_7 .. :try_end_7} :catch_8
    .catch Ljava/lang/NullPointerException; {:try_start_7 .. :try_end_7} :catch_7
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_7 .. :try_end_7} :catch_6
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_7 .. :try_end_7} :catch_5
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_7 .. :try_end_7} :catch_4
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    if-eqz v9, :cond_a

    :try_start_8
    invoke-interface {v9}, Lcom/kwad/framework/filedownloader/a/b;->ug()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    :cond_a
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_b

    goto/16 :goto_1

    :cond_b
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_c

    goto/16 :goto_2

    :cond_c
    :try_start_9
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_2

    goto/16 :goto_4

    :catch_2
    move-exception v0

    move-object v2, v0

    goto/16 :goto_3

    :cond_d
    :try_start_a
    invoke-direct/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->uD()V

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v14

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v10

    invoke-direct {v1, v14, v15, v10}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(JLjava/lang/String;)V

    invoke-direct/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->uA()Z

    move-result v10

    if-eqz v10, :cond_f

    iget-boolean v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    if-eqz v10, :cond_e

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v10

    move-wide/from16 v17, v14

    goto :goto_6

    :cond_e
    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v11

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v12

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v13

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v10}, Lcom/kwad/framework/filedownloader/d/c;->getPath()Ljava/lang/String;

    move-result-object v10

    move-wide/from16 v17, v14

    move-object v14, v10

    move-wide/from16 v15, v17

    invoke-virtual/range {v11 .. v16}, Lcom/kwad/framework/filedownloader/download/b;->a(ILjava/lang/String;Ljava/lang/String;J)I

    move-result v10

    goto :goto_6

    :cond_f
    move-wide/from16 v17, v14

    move v10, v6

    :goto_6
    if-lez v10, :cond_18

    iget-boolean v11, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v11, :cond_13

    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2, v5}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_c
    .catch Ljava/lang/IllegalAccessException; {:try_start_a .. :try_end_a} :catch_b
    .catch Ljava/lang/InterruptedException; {:try_start_a .. :try_end_a} :catch_a
    .catch Ljava/lang/IllegalArgumentException; {:try_start_a .. :try_end_a} :catch_9
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_a .. :try_end_a} :catch_8
    .catch Ljava/lang/NullPointerException; {:try_start_a .. :try_end_a} :catch_7
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_a .. :try_end_a} :catch_6
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_a .. :try_end_a} :catch_5
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_a .. :try_end_a} :catch_4
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    if-eqz v9, :cond_10

    :try_start_b
    invoke-interface {v9}, Lcom/kwad/framework/filedownloader/a/b;->ug()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_2

    :cond_10
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_11

    goto/16 :goto_1

    :cond_11
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_12

    goto/16 :goto_2

    :cond_12
    :try_start_c
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_c
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_3

    goto/16 :goto_4

    :catch_3
    move-exception v0

    move-object v2, v0

    goto/16 :goto_3

    :cond_13
    if-ne v10, v6, :cond_14

    move v11, v6

    goto :goto_7

    :cond_14
    move v11, v3

    :goto_7
    :try_start_d
    iput-boolean v11, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acG:Z

    if-eqz v11, :cond_15

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->un()Lcom/kwad/framework/filedownloader/download/a;

    move-result-object v2

    invoke-direct {v1, v2, v9}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/a/b;)V

    goto :goto_a

    :cond_15
    if-eqz v9, :cond_16

    invoke-interface {v9}, Lcom/kwad/framework/filedownloader/a/b;->ug()V
    :try_end_d
    .catch Ljava/io/IOException; {:try_start_d .. :try_end_d} :catch_c
    .catch Ljava/lang/IllegalAccessException; {:try_start_d .. :try_end_d} :catch_b
    .catch Ljava/lang/InterruptedException; {:try_start_d .. :try_end_d} :catch_a
    .catch Ljava/lang/IllegalArgumentException; {:try_start_d .. :try_end_d} :catch_9
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_d .. :try_end_d} :catch_8
    .catch Ljava/lang/NullPointerException; {:try_start_d .. :try_end_d} :catch_7
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_d .. :try_end_d} :catch_6
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_d .. :try_end_d} :catch_5
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_d .. :try_end_d} :catch_4
    .catchall {:try_start_d .. :try_end_d} :catchall_0

    goto :goto_8

    :cond_16
    move-object v2, v9

    :goto_8
    :try_start_e
    iget-object v8, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v8}, Lcom/kwad/framework/filedownloader/download/d;->uK()V

    iget-boolean v8, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acI:Z

    if-eqz v8, :cond_17

    invoke-direct {v1, v10, v7}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(ILjava/util/List;)V

    goto :goto_9

    :cond_17
    move-wide/from16 v7, v17

    invoke-direct {v1, v7, v8, v10}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->b(JI)V
    :try_end_e
    .catch Ljava/io/IOException; {:try_start_e .. :try_end_e} :catch_16
    .catch Ljava/lang/IllegalAccessException; {:try_start_e .. :try_end_e} :catch_15
    .catch Ljava/lang/InterruptedException; {:try_start_e .. :try_end_e} :catch_14
    .catch Ljava/lang/IllegalArgumentException; {:try_start_e .. :try_end_e} :catch_13
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_e .. :try_end_e} :catch_12
    .catch Ljava/lang/NullPointerException; {:try_start_e .. :try_end_e} :catch_11
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_e .. :try_end_e} :catch_10
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_e .. :try_end_e} :catch_e
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_e .. :try_end_e} :catch_d
    .catchall {:try_start_e .. :try_end_e} :catchall_1

    :goto_9
    move-object v9, v2

    :goto_a
    if-eqz v9, :cond_1e

    :try_start_f
    invoke-interface {v9}, Lcom/kwad/framework/filedownloader/a/b;->ug()V
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_2

    goto/16 :goto_12

    :cond_18
    :try_start_10
    new-instance v2, Ljava/lang/IllegalAccessException;

    const-string v7, "invalid connection count %d, the connection count must be larger than 0"

    new-array v8, v6, [Ljava/lang/Object;

    aput-object v9, v8, v3

    invoke-static {v7, v8}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-direct {v2, v7}, Ljava/lang/IllegalAccessException;-><init>(Ljava/lang/String;)V

    throw v2
    :try_end_10
    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_10} :catch_c
    .catch Ljava/lang/IllegalAccessException; {:try_start_10 .. :try_end_10} :catch_b
    .catch Ljava/lang/InterruptedException; {:try_start_10 .. :try_end_10} :catch_a
    .catch Ljava/lang/IllegalArgumentException; {:try_start_10 .. :try_end_10} :catch_9
    .catch Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException; {:try_start_10 .. :try_end_10} :catch_8
    .catch Ljava/lang/NullPointerException; {:try_start_10 .. :try_end_10} :catch_7
    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_10 .. :try_end_10} :catch_6
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$DiscardSafely; {:try_start_10 .. :try_end_10} :catch_5
    .catch Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$RetryDirectly; {:try_start_10 .. :try_end_10} :catch_4
    .catchall {:try_start_10 .. :try_end_10} :catchall_0

    :catchall_0
    move-exception v0

    move-object v4, v0

    move-object v2, v9

    goto/16 :goto_11

    :catch_4
    move-object v2, v9

    goto :goto_c

    :catch_5
    move-object v2, v9

    goto :goto_e

    :catch_6
    move-exception v0

    goto :goto_b

    :catch_7
    move-exception v0

    goto :goto_b

    :catch_8
    move-exception v0

    goto :goto_b

    :catch_9
    move-exception v0

    goto :goto_b

    :catch_a
    move-exception v0

    goto :goto_b

    :catch_b
    move-exception v0

    goto :goto_b

    :catch_c
    move-exception v0

    :goto_b
    move-object v7, v0

    move-object v2, v9

    goto :goto_10

    :catchall_1
    move-exception v0

    move-object v4, v0

    goto :goto_11

    :catch_d
    :goto_c
    :try_start_11
    iget-object v7, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const/4 v8, 0x5

    invoke-virtual {v7, v8}, Lcom/kwad/framework/filedownloader/d/c;->d(B)V
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_1

    if-eqz v2, :cond_5

    :goto_d
    :try_start_12
    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a/b;->ug()V

    goto/16 :goto_5

    :catch_e
    :goto_e
    if-eqz v2, :cond_19

    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a/b;->ug()V
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_2

    :cond_19
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_1a

    goto/16 :goto_1

    :cond_1a
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_1b

    goto/16 :goto_2

    :cond_1b
    :try_start_13
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_13
    .catch Ljava/io/IOException; {:try_start_13 .. :try_end_13} :catch_f

    goto/16 :goto_4

    :catch_f
    move-exception v0

    move-object v2, v0

    goto/16 :goto_3

    :catch_10
    move-exception v0

    goto :goto_f

    :catch_11
    move-exception v0

    goto :goto_f

    :catch_12
    move-exception v0

    goto :goto_f

    :catch_13
    move-exception v0

    goto :goto_f

    :catch_14
    move-exception v0

    goto :goto_f

    :catch_15
    move-exception v0

    goto :goto_f

    :catch_16
    move-exception v0

    :goto_f
    move-object v7, v0

    :goto_10
    :try_start_14
    invoke-virtual {v1, v7}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(Ljava/lang/Exception;)Z

    move-result v8

    if-eqz v8, :cond_1c

    const-wide/16 v8, 0x0

    invoke-virtual {v1, v7, v8, v9}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->a(Ljava/lang/Exception;J)V

    if-eqz v2, :cond_5

    goto :goto_d

    :cond_1c
    invoke-virtual {v1, v7}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->b(Ljava/lang/Exception;)V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_1

    if-eqz v2, :cond_1e

    :try_start_15
    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a/b;->ug()V

    goto :goto_12

    :goto_11
    if-eqz v2, :cond_1d

    invoke-interface {v2}, Lcom/kwad/framework/filedownloader/a/b;->ug()V

    :cond_1d
    throw v4
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_2

    :cond_1e
    :goto_12
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-eqz v2, :cond_1f

    goto/16 :goto_1

    :cond_1f
    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v2, :cond_20

    goto/16 :goto_2

    :cond_20
    :try_start_16
    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_16
    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_16} :catch_17

    goto/16 :goto_4

    :catch_17
    move-exception v0

    move-object v2, v0

    goto/16 :goto_3

    :catchall_2
    move-exception v0

    move-object v2, v0

    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/download/d;->uH()V

    iget-boolean v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->kT:Z

    if-nez v4, :cond_22

    iget-boolean v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acM:Z

    if-eqz v4, :cond_21

    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    iget-object v5, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acN:Ljava/lang/Exception;

    invoke-virtual {v4, v5}, Lcom/kwad/framework/filedownloader/download/d;->c(Ljava/lang/Exception;)V

    goto :goto_13

    :cond_21
    :try_start_17
    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/download/d;->uM()V
    :try_end_17
    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_17} :catch_18

    goto :goto_13

    :catch_18
    move-exception v0

    move-object v4, v0

    iget-object v5, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v5, v4}, Lcom/kwad/framework/filedownloader/download/d;->c(Ljava/lang/Exception;)V

    goto :goto_13

    :cond_22
    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v4}, Lcom/kwad/framework/filedownloader/download/d;->uL()V

    :goto_13
    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acL:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v4, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    throw v2
.end method

.method public final uB()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v2}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v2

    invoke-interface {v0, v1, v2, v3}, Lcom/kwad/framework/filedownloader/b/a;->c(IJ)V

    return-void
.end method

.method public final uE()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final uz()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/b/a;->bg(I)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ne v1, v2, :cond_0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/d/a;->o(Ljava/util/List;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/kwad/framework/filedownloader/d/c;->L(J)V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acw:Lcom/kwad/framework/filedownloader/d/c;

    invoke-virtual {v1}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/b/a;->bh(I)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;->acu:Lcom/kwad/framework/filedownloader/download/d;

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/d;->uI()V

    return-void
.end method
