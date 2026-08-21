.class final Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->checkUploadRecordCrash()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;


# direct methods
.method constructor <init>(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)V
    .locals 0

    .line 391
    iput-object p1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 20

    move-object/from16 v1, p0

    .line 395
    iget-object v0, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-static {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Landroid/content/Context;

    move-result-object v0

    const-string v2, "native_record_lock"

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/ap;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const/4 v3, 0x0

    if-nez v0, :cond_0

    .line 398
    new-array v0, v3, [Ljava/lang/Object;

    const-string v2, "[Native] Failed to lock file for handling native crash record."

    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 402
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a()Z

    move-result v0

    if-nez v0, :cond_1

    .line 403
    iget-object v0, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    const-string v4, "false"

    invoke-static {v0, v4}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;Ljava/lang/String;)Z

    .line 406
    :cond_1
    iget-object v0, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    .line 407
    invoke-static {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b()Ljava/lang/String;

    move-result-object v4

    iget-object v5, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-static {v5}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;

    move-result-object v5

    .line 406
    invoke-static {v0, v4, v5}, Lcom/tencent/bugly/proguard/be;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    move-result-object v0

    const/4 v4, 0x1

    if-eqz v0, :cond_3

    .line 410
    new-array v5, v3, [Ljava/lang/Object;

    const-string v6, "[Native] Get crash from native record."

    invoke-static {v6, v5}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 412
    iget-object v5, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-static {v5}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Lcom/tencent/bugly/proguard/as;

    move-result-object v5

    .line 1300
    invoke-virtual {v5, v0, v4}, Lcom/tencent/bugly/proguard/as;->a(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)Z

    move-result v5

    if-nez v5, :cond_2

    .line 413
    iget-object v5, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-static {v5}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Lcom/tencent/bugly/proguard/as;

    move-result-object v5

    invoke-virtual {v5, v0, v3}, Lcom/tencent/bugly/proguard/as;->b(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)V

    .line 418
    :cond_2
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/tencent/bugly/proguard/be;->a(ZLjava/lang/String;)V

    .line 420
    :cond_3
    iget-object v0, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    .line 1528
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->b()J

    move-result-wide v5

    sget-wide v7, Lcom/tencent/bugly/proguard/at;->j:J

    sub-long/2addr v5, v7

    .line 1529
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->b()J

    move-result-wide v7

    const-wide/32 v9, 0x5265c00

    add-long/2addr v7, v9

    .line 1530
    new-instance v9, Ljava/io/File;

    sget-object v10, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    invoke-direct {v9, v10}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1531
    invoke-virtual {v9}, Ljava/io/File;->exists()Z

    move-result v10

    if-eqz v10, :cond_9

    invoke-virtual {v9}, Ljava/io/File;->isDirectory()Z

    move-result v10

    if-eqz v10, :cond_9

    .line 1533
    :try_start_0
    invoke-virtual {v9}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v9

    if-eqz v9, :cond_9

    .line 1534
    array-length v10, v9

    if-nez v10, :cond_4

    goto :goto_3

    .line 1538
    :cond_4
    new-instance v10, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$2;

    invoke-direct {v10, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$2;-><init>(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)V

    invoke-static {v9, v10}, Ljava/util/Arrays;->sort([Ljava/lang/Object;Ljava/util/Comparator;)V

    const-wide/16 v10, 0x0

    .line 1548
    array-length v0, v9

    move-wide v12, v10

    const/4 v10, 0x0

    const/4 v11, 0x0

    const/4 v14, 0x0

    :goto_0
    if-ge v10, v0, :cond_8

    aget-object v15, v9, v10

    .line 1549
    invoke-virtual {v15}, Ljava/io/File;->lastModified()J

    move-result-wide v16

    .line 1550
    invoke-virtual {v15}, Ljava/io/File;->length()J

    move-result-wide v18

    add-long v12, v12, v18

    cmp-long v18, v16, v5

    if-ltz v18, :cond_6

    cmp-long v18, v16, v7

    if-gez v18, :cond_6

    .line 1553
    sget-wide v16, Lcom/tencent/bugly/proguard/at;->i:J

    cmp-long v18, v12, v16

    if-ltz v18, :cond_5

    goto :goto_1

    :cond_5
    move/from16 v17, v0

    goto :goto_2

    :cond_6
    :goto_1
    const-string v3, "[Native] Delete record file: %s"

    move/from16 v17, v0

    .line 1557
    new-array v0, v4, [Ljava/lang/Object;

    invoke-virtual {v15}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v18

    const/16 v16, 0x0

    aput-object v18, v0, v16

    invoke-static {v3, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    add-int/lit8 v11, v11, 0x1

    .line 1560
    invoke-virtual {v15}, Ljava/io/File;->delete()Z

    move-result v0

    if-eqz v0, :cond_7

    add-int/lit8 v14, v14, 0x1

    :cond_7
    :goto_2
    add-int/lit8 v10, v10, 0x1

    move/from16 v0, v17

    const/4 v3, 0x0

    goto :goto_0

    :cond_8
    const-string v0, "[Native] Number of record files overdue: %d, has deleted: %d"

    const/4 v3, 0x2

    .line 1564
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v6, 0x0

    aput-object v5, v3, v6

    .line 1565
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v3, v4

    .line 1564
    invoke-static {v0, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    .line 1567
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 422
    :cond_9
    :goto_3
    iget-object v0, v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;->a:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-static {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/ap;->b(Landroid/content/Context;Ljava/lang/String;)Z

    return-void
.end method
