.class public final Lcom/kwad/sdk/crash/handler/c;
.super Lcom/kwad/sdk/crash/handler/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/crash/handler/c$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/b;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/c;-><init>()V

    return-void
.end method

.method public static ES()Lcom/kwad/sdk/crash/handler/c;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/handler/c$a;->ET()Lcom/kwad/sdk/crash/handler/c;

    move-result-object v0

    return-object v0
.end method

.method private a(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;Z)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    const-string v3, "uploader.uploadEvent(message);"

    const-string v4, "ExceptionCollector"

    const-string v5, "------  Java Crash Happened Begin ------\n"

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    move-result v0

    iget-object v6, v1, Lcom/kwad/sdk/crash/handler/c;->mDumpFile:Ljava/io/File;

    iget-object v7, v1, Lcom/kwad/sdk/crash/handler/c;->mLogFile:Ljava/io/File;

    iget-object v8, v1, Lcom/kwad/sdk/crash/handler/c;->mJavaTraceFile:Ljava/io/File;

    iget-object v9, v1, Lcom/kwad/sdk/crash/handler/c;->mMemoryInfoFile:Ljava/io/File;

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v10

    :try_start_0
    invoke-virtual/range {p1 .. p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v11

    iput-object v11, v2, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    iget-object v11, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v11}, Ljava/io/File;->exists()Z

    move-result v11
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_b

    if-nez v11, :cond_0

    :try_start_1
    iget-object v11, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v11}, Ljava/io/File;->mkdirs()Z

    move-result v11

    if-nez v11, :cond_0

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v2, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "create "

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/c;->ES()Lcom/kwad/sdk/crash/handler/c;

    move-result-object v13

    iget-object v13, v13, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v13}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, " failed!\n"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    iput-object v11, v2, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v11, 0x0

    goto :goto_0

    :catchall_0
    move-exception v0

    goto/16 :goto_6

    :cond_0
    const/4 v11, 0x1

    :goto_0
    const-string v13, "-"

    if-eqz v6, :cond_1

    if-eqz v0, :cond_2

    :cond_1
    :try_start_2
    new-instance v14, Ljava/io/File;

    iget-object v12, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_a

    move-object/from16 v16, v6

    :try_start_3
    sget-object v6, Lcom/kwad/sdk/crash/handler/c;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ".dump"

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v14, v12, v6}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_9

    move-object v6, v14

    :cond_2
    if-eqz v7, :cond_3

    if-eqz v0, :cond_4

    :cond_3
    :try_start_4
    new-instance v12, Ljava/io/File;

    iget-object v14, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_8

    move-object/from16 v17, v7

    :try_start_5
    sget-object v7, Lcom/kwad/sdk/crash/handler/c;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ".log"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v12, v14, v7}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_7

    move-object v7, v12

    :cond_4
    if-eqz v8, :cond_5

    if-eqz v0, :cond_6

    :cond_5
    :try_start_6
    new-instance v12, Ljava/io/File;

    iget-object v14, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    move-object/from16 v18, v8

    :try_start_7
    sget-object v8, Lcom/kwad/sdk/crash/handler/c;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ".jtrace"

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-direct {v12, v14, v8}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    move-object v8, v12

    :cond_6
    if-eqz v9, :cond_7

    if-eqz v0, :cond_8

    :cond_7
    :try_start_8
    new-instance v12, Ljava/io/File;

    iget-object v14, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    move-object/from16 v19, v9

    :try_start_9
    sget-object v9, Lcom/kwad/sdk/crash/handler/c;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ".minfo"

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v12, v14, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    move-object v9, v12

    :cond_8
    :try_start_a
    invoke-static/range {p1 .. p3}, Lcom/kwad/sdk/crash/utils/g;->b(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;)V

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->getCrashType()I

    move-result v0

    invoke-static {v2, v0}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;I)V

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    if-eqz v0, :cond_9

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->getCrashType()I

    move-result v12

    invoke-interface {v0, v12, v2}, Lcom/kwad/sdk/crash/f;->a(ILcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_2

    :cond_9
    :try_start_b
    invoke-virtual/range {p2 .. p2}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    if-eqz v11, :cond_d

    invoke-static {v6, v0}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/g;->E(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/e;->isDebug()Z

    move-result v0

    if-eqz v0, :cond_a

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/crash/handler/c;->backupLogFiles(Ljava/io/File;)V

    :cond_a
    if-eqz v10, :cond_c

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    if-eqz p4, :cond_b

    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v2, 0x1

    invoke-direct {v0, v2}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    new-array v2, v2, [Ljava/io/File;

    const/4 v3, 0x0

    aput-object v6, v2, v3

    invoke-virtual {v1, v2, v0}, Lcom/kwad/sdk/crash/handler/c;->reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_1

    :try_start_c
    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v3, 0x5

    invoke-virtual {v0, v3, v4, v2}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_c
    .catch Ljava/lang/InterruptedException; {:try_start_c .. :try_end_c} :catch_0
    .catchall {:try_start_c .. :try_end_c} :catchall_1

    goto :goto_1

    :cond_b
    :try_start_d
    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->uploadRemainingExceptions()V

    :catch_0
    :cond_c
    :goto_1
    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V

    goto/16 :goto_a

    :cond_d
    if-eqz v10, :cond_f

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p4, :cond_e

    new-instance v11, Ljava/util/concurrent/CountDownLatch;

    const/4 v3, 0x1

    invoke-direct {v11, v3}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    goto :goto_2

    :cond_e
    const/4 v11, 0x0

    :goto_2
    invoke-interface {v10, v2, v11}, Lcom/kwad/sdk/crash/report/e;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Ljava/util/concurrent/CountDownLatch;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_1

    if-eqz v11, :cond_f

    :try_start_e
    sget-object v0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x5

    invoke-virtual {v11, v2, v3, v0}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_e
    .catch Ljava/lang/InterruptedException; {:try_start_e .. :try_end_e} :catch_1
    .catchall {:try_start_e .. :try_end_e} :catchall_1

    goto/16 :goto_a

    :catch_1
    :cond_f
    return-void

    :catchall_1
    move-exception v0

    if-eqz v10, :cond_10

    :try_start_f
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_2

    goto/16 :goto_a

    :catch_2
    :cond_10
    return-void

    :catchall_2
    move-exception v0

    goto :goto_7

    :catchall_3
    move-exception v0

    move-object/from16 v9, v19

    goto :goto_7

    :catchall_4
    move-exception v0

    goto :goto_5

    :catchall_5
    move-exception v0

    move-object/from16 v19, v9

    move-object/from16 v8, v18

    goto :goto_7

    :catchall_6
    move-exception v0

    goto :goto_4

    :catchall_7
    move-exception v0

    move-object/from16 v18, v8

    move-object/from16 v19, v9

    move-object/from16 v7, v17

    goto :goto_7

    :catchall_8
    move-exception v0

    goto :goto_3

    :catchall_9
    move-exception v0

    move-object/from16 v17, v7

    move-object/from16 v18, v8

    move-object/from16 v19, v9

    move-object/from16 v6, v16

    goto :goto_7

    :catchall_a
    move-exception v0

    move-object/from16 v16, v6

    :goto_3
    move-object/from16 v17, v7

    :goto_4
    move-object/from16 v18, v8

    :goto_5
    move-object/from16 v19, v9

    goto :goto_7

    :catchall_b
    move-exception v0

    move-object/from16 v16, v6

    move-object/from16 v17, v7

    move-object/from16 v18, v8

    move-object/from16 v19, v9

    :goto_6
    const/4 v11, 0x1

    :goto_7
    :try_start_10
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v2, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_d

    :try_start_11
    invoke-virtual/range {p2 .. p2}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    if-eqz v11, :cond_14

    invoke-static {v6, v0}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/g;->E(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/e;->isDebug()Z

    move-result v0

    if-eqz v0, :cond_11

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/crash/handler/c;->backupLogFiles(Ljava/io/File;)V

    :cond_11
    if-eqz v10, :cond_13

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    if-eqz p4, :cond_12

    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v2, 0x1

    invoke-direct {v0, v2}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    new-array v2, v2, [Ljava/io/File;

    const/4 v3, 0x0

    aput-object v6, v2, v3

    invoke-virtual {v1, v2, v0}, Lcom/kwad/sdk/crash/handler/c;->reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_c

    :try_start_12
    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v3, 0x5

    invoke-virtual {v0, v3, v4, v2}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_12
    .catch Ljava/lang/InterruptedException; {:try_start_12 .. :try_end_12} :catch_3
    .catchall {:try_start_12 .. :try_end_12} :catchall_c

    goto :goto_8

    :cond_12
    :try_start_13
    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->uploadRemainingExceptions()V

    :catch_3
    :cond_13
    :goto_8
    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V

    goto :goto_a

    :cond_14
    if-eqz v10, :cond_16

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p4, :cond_15

    new-instance v11, Ljava/util/concurrent/CountDownLatch;

    const/4 v3, 0x1

    invoke-direct {v11, v3}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    goto :goto_9

    :cond_15
    const/4 v11, 0x0

    :goto_9
    invoke-interface {v10, v2, v11}, Lcom/kwad/sdk/crash/report/e;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Ljava/util/concurrent/CountDownLatch;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_c

    if-eqz v11, :cond_16

    :try_start_14
    sget-object v0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x5

    invoke-virtual {v11, v2, v3, v0}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_14
    .catch Ljava/lang/InterruptedException; {:try_start_14 .. :try_end_14} :catch_4
    .catchall {:try_start_14 .. :try_end_14} :catchall_c

    goto :goto_a

    :catch_4
    :cond_16
    return-void

    :catchall_c
    move-exception v0

    if-eqz v10, :cond_17

    :try_start_15
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;
    :try_end_15
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_5

    :catch_5
    :cond_17
    :goto_a
    return-void

    :catchall_d
    move-exception v0

    move-object v12, v0

    :try_start_16
    invoke-virtual/range {p2 .. p2}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    if-eqz v11, :cond_1b

    invoke-static {v6, v0}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/g;->E(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/e;->isDebug()Z

    move-result v0

    if-eqz v0, :cond_18

    iget-object v0, v1, Lcom/kwad/sdk/crash/handler/c;->mLogDir:Ljava/io/File;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/crash/handler/c;->backupLogFiles(Ljava/io/File;)V

    :cond_18
    if-eqz v10, :cond_1a

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    if-eqz p4, :cond_19

    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v2, 0x1

    invoke-direct {v0, v2}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    new-array v2, v2, [Ljava/io/File;

    const/4 v3, 0x0

    aput-object v6, v2, v3

    invoke-virtual {v1, v2, v0}, Lcom/kwad/sdk/crash/handler/c;->reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    :try_end_16
    .catchall {:try_start_16 .. :try_end_16} :catchall_e

    :try_start_17
    sget-object v2, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v3, 0x5

    invoke-virtual {v0, v3, v4, v2}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_17
    .catch Ljava/lang/InterruptedException; {:try_start_17 .. :try_end_17} :catch_6
    .catchall {:try_start_17 .. :try_end_17} :catchall_e

    goto :goto_b

    :cond_19
    :try_start_18
    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/crash/handler/c;->uploadRemainingExceptions()V

    :catch_6
    :cond_1a
    :goto_b
    invoke-static {v9}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V

    goto :goto_d

    :cond_1b
    if-eqz v10, :cond_1d

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p4, :cond_1c

    new-instance v11, Ljava/util/concurrent/CountDownLatch;

    const/4 v3, 0x1

    invoke-direct {v11, v3}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    goto :goto_c

    :cond_1c
    const/4 v11, 0x0

    :goto_c
    invoke-interface {v10, v2, v11}, Lcom/kwad/sdk/crash/report/e;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Ljava/util/concurrent/CountDownLatch;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    :try_end_18
    .catchall {:try_start_18 .. :try_end_18} :catchall_e

    if-eqz v11, :cond_1d

    :try_start_19
    sget-object v0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x5

    invoke-virtual {v11, v2, v3, v0}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_19
    .catch Ljava/lang/InterruptedException; {:try_start_19 .. :try_end_19} :catch_7
    .catchall {:try_start_19 .. :try_end_19} :catchall_e

    goto :goto_d

    :catchall_e
    move-exception v0

    if-eqz v10, :cond_1d

    :try_start_1a
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;
    :try_end_1a
    .catch Ljava/lang/Exception; {:try_start_1a .. :try_end_1a} :catch_7

    :catch_7
    :cond_1d
    :goto_d
    throw v12
.end method


# virtual methods
.method public final a(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;)V
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/kwad/sdk/crash/handler/c;->a(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;Z)V

    return-void
.end method

.method protected final getCrashType()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final init(Ljava/io/File;Lcom/kwad/sdk/crash/f;Lcom/kwad/sdk/crash/report/e;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/crash/handler/b;->init(Ljava/io/File;Lcom/kwad/sdk/crash/f;Lcom/kwad/sdk/crash/report/e;)V

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/crash/e;->isDebug()Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Ljava/io/File;

    const-string p2, "sdcard/kwad_ex/java_crash/dump"

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/crash/handler/c;->initBackupDir(Ljava/io/File;)V

    :cond_0
    return-void
.end method

.method protected final reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/crash/report/f;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/report/f;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/c;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/report/f;->a(Lcom/kwad/sdk/crash/report/e;)V

    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p1, v2

    invoke-virtual {v0, v3, p2}, Lcom/kwad/sdk/crash/report/f;->a(Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
