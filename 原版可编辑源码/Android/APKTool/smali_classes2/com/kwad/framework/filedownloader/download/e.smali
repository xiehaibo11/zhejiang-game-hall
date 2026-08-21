.class public final Lcom/kwad/framework/filedownloader/download/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/download/e$a;
    }
.end annotation


# instance fields
.field private final Tt:Ljava/lang/String;

.field private final acZ:Lcom/kwad/framework/filedownloader/download/f;

.field private final acc:I

.field private final ack:J

.field acl:J

.field private final acm:J

.field private final acr:Lcom/kwad/framework/filedownloader/b/a;

.field private final acz:Z

.field private final adb:I

.field private final adr:Lcom/kwad/framework/filedownloader/download/c;

.field private final ads:Lcom/kwad/framework/filedownloader/a/b;

.field private adt:Lcom/kwad/framework/filedownloader/e/a;

.field private volatile adu:J

.field private volatile adv:J

.field private final contentLength:J

.field private volatile kT:Z


# direct methods
.method private constructor <init>(Lcom/kwad/framework/filedownloader/a/b;Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/download/c;IIZLcom/kwad/framework/filedownloader/download/f;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/e;->adu:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/e;->adv:J

    iput-object p7, p0, Lcom/kwad/framework/filedownloader/download/e;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    iput-object p8, p0, Lcom/kwad/framework/filedownloader/download/e;->Tt:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e;->ads:Lcom/kwad/framework/filedownloader/a/b;

    iput-boolean p6, p0, Lcom/kwad/framework/filedownloader/download/e;->acz:Z

    iput-object p3, p0, Lcom/kwad/framework/filedownloader/download/e;->adr:Lcom/kwad/framework/filedownloader/download/c;

    iput p5, p0, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    iput p4, p0, Lcom/kwad/framework/filedownloader/download/e;->acc:I

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/download/b;->ur()Lcom/kwad/framework/filedownloader/b/a;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget-wide p3, p2, Lcom/kwad/framework/filedownloader/download/a;->ack:J

    iput-wide p3, p0, Lcom/kwad/framework/filedownloader/download/e;->ack:J

    iget-wide p3, p2, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    iput-wide p3, p0, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    iget-wide p3, p2, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    iput-wide p3, p0, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    iget-wide p1, p2, Lcom/kwad/framework/filedownloader/download/a;->contentLength:J

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/download/e;->contentLength:J

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/framework/filedownloader/a/b;Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/download/c;IIZLcom/kwad/framework/filedownloader/download/f;Ljava/lang/String;B)V
    .locals 0

    invoke-direct/range {p0 .. p8}, Lcom/kwad/framework/filedownloader/download/e;-><init>(Lcom/kwad/framework/filedownloader/a/b;Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/download/c;IIZLcom/kwad/framework/filedownloader/download/f;Ljava/lang/String;)V

    return-void
.end method

