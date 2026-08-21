.class public Lcom/kwad/framework/filedownloader/f/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/f/e$a;
    }
.end annotation


# instance fields
.field public final aeJ:I

.field public final aeK:J

.field public final aeL:Z

.field public final aeM:Z

.field public final aeN:I

.field public final aeO:Z

.field public final aeP:Z


# direct methods
.method private constructor <init>()V
    .locals 21

    move-object/from16 v1, p0

    const-string v2, "broadcast.completed"

    const-string v3, "file.non-pre-allocation"

    const-string v4, "download.max-network-thread-count"

    const-string v5, "download.min-progress-time"

    const-string v6, "download.min-progress-step"

    const-class v7, Lcom/kwad/framework/filedownloader/f/e;

    const-string v8, "http.lenient"

    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_10

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    new-instance v0, Ljava/util/Properties;

    invoke-direct {v0}, Ljava/util/Properties;-><init>()V

    const/4 v12, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v13

    invoke-virtual {v13}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v13

    const-string v14, "filedownloader.properties"

    invoke-virtual {v13, v14}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v13
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_6
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v13, :cond_0

    :try_start_1
    invoke-virtual {v0, v13}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    invoke-virtual {v0, v8}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_5
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {v0, v6}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_4
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    invoke-virtual {v0, v5}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v16
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    invoke-virtual {v0, v4}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    invoke-virtual {v0, v3}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v18
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :try_start_6
    invoke-virtual {v0, v2}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    move-object v11, v14

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_6

    :catch_1
    move-exception v0

    goto :goto_5

    :catch_2
    move-exception v0

    goto :goto_4

    :catch_3
    move-exception v0

    goto :goto_3

    :catch_4
    move-exception v0

    goto :goto_2

    :catch_5
    move-exception v0

    goto :goto_1

    :cond_0
    const/4 v0, 0x0

    const/4 v11, 0x0

    const/4 v15, 0x0

    const/16 v16, 0x0

    const/16 v17, 0x0

    const/16 v18, 0x0

    :goto_0
    invoke-static {v13}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    move-object/from16 v13, v18

    goto :goto_8

    :catchall_0
    move-exception v0

    const/4 v11, 0x0

    goto/16 :goto_12

    :catch_6
    move-exception v0

    const/4 v13, 0x0

    :goto_1
    const/4 v14, 0x0

    :goto_2
    const/4 v15, 0x0

    :goto_3
    const/16 v16, 0x0

    :goto_4
    const/16 v17, 0x0

    :goto_5
    const/16 v18, 0x0

    :goto_6
    :try_start_7
    instance-of v11, v0, Ljava/io/FileNotFoundException;

    if-eqz v11, :cond_1

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_2

    const-string v0, "not found filedownloader.properties"

    new-array v11, v12, [Ljava/lang/Object;

    invoke-static {v7, v0, v11}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_7

    :cond_1
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :cond_2
    :goto_7
    invoke-static {v13}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    move-object v11, v14

    move-object/from16 v13, v18

    const/4 v0, 0x0

    :goto_8
    const-string v14, "the value of \'%s\' must be \'%s\' or \'%s\'"

    const/16 v18, 0x2

    const-string v12, "false"

    move-object/from16 v19, v7

    const-string v7, "true"

    if-eqz v11, :cond_5

    invoke-virtual {v11, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v20

    if-nez v20, :cond_4

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v20

    if-eqz v20, :cond_3

    goto :goto_9

    :cond_3
    new-instance v0, Ljava/lang/IllegalStateException;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object v8, v2, v3

    const/4 v3, 0x1

    aput-object v7, v2, v3

    aput-object v12, v2, v18

    invoke-static {v14, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_4
    :goto_9
    move-object/from16 v20, v4

    const/4 v4, 0x0

    invoke-virtual {v11, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    iput-boolean v11, v1, Lcom/kwad/framework/filedownloader/f/e;->aeL:Z

    goto :goto_a

    :cond_5
    move-object/from16 v20, v4

    const/4 v4, 0x0

    iput-boolean v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeL:Z

    :goto_a
    const/4 v11, 0x1

    iput-boolean v11, v1, Lcom/kwad/framework/filedownloader/f/e;->aeM:Z

    if-eqz v15, :cond_6

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    invoke-static {v4, v11}, Ljava/lang/Math;->max(II)I

    move-result v11

    iput v11, v1, Lcom/kwad/framework/filedownloader/f/e;->aeJ:I

    goto :goto_b

    :cond_6
    const/high16 v4, 0x10000

    iput v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeJ:I

    :goto_b
    if-eqz v16, :cond_7

    invoke-static/range {v16 .. v16}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v4

    move-object v11, v5

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    move-wide v15, v9

    move-object v10, v8

    const-wide/16 v8, 0x0

    invoke-static {v8, v9, v4, v5}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v4

    goto :goto_c

    :cond_7
    move-object v11, v5

    move-wide v15, v9

    move-object v10, v8

    const-wide/16 v4, 0x7d0

    :goto_c
    iput-wide v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeK:J

    if-eqz v17, :cond_8

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-static {v4}, Lcom/kwad/framework/filedownloader/f/e;->bG(I)I

    move-result v4

    iput v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeN:I

    const/4 v4, 0x3

    goto :goto_d

    :cond_8
    const/4 v4, 0x3

    iput v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeN:I

    :goto_d
    if-eqz v13, :cond_b

    invoke-virtual {v13, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_a

    invoke-virtual {v13, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_9

    goto :goto_e

    :cond_9
    new-instance v0, Ljava/lang/IllegalStateException;

    new-array v2, v4, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const/4 v3, 0x1

    aput-object v7, v2, v3

    aput-object v12, v2, v18

    invoke-static {v14, v2}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_a
    :goto_e
    const/4 v4, 0x0

    invoke-virtual {v13, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    iput-boolean v3, v1, Lcom/kwad/framework/filedownloader/f/e;->aeO:Z

    goto :goto_f

    :cond_b
    const/4 v4, 0x0

    iput-boolean v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeO:Z

    :goto_f
    if-eqz v0, :cond_e

    invoke-virtual {v0, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_d

    invoke-virtual {v0, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    goto :goto_10

    :cond_c
    new-instance v0, Ljava/lang/IllegalStateException;

    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/Object;

    aput-object v2, v3, v4

    const/4 v2, 0x1

    aput-object v7, v3, v2

    aput-object v12, v3, v18

    invoke-static {v14, v3}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_d
    :goto_10
    invoke-virtual {v0, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    iput-boolean v0, v1, Lcom/kwad/framework/filedownloader/f/e;->aeP:Z

    goto :goto_11

    :cond_e
    iput-boolean v4, v1, Lcom/kwad/framework/filedownloader/f/e;->aeP:Z

    :goto_11
    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_f

    const/16 v0, 0xb

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v15

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v0, v4

    const/4 v2, 0x1

    aput-object v10, v0, v2

    iget-boolean v2, v1, Lcom/kwad/framework/filedownloader/f/e;->aeL:Z

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    aput-object v2, v0, v18

    const-string v2, "process.non-separate"

    const/4 v3, 0x3

    aput-object v2, v0, v3

    const/4 v2, 0x4

    iget-boolean v3, v1, Lcom/kwad/framework/filedownloader/f/e;->aeM:Z

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x5

    aput-object v6, v0, v2

    const/4 v2, 0x6

    iget v3, v1, Lcom/kwad/framework/filedownloader/f/e;->aeJ:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x7

    aput-object v11, v0, v2

    const/16 v2, 0x8

    iget-wide v3, v1, Lcom/kwad/framework/filedownloader/f/e;->aeK:J

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v0, v2

    const/16 v2, 0x9

    aput-object v20, v0, v2

    const/16 v2, 0xa

    iget v3, v1, Lcom/kwad/framework/filedownloader/f/e;->aeN:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v2

    const-string v2, "init properties %d\n load properties: %s=%B; %s=%B; %s=%d; %s=%d; %s=%d"

    move-object/from16 v3, v19

    invoke-static {v3, v2, v0}, Lcom/kwad/framework/filedownloader/f/d;->b(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_f
    return-void

    :catchall_1
    move-exception v0

    move-object v11, v13

    :goto_12
    invoke-static {v11}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0

    :cond_10
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v2, "Please invoke the \'FileDownloader#setup\' before using FileDownloader. If you want to register some components on FileDownloader please invoke the \'FileDownloader#setupOnApplicationOnCreate\' on the \'Application#onCreate\' first."

    invoke-direct {v0, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/f/e;-><init>()V

    return-void
.end method

.method public static bG(I)I
    .locals 8

    const-class v0, Lcom/kwad/framework/filedownloader/f/e;

    const/4 v1, 0x2

    const/4 v2, 0x0

    const/4 v3, 0x3

    const/16 v4, 0xc

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v6, 0x1

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    if-le p0, v4, :cond_0

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v3, v2

    aput-object v5, v3, v6

    aput-object v5, v3, v1

    const-string p0, "require the count of network thread  is %d, what is more than the max valid count(%d), so adjust to %d auto"

    invoke-static {v0, p0, v3}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v4

    :cond_0
    if-gtz p0, :cond_1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v3, v2

    aput-object v7, v3, v6

    aput-object v7, v3, v1

    const-string p0, "require the count of network thread  is %d, what is less than the min valid count(%d), so adjust to %d auto"

    invoke-static {v0, p0, v3}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v6

    :cond_1
    return p0
.end method

.method public static vO()Lcom/kwad/framework/filedownloader/f/e;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e$a;->vP()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object v0

    return-object v0
.end method
