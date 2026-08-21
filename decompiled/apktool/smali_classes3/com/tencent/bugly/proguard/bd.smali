.class public final Lcom/tencent/bugly/proguard/bd;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;


# instance fields
.field private final a:Landroid/content/Context;

.field private final b:Lcom/tencent/bugly/proguard/as;

.field private final c:Lcom/tencent/bugly/proguard/aa;

.field private final d:Lcom/tencent/bugly/proguard/ac;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/as;Lcom/tencent/bugly/proguard/ac;)V
    .locals 0

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    iput-object p1, p0, Lcom/tencent/bugly/proguard/bd;->a:Landroid/content/Context;

    .line 47
    iput-object p3, p0, Lcom/tencent/bugly/proguard/bd;->b:Lcom/tencent/bugly/proguard/as;

    .line 48
    iput-object p2, p0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    .line 49
    iput-object p4, p0, Lcom/tencent/bugly/proguard/bd;->d:Lcom/tencent/bugly/proguard/ac;

    return-void
.end method

.method private static a([Ljava/lang/String;)Ljava/util/Map;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 312
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x1

    if-nez p0, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    array-length v2, p0

    :goto_0
    invoke-direct {v0, v2}, Ljava/util/HashMap;-><init>(I)V

    const/4 v2, 0x0

    if-eqz p0, :cond_3

    const/4 v3, 0x0

    .line 314
    :goto_1
    array-length v4, p0

    if-ge v3, v4, :cond_4

    .line 315
    aget-object v4, p0, v3

    if-eqz v4, :cond_2

    const/4 v5, 0x2

    .line 317
    new-array v6, v5, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v6, v2

    aput-object v4, v6, v1

    const-string v7, "Extra message[%d]: %s"

    invoke-static {v7, v6}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v6, "="

    .line 318
    invoke-virtual {v4, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 319
    array-length v7, v6

    if-ne v7, v5, :cond_1

    .line 320
    aget-object v4, v6, v2

    aget-object v5, v6, v1

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    .line 322
    :cond_1
    new-array v5, v1, [Ljava/lang/Object;

    aput-object v4, v5, v2

    const-string v4, "bad extraMsg %s"

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_2
    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 327
    :cond_3
    new-array p0, v2, [Ljava/lang/Object;

    const-string v1, "not found extraMsg"

    invoke-static {v1, p0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_4
    return-object v0
.end method


# virtual methods
.method public final getAndUpdateAnrState()Z
    .locals 7

    .line 184
    invoke-static {}, Lcom/tencent/bugly/proguard/ay;->a()Lcom/tencent/bugly/proguard/ay;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 187
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/proguard/ay;->a()Lcom/tencent/bugly/proguard/ay;

    move-result-object v0

    .line 3263
    iget-object v2, v0, Lcom/tencent/bugly/proguard/ay;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 2679
    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "anr is processing, return"

    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v1

    .line 2682
    :cond_1
    iget-object v2, v0, Lcom/tencent/bugly/proguard/ay;->b:Landroid/app/ActivityManager;

    .line 4026
    invoke-static {v2}, Lcom/tencent/bugly/proguard/z;->a(Landroid/app/ActivityManager;)Z

    move-result v3

    const/4 v4, 0x1

    if-nez v3, :cond_2

    const-wide/16 v5, 0x0

    .line 4029
    invoke-static {v2, v5, v6}, Lcom/tencent/bugly/proguard/az;->a(Landroid/app/ActivityManager;J)Landroid/app/ActivityManager$ProcessErrorStateInfo;

    move-result-object v2

    if-eqz v2, :cond_2

    const/4 v2, 0x1

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    :goto_0
    if-nez v2, :cond_3

    .line 2683
    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "proc is not in anr, wait next check"

    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v1

    .line 2686
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 2687
    invoke-virtual {v0, v2, v3}, Lcom/tencent/bugly/proguard/ay;->a(J)Z

    move-result v2

    if-eqz v2, :cond_4

    return v1

    .line 2690
    :cond_4
    invoke-virtual {v0, v4}, Lcom/tencent/bugly/proguard/ay;->a(Z)Z

    move-result v0

    return v0
.end method

.method public final handleNativeException(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V
    .locals 20

    move-object/from16 v0, p0

    move/from16 v1, p1

    move/from16 v2, p2

    move-wide/from16 v3, p3

    move-wide/from16 v5, p5

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move/from16 v11, p11

    move-object/from16 v12, p12

    move/from16 v13, p13

    move/from16 v14, p14

    move/from16 v15, p15

    move-object/from16 v16, p16

    move-object/from16 v17, p17

    move-object/from16 v19, v0

    const/4 v0, 0x0

    .line 195
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "Native Crash Happen v1"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/16 v18, 0x0

    move/from16 v1, p1

    move-object/from16 v0, v19

    .line 196
    invoke-virtual/range {v0 .. v18}, Lcom/tencent/bugly/proguard/bd;->handleNativeException2(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method

.method public final handleNativeException2(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V
    .locals 27

    move-object/from16 v14, p0

    move/from16 v0, p2

    move-object/from16 v13, p8

    move/from16 v1, p13

    const/4 v12, 0x0

    .line 207
    new-array v2, v12, [Ljava/lang/Object;

    const-string v3, "Native Crash Happen v2"

    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v2, ")"

    const-string v3, "("

    if-lez p11, :cond_0

    .line 4271
    :try_start_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v5, p7

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v6, p12

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    move-object v11, v4

    goto :goto_0

    :cond_0
    move-object/from16 v5, p7

    move-object/from16 v6, p12

    move-object v11, v5

    .line 213
    :goto_0
    invoke-static/range {p9 .. p9}, Lcom/tencent/bugly/proguard/be;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 215
    invoke-static/range {p18 .. p18}, Lcom/tencent/bugly/proguard/bd;->a([Ljava/lang/String;)Ljava/util/Map;

    move-result-object v4

    const-string v5, "HasPendingException"

    .line 4338
    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    const/4 v9, 0x1

    if-eqz v5, :cond_1

    const-string v7, "true"

    .line 4339
    invoke-virtual {v5, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    const-string v5, "Native crash happened with a Java pending exception."

    .line 4340
    new-array v7, v12, [Ljava/lang/Object;

    invoke-static {v5, v7}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/16 v18, 0x1

    goto :goto_1

    :cond_1
    const/16 v18, 0x0

    .line 219
    :goto_1
    iget-object v5, v14, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    const-string v7, "ExceptionProcessName"

    .line 4353
    invoke-interface {v4, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    if-eqz v7, :cond_3

    .line 4354
    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v8

    if-nez v8, :cond_2

    goto :goto_2

    :cond_2
    const-string v5, "Name of crash process: %s"

    .line 4357
    new-array v8, v9, [Ljava/lang/Object;

    aput-object v7, v8, v12

    invoke-static {v5, v8}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    move-object/from16 v19, v7

    goto :goto_3

    .line 4355
    :cond_3
    :goto_2
    iget-object v5, v5, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    move-object/from16 v19, v5

    :goto_3
    const-string v5, "ExceptionThreadName"

    .line 4369
    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    const-string v7, "crash thread name:%s tid:%s"

    const/4 v8, 0x2

    .line 4370
    new-array v8, v8, [Ljava/lang/Object;

    aput-object v5, v8, v12

    invoke-static/range {p2 .. p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v8, v9

    invoke-static {v7, v8}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 4371
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_4

    .line 4372
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v5

    .line 4373
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_4

    .line 4375
    :cond_4
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_4
    const-wide/16 v7, 0x3e8

    mul-long v15, p3, v7

    .line 222
    div-long v7, p5, v7

    add-long/2addr v7, v15

    const-string v5, "SysLogPath"

    .line 224
    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    move-object/from16 v20, v5

    check-cast v20, Ljava/lang/String;

    const-string v5, "JniLogPath"

    .line 225
    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    move-object/from16 v21, v4

    check-cast v21, Ljava/lang/String;

    .line 227
    iget-object v4, v14, Lcom/tencent/bugly/proguard/bd;->d:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/ac;->b()Z

    move-result v4

    if-nez v4, :cond_5

    const-string v4, "no remote but still store!"

    .line 228
    new-array v5, v12, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 231
    :cond_5
    iget-object v4, v14, Lcom/tencent/bugly/proguard/bd;->d:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object v4

    .line 232
    iget-boolean v4, v4, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_2

    const-string v5, "\n"

    if-nez v4, :cond_6

    :try_start_1
    iget-object v4, v14, Lcom/tencent/bugly/proguard/bd;->d:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/ac;->b()Z

    move-result v4

    if-eqz v4, :cond_6

    const-string v1, "crash report was closed by remote , will not upload to Bugly , print local for helpful!"

    .line 233
    new-array v2, v12, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v1, "NATIVE_CRASH"

    .line 235
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->a()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    move-object/from16 p1, v1

    move-object/from16 p2, v2

    move-object/from16 p3, v19

    move-object/from16 p4, v0

    move-object/from16 p5, v3

    move-object/from16 p6, v4

    invoke-static/range {p1 .. p6}, Lcom/tencent/bugly/proguard/as;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;)V

    .line 237
    invoke-static/range {p10 .. p10}, Lcom/tencent/bugly/proguard/ap;->c(Ljava/lang/String;)V

    return-void

    :cond_6
    if-lez p11, :cond_7

    const-string v4, "KERNEL"

    move-object/from16 v22, v4

    goto :goto_5

    :cond_7
    move-object/from16 v22, v6

    :goto_5
    const-string v4, "UNKNOWN"

    if-gtz p11, :cond_9

    if-lez v1, :cond_8

    .line 5298
    invoke-static/range {p13 .. p13}, Lcom/tencent/bugly/proguard/z;->a(I)Ljava/lang/String;

    move-result-object v4

    .line 5300
    :cond_8
    invoke-static/range {p13 .. p13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_9

    .line 5301
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_2

    move-object/from16 v23, v1

    goto :goto_6

    :cond_9
    move-object/from16 v23, v4

    :goto_6
    const/4 v15, 0x0

    const/16 v16, 0x0

    const/16 v17, 0x1

    move-object/from16 v1, p0

    move-object/from16 v2, v19

    move-object v3, v0

    move-object v6, v5

    move-wide v4, v7

    move-object v8, v6

    move-object v6, v11

    move-object/from16 v7, p8

    move-object/from16 v24, v8

    move-object v8, v10

    move-object/from16 v9, v22

    move-object/from16 v25, v10

    move-object/from16 v10, v23

    move-object/from16 v26, v11

    move-object/from16 v11, p10

    move-object/from16 v12, v20

    move-object/from16 v13, v21

    move-object/from16 v14, p17

    .line 243
    :try_start_2
    invoke-virtual/range {v1 .. v18}, Lcom/tencent/bugly/proguard/bd;->packageCrashDatas(Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BLjava/util/Map;ZZ)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    move-result-object v1

    if-nez v1, :cond_a

    const-string v0, "pkg crash datas fail!"

    const/4 v2, 0x0

    .line 247
    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_a
    const/4 v2, 0x0

    const-string v3, "NATIVE_CRASH"

    .line 251
    invoke-static {}, Lcom/tencent/bugly/proguard/ap;->a()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v6, v26

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v6, v24

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v7, p8

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v6, v25

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    move-object/from16 p1, v3

    move-object/from16 p2, v4

    move-object/from16 p3, v19

    move-object/from16 p4, v0

    move-object/from16 p5, v5

    move-object/from16 p6, v1

    invoke-static/range {p1 .. p6}, Lcom/tencent/bugly/proguard/as;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;)V
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_1

    move-object/from16 v3, p0

    .line 5385
    :try_start_3
    iget-object v0, v3, Lcom/tencent/bugly/proguard/bd;->b:Lcom/tencent/bugly/proguard/as;

    if-nez v0, :cond_b

    const-string v0, "crashHandler is null. Won\'t upload native crash."

    .line 5386
    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 5389
    :cond_b
    iget-object v0, v3, Lcom/tencent/bugly/proguard/bd;->b:Lcom/tencent/bugly/proguard/as;

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v4}, Lcom/tencent/bugly/proguard/as;->a(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)Z

    move-result v0

    if-nez v0, :cond_c

    const/4 v2, 0x1

    :cond_c
    const/4 v0, 0x0

    .line 5391
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object v5

    if-eqz v5, :cond_d

    .line 5393
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getDumpFilePath()Ljava/lang/String;

    move-result-object v0

    .line 5395
    :cond_d
    invoke-static {v4, v0}, Lcom/tencent/bugly/proguard/be;->a(ZLjava/lang/String;)V

    if-eqz v2, :cond_e

    .line 5397
    iget-object v0, v3, Lcom/tencent/bugly/proguard/bd;->b:Lcom/tencent/bugly/proguard/as;

    invoke-virtual {v0, v1, v4}, Lcom/tencent/bugly/proguard/as;->b(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;Z)V

    .line 5399
    :cond_e
    iget-object v0, v3, Lcom/tencent/bugly/proguard/bd;->b:Lcom/tencent/bugly/proguard/as;

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/proguard/as;->a(Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;)V

    .line 5401
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    .line 6229
    iget-object v0, v0, Lcom/tencent/bugly/proguard/at;->t:Lcom/tencent/bugly/proguard/av;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/av;->b()V
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_0

    return-void

    :catch_0
    move-exception v0

    goto :goto_7

    :catch_1
    move-exception v0

    move-object/from16 v3, p0

    goto :goto_7

    :catch_2
    move-exception v0

    move-object v3, v14

    .line 255
    :goto_7
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_f

    .line 256
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_f
    return-void
.end method

.method public final packageCrashDatas(Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BLjava/util/Map;ZZ)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "J",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "[B",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;ZZ)",
            "Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;"
        }
    .end annotation

    move-object v0, p0

    move-object v1, p1

    move-object/from16 v2, p10

    move-object/from16 v3, p14

    .line 62
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/at;->i()Z

    move-result v4

    const/4 v5, 0x0

    if-eqz v4, :cond_0

    .line 64
    new-array v6, v5, [Ljava/lang/Object;

    const-string v7, "This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful!"

    invoke-static {v7, v6}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 67
    :cond_0
    new-instance v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    invoke-direct {v6}, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;-><init>()V

    const/4 v7, 0x1

    .line 69
    iput v7, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->b:I

    .line 70
    iget-object v8, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v8}, Lcom/tencent/bugly/proguard/aa;->g()Ljava/lang/String;

    move-result-object v8

    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->e:Ljava/lang/String;

    .line 71
    iget-object v8, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v8, v8, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->f:Ljava/lang/String;

    .line 72
    iget-object v8, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v8}, Lcom/tencent/bugly/proguard/aa;->q()Ljava/lang/String;

    move-result-object v8

    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->g:Ljava/lang/String;

    .line 73
    iget-object v8, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v8}, Lcom/tencent/bugly/proguard/aa;->f()Ljava/lang/String;

    move-result-object v8

    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->m:Ljava/lang/String;

    move-object/from16 v8, p5

    .line 74
    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->n:Ljava/lang/String;

    const-string v8, ""

    if-eqz v4, :cond_1

    const-string v4, " This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful![Bugly]"

    goto :goto_0

    :cond_1
    move-object v4, v8

    .line 75
    :goto_0
    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->o:Ljava/lang/String;

    move-object/from16 v4, p6

    .line 78
    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->p:Ljava/lang/String;

    if-nez p7, :cond_2

    goto :goto_1

    :cond_2
    move-object/from16 v8, p7

    .line 79
    :goto_1
    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    move-wide v8, p3

    .line 80
    iput-wide v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->r:J

    .line 81
    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4}, Lcom/tencent/bugly/proguard/ap;->c([B)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->u:Ljava/lang/String;

    .line 82
    iput-object v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->A:Ljava/lang/String;

    move-object v4, p2

    .line 83
    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->B:Ljava/lang/String;

    .line 84
    iget-object v4, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/aa;->s()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->L:Ljava/lang/String;

    .line 85
    iget-object v4, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/aa;->p()Ljava/util/Map;

    move-result-object v4

    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->h:Ljava/util/Map;

    .line 86
    iget-object v4, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/aa;->A()Ljava/util/Map;

    move-result-object v4

    iput-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->i:Ljava/util/Map;

    .line 87
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->v:Ljava/lang/String;

    .line 89
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-result-object v4

    const/4 v8, 0x0

    if-eqz v4, :cond_3

    .line 91
    invoke-static {}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getDumpFilePath()Ljava/lang/String;

    move-result-object v4

    goto :goto_2

    :cond_3
    move-object v4, v8

    .line 93
    :goto_2
    invoke-static {v4, v2}, Lcom/tencent/bugly/proguard/be;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 94
    invoke-static {v2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v9

    if-nez v9, :cond_4

    .line 95
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->Z:Ljava/lang/String;

    .line 97
    :cond_4
    invoke-static {v4}, Lcom/tencent/bugly/proguard/be;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->aa:Ljava/lang/String;

    .line 98
    sget v2, Lcom/tencent/bugly/proguard/at;->f:I

    sget-object v4, Lcom/tencent/bugly/proguard/at;->k:Ljava/lang/String;

    sget-boolean v9, Lcom/tencent/bugly/proguard/at;->p:Z

    move-object/from16 v10, p11

    invoke-static {v10, v2, v4, v9}, Lcom/tencent/bugly/proguard/be;->a(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    .line 100
    sget v2, Lcom/tencent/bugly/proguard/at;->f:I

    move-object/from16 v4, p12

    invoke-static {v4, v2, v8, v7}, Lcom/tencent/bugly/proguard/be;->a(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->x:Ljava/lang/String;

    move-object/from16 v2, p9

    .line 102
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->N:Ljava/lang/String;

    move-object/from16 v2, p8

    .line 103
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->O:Ljava/lang/String;

    move-object/from16 v2, p13

    .line 104
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->P:Ljava/lang/String;

    .line 106
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/aa;->k()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->F:J

    .line 107
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/aa;->j()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->G:J

    .line 108
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/aa;->l()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->H:J

    .line 109
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tencent/bugly/proguard/ab;->b(Landroid/content/Context;)J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->I:J

    .line 110
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->g()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->J:J

    .line 111
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->h()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->K:J

    if-eqz p16, :cond_7

    .line 114
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->j()J

    move-result-wide v2

    iput-wide v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->C:J

    .line 115
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->f()J

    move-result-wide v2

    iput-wide v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->D:J

    .line 116
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->l()J

    move-result-wide v2

    iput-wide v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->E:J

    .line 117
    invoke-static {}, Lcom/tencent/bugly/proguard/ao;->a()[B

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->y:[B

    .line 118
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    iget-wide v2, v2, Lcom/tencent/bugly/proguard/aa;->a:J

    iput-wide v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->Q:J

    .line 119
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/aa;->a()Z

    move-result v2

    iput-boolean v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->R:Z

    .line 120
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    .line 1393
    iget-boolean v2, v2, Lcom/tencent/bugly/proguard/aa;->Q:Z

    .line 120
    sget v3, Lcom/tencent/bugly/proguard/at;->h:I

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/ap;->a(ZI)Ljava/util/Map;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    .line 123
    iget-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    const-string v3, "java:\n"

    invoke-virtual {v2, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-lez v2, :cond_5

    add-int/lit8 v2, v2, 0x6

    .line 126
    iget-object v3, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    if-ge v2, v3, :cond_5

    .line 127
    iget-object v3, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    .line 128
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    sub-int/2addr v4, v7

    .line 127
    invoke-virtual {v3, v2, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 130
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    if-lez v4, :cond_5

    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    iget-object v7, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->B:Ljava/lang/String;

    .line 131
    invoke-interface {v4, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 132
    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    iget-object v7, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->B:Ljava/lang/String;

    .line 133
    invoke-interface {v4, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 135
    invoke-virtual {v4, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_5

    .line 137
    invoke-virtual {v4, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 139
    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    iget-object v7, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->B:Ljava/lang/String;

    invoke-interface {v4, v7, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 140
    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    .line 141
    invoke-virtual {v4, v5, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    .line 142
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->q:Ljava/lang/String;

    :cond_5
    if-nez v1, :cond_6

    .line 148
    iget-object v1, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    iget-object v1, v1, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    iput-object v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->A:Ljava/lang/String;

    .line 151
    :cond_6
    iget-object v1, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->z()I

    move-result v1

    iput v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->U:I

    .line 152
    iget-object v1, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    .line 1996
    iget v1, v1, Lcom/tencent/bugly/proguard/aa;->x:I

    .line 152
    iput v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->V:I

    .line 153
    iget-object v1, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->t()Ljava/util/Map;

    move-result-object v1

    iput-object v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->W:Ljava/util/Map;

    .line 154
    iget-object v1, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->y()Ljava/util/Map;

    move-result-object v1

    iput-object v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->X:Ljava/util/Map;

    goto :goto_3

    :cond_7
    const-wide/16 v4, -0x1

    .line 157
    iput-wide v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->C:J

    .line 158
    iput-wide v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->D:J

    .line 159
    iput-wide v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->E:J

    .line 160
    iget-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    if-nez v2, :cond_8

    const-string v2, "This crash occurred at last process! Log is miss, when get an terrible ABRT Native Exception etc."

    .line 161
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    .line 164
    :cond_8
    iput-wide v4, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->Q:J

    const/4 v2, -0x1

    .line 165
    iput v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->U:I

    .line 166
    iput v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->V:I

    move-object/from16 v2, p15

    .line 167
    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->W:Ljava/util/Map;

    .line 169
    iget-object v2, v0, Lcom/tencent/bugly/proguard/bd;->c:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/aa;->y()Ljava/util/Map;

    move-result-object v2

    iput-object v2, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->X:Ljava/util/Map;

    .line 170
    iput-object v8, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    if-nez v1, :cond_9

    const-string v1, "unknown(record)"

    .line 172
    iput-object v1, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->A:Ljava/lang/String;

    :cond_9
    if-eqz v3, :cond_a

    .line 175
    iput-object v3, v6, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->y:[B

    :cond_a
    :goto_3
    return-object v6
.end method