.method private sync()V
    .locals 9

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    const/4 v2, 0x1

    const/4 v3, 0x0

    :try_start_0
    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/e;->adt:Lcom/kwad/framework/filedownloader/e/a;

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/e/a;->vJ()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    move v4, v2

    goto :goto_0

    :catch_0
    move-exception v4

    sget-boolean v5, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v5, :cond_0

    new-array v5, v2, [Ljava/lang/Object;

    aput-object v4, v5, v3

    const-string v4, "Because of the system cannot guarantee that all the buffers have been synchronized with physical media, or write to filefailed, we just not flushAndSync process to database too %s"

    invoke-static {p0, v4, v5}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    move v4, v3

    :goto_0
    if-eqz v4, :cond_3

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/e;->adr:Lcom/kwad/framework/filedownloader/download/c;

    if-eqz v4, :cond_1

    move v4, v2

    goto :goto_1

    :cond_1
    move v4, v3

    :goto_1
    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/e;->acr:Lcom/kwad/framework/filedownloader/b/a;

    iget v5, p0, Lcom/kwad/framework/filedownloader/download/e;->acc:I

    iget v6, p0, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    iget-wide v7, p0, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-interface {v4, v5, v6, v7, v8}, Lcom/kwad/framework/filedownloader/b/a;->a(IIJ)V

    goto :goto_2

    :cond_2
    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/e;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    invoke-interface {v4}, Lcom/kwad/framework/filedownloader/download/f;->uB()V

    :goto_2
    sget-boolean v4, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v4, :cond_3

    const/4 v4, 0x4

    new-array v4, v4, [Ljava/lang/Object;

    iget v5, p0, Lcom/kwad/framework/filedownloader/download/e;->acc:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v3

    iget v3, p0, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v2

    const/4 v2, 0x2

    iget-wide v5, p0, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v4, v2

    const/4 v2, 0x3

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v0

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v4, v2

    const-string v0, "require flushAndSync id[%d] index[%d] offset[%d], consume[%d]"

    invoke-static {p0, v0, v4}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    return-void
.end method

.method private uS()V
    .locals 6

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    iget-wide v4, p0, Lcom/kwad/framework/filedownloader/download/e;->adu:J

    sub-long/2addr v2, v4

    iget-wide v4, p0, Lcom/kwad/framework/filedownloader/download/e;->adv:J

    sub-long v4, v0, v4

    invoke-static {v2, v3, v4, v5}, Lcom/kwad/framework/filedownloader/f/f;->g(JJ)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/download/e;->sync()V

    iget-wide v2, p0, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    iput-wide v2, p0, Lcom/kwad/framework/filedownloader/download/e;->adu:J

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/download/e;->adv:J

    :cond_0
    return-void
.end method


# virtual methods
.method public final pause()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/e;->kT:Z

    return-void
.end method

.method public final run()V
    .locals 16

    move-object/from16 v1, p0

    iget-boolean v0, v1, Lcom/kwad/framework/filedownloader/download/e;->kT:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget v0, v1, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    iget-object v2, v1, Lcom/kwad/framework/filedownloader/download/e;->ads:Lcom/kwad/framework/filedownloader/a/b;

    invoke-static {v0, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(ILcom/kwad/framework/filedownloader/a/b;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    const/4 v6, 0x2

    const/4 v7, 0x1

    const/4 v8, 0x0

    if-eqz v0, :cond_e

    iget-wide v9, v1, Lcom/kwad/framework/filedownloader/download/e;->contentLength:J

    cmp-long v0, v9, v4

    const/4 v11, 0x5

    const/4 v12, 0x4

    const/4 v13, 0x3

    if-lez v0, :cond_2

    cmp-long v0, v2, v9

    if-eqz v0, :cond_2

    iget-wide v9, v1, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    cmp-long v0, v9, v4

    if-nez v0, :cond_1

    new-array v0, v7, [Ljava/lang/Object;

    iget-wide v4, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v0, v8

    const-string v4, "range[%d-)"

    invoke-static {v4, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    new-array v0, v6, [Ljava/lang/Object;

    iget-wide v4, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v0, v8

    iget-wide v4, v1, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, v0, v7

    const-string v4, "range[%d-%d)"

    invoke-static {v4, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    new-instance v4, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    new-array v5, v11, [Ljava/lang/Object;

    aput-object v0, v5, v8

    iget-wide v8, v1, Lcom/kwad/framework/filedownloader/download/e;->contentLength:J

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v5, v7

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v5, v6

    iget v0, v1, Lcom/kwad/framework/filedownloader/download/e;->acc:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v5, v13

    iget v0, v1, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v5, v12

    const-string v0, "require %s with contentLength(%d), but the backend response contentLength is %d on downloadId[%d]-connectionIndex[%d], please ask your backend dev to fix such problem."

    invoke-static {v0, v5}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v4, v0}, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;-><init>(Ljava/lang/String;)V

    throw v4

    :cond_2
    iget-wide v4, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    const/4 v9, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/b;->ut()Z

    move-result v0

    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/e;->adr:Lcom/kwad/framework/filedownloader/download/c;

    if-eqz v10, :cond_4

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    new-instance v0, Ljava/lang/IllegalAccessException;

    const-string v2, "can\'t using multi-download when the output stream can\'t support seek"

    invoke-direct {v0, v2}, Ljava/lang/IllegalAccessException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_4
    :goto_1
    iget-object v10, v1, Lcom/kwad/framework/filedownloader/download/e;->Tt:Ljava/lang/String;

    invoke-static {v10}, Lcom/kwad/framework/filedownloader/f/f;->bv(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/e/a;

    move-result-object v10
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iput-object v10, v1, Lcom/kwad/framework/filedownloader/download/e;->adt:Lcom/kwad/framework/filedownloader/e/a;

    if-eqz v0, :cond_5

    iget-wide v14, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-interface {v10, v14, v15}, Lcom/kwad/framework/filedownloader/e/a;->seek(J)V

    :cond_5
    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_6

    const-string v0, "start fetch(%d): range [%d, %d), seek to[%d]"

    new-array v14, v12, [Ljava/lang/Object;

    iget v15, v1, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v8

    iget-wide v11, v1, Lcom/kwad/framework/filedownloader/download/e;->ack:J

    invoke-static {v11, v12}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v14, v7

    iget-wide v11, v1, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    invoke-static {v11, v12}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v14, v6

    iget-wide v11, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-static {v11, v12}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v11

    aput-object v11, v14, v13

    invoke-static {v1, v0, v14}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_6
    iget-object v0, v1, Lcom/kwad/framework/filedownloader/download/e;->ads:Lcom/kwad/framework/filedownloader/a/b;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a/b;->getInputStream()Ljava/io/InputStream;

    move-result-object v9

    const/16 v0, 0x1000

    new-array v0, v0, [B

    iget-boolean v11, v1, Lcom/kwad/framework/filedownloader/download/e;->kT:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v11, :cond_7

    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v10}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-void

    :cond_7
    :goto_2
    :try_start_2
    invoke-virtual {v9, v0}, Ljava/io/InputStream;->read([B)I

    move-result v11

    const/4 v12, -0x1

    if-eq v11, v12, :cond_a

    invoke-interface {v10, v0, v8, v11}, Lcom/kwad/framework/filedownloader/e/a;->write([BII)V

    iget-wide v13, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    int-to-long v6, v11

    add-long/2addr v13, v6

    iput-wide v13, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    iget-object v11, v1, Lcom/kwad/framework/filedownloader/download/e;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    invoke-interface {v11, v6, v7}, Lcom/kwad/framework/filedownloader/download/f;->onProgress(J)V

    invoke-direct/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/download/e;->uS()V

    iget-boolean v6, v1, Lcom/kwad/framework/filedownloader/download/e;->kT:Z

    if-nez v6, :cond_a

    iget-boolean v6, v1, Lcom/kwad/framework/filedownloader/download/e;->acz:Z

    if-eqz v6, :cond_9

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vT()Z

    move-result v6

    if-nez v6, :cond_8

    goto :goto_3

    :cond_8
    new-instance v0, Lcom/kwad/framework/filedownloader/exception/FileDownloadNetworkPolicyException;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/exception/FileDownloadNetworkPolicyException;-><init>()V

    throw v0

    :cond_9
    :goto_3
    const/4 v6, 0x2

    const/4 v7, 0x1

    const/4 v13, 0x3

    goto :goto_2

    :cond_a
    if-eqz v10, :cond_b

    invoke-direct/range {p0 .. p0}, Lcom/kwad/framework/filedownloader/download/e;->sync()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_b
    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v10}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    iget-wide v6, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    sub-long/2addr v6, v4

    const-wide/16 v9, -0x1

    cmp-long v0, v2, v9

    if-eqz v0, :cond_d

    cmp-long v0, v2, v6

    if-nez v0, :cond_c

    goto :goto_4

    :cond_c
    new-instance v0, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    const/4 v9, 0x6

    new-array v9, v9, [Ljava/lang/Object;

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    aput-object v6, v9, v8

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v9, v3

    iget-wide v2, v1, Lcom/kwad/framework/filedownloader/download/e;->ack:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v9, v3

    iget-wide v2, v1, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x3

    aput-object v2, v9, v3

    iget-wide v2, v1, Lcom/kwad/framework/filedownloader/download/e;->acl:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x4

    aput-object v2, v9, v3

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x5

    aput-object v2, v9, v3

    const-string v2, "fetched length[%d] != content length[%d], range[%d, %d) offset[%d] fetch begin offset"

    invoke-static {v2, v9}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_d
    :goto_4
    iget-object v3, v1, Lcom/kwad/framework/filedownloader/download/e;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    iget-object v4, v1, Lcom/kwad/framework/filedownloader/download/e;->adr:Lcom/kwad/framework/filedownloader/download/c;

    iget-wide v5, v1, Lcom/kwad/framework/filedownloader/download/e;->ack:J

    iget-wide v7, v1, Lcom/kwad/framework/filedownloader/download/e;->acm:J

    invoke-interface/range {v3 .. v8}, Lcom/kwad/framework/filedownloader/download/f;->a(Lcom/kwad/framework/filedownloader/download/c;JJ)V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_5

    :catchall_1
    move-exception v0

    move-object v10, v9

    :goto_5
    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v10}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0

    :cond_e
    new-instance v0, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    iget v3, v1, Lcom/kwad/framework/filedownloader/download/e;->acc:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v8

    iget v3, v1, Lcom/kwad/framework/filedownloader/download/e;->adb:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    const-string v3, "there isn\'t any content need to download on %d-%d with the content-length is 0"

    invoke-static {v3, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
