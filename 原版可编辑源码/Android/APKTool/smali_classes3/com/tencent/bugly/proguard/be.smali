.class public final Lcom/tencent/bugly/proguard/be;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field private static a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 42
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;
    .locals 6

    const/4 v0, 0x0

    const/4 v1, 0x0

    if-eqz p0, :cond_a

    if-eqz p1, :cond_a

    if-nez p2, :cond_0

    goto/16 :goto_b

    .line 248
    :cond_0
    new-instance v2, Ljava/io/File;

    const-string v3, "rqd_record.eup"

    invoke-direct {v2, p1, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_9

    invoke-virtual {v2}, Ljava/io/File;->canRead()Z

    move-result p1

    if-nez p1, :cond_1

    goto/16 :goto_a

    .line 255
    :cond_1
    :try_start_0
    new-instance p1, Ljava/io/BufferedInputStream;

    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {p1, v3}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 256
    :try_start_1
    invoke-static {p1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/io/BufferedInputStream;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    if-eqz v2, :cond_6

    const-string v4, "NATIVE_RQD_REPORT"

    .line 257
    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    goto :goto_4

    .line 262
    :cond_2
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    :goto_0
    move-object v4, v1

    .line 265
    :goto_1
    invoke-static {p1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/io/BufferedInputStream;)Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_4

    if-nez v4, :cond_3

    move-object v4, v5

    goto :goto_1

    .line 269
    :cond_3
    invoke-interface {v2, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_4
    if-eqz v4, :cond_5

    const-string p0, "record not pair! drop! %s"

    .line 274
    new-array p2, v3, [Ljava/lang/Object;

    aput-object v4, p2, v0

    invoke-static {p0, p2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 285
    :try_start_2
    invoke-virtual {p1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 287
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_2
    return-object v1

    .line 278
    :cond_5
    :try_start_3
    invoke-static {p0, v2, p2}, Lcom/tencent/bugly/proguard/be;->a(Landroid/content/Context;Ljava/util/Map;Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    move-result-object p0
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 285
    :try_start_4
    invoke-virtual {p1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_3

    :catch_1
    move-exception p1

    .line 287
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_3
    return-object p0

    :cond_6
    :goto_4
    :try_start_5
    const-string p0, "record read fail! %s"

    .line 258
    new-array p2, v3, [Ljava/lang/Object;

    aput-object v2, p2, v0

    invoke-static {p0, p2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 285
    :try_start_6
    invoke-virtual {p1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_5

    :catch_2
    move-exception p0

    .line 287
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_5
    return-object v1

    :catch_3
    move-exception p0

    goto :goto_6

    :catchall_0
    move-exception p0

    move-object p1, v1

    goto :goto_8

    :catch_4
    move-exception p0

    move-object p1, v1

    .line 280
    :goto_6
    :try_start_7
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    if-eqz p1, :cond_7

    .line 285
    :try_start_8
    invoke-virtual {p1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_5

    goto :goto_7

    :catch_5
    move-exception p0

    .line 287
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_7
    :goto_7
    return-object v1

    :catchall_1
    move-exception p0

    :goto_8
    if-eqz p1, :cond_8

    .line 285
    :try_start_9
    invoke-virtual {p1}, Ljava/io/BufferedInputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_6

    goto :goto_9

    :catch_6
    move-exception p1

    .line 287
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    .line 290
    :cond_8
    :goto_9
    throw p0

    :cond_9
    :goto_a
    return-object v1

    .line 244
    :cond_a
    :goto_b
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "get eup record file args error"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v1
.end method

.method private static a(Landroid/content/Context;Ljava/util/Map;Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;
    .locals 25
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;",
            ")",
            "Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;"
        }
    .end annotation

    move-object/from16 v0, p1

    const-string v1, "unknown"

    .line 1553
    invoke-static/range {p0 .. p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v2

    const-string v3, "intStateStr"

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-nez v2, :cond_0

    .line 1555
    new-array v2, v5, [Ljava/lang/Object;

    const-string v6, "abnormal com info not created"

    invoke-static {v6, v2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    :goto_0
    const/4 v2, 0x0

    goto :goto_2

    .line 1559
    :cond_0
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_2

    .line 1560
    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-gtz v2, :cond_1

    goto :goto_1

    :cond_1
    const/4 v2, 0x1

    goto :goto_2

    .line 1561
    :cond_2
    :goto_1
    new-array v2, v5, [Ljava/lang/Object;

    const-string v6, "no intStateStr"

    invoke-static {v6, v2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_0

    :goto_2
    const/4 v6, 0x0

    if-nez v2, :cond_3

    return-object v6

    .line 103
    :cond_3
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Lcom/tencent/bugly/proguard/be;->d(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    if-nez v2, :cond_4

    .line 105
    new-array v1, v4, [Ljava/lang/Object;

    invoke-interface/range {p1 .. p1}, Ljava/util/Map;->size()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v1, v5

    const-string v0, "parse intSateMap fail"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v6

    :cond_4
    :try_start_0
    const-string v3, "sino"

    .line 111
    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    const-string v3, "sud"

    .line 112
    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    const-string v3, "soVersion"

    .line 114
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    move-object/from16 v20, v3

    check-cast v20, Ljava/lang/String;

    .line 115
    invoke-static/range {v20 .. v20}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_5

    const-string v0, "error format at version"

    .line 116
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v6

    :cond_5
    const-string v3, "codeMsg"

    .line 120
    invoke-static {v0, v3, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v7, "signalName"

    .line 121
    invoke-static {v0, v7, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    const-string v8, "errnoMsg"

    .line 123
    invoke-interface {v0, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    const-string v8, "stack"

    .line 1573
    invoke-static {v0, v8, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    const-string v9, "jstack"

    .line 1574
    invoke-interface {v0, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    if-eqz v9, :cond_6

    .line 1576
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "java:\n"

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    :cond_6
    const-string v9, "sico"

    .line 130
    invoke-interface {v2, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/Integer;
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    const-string v10, ")"

    const-string v11, "("

    if-eqz v9, :cond_7

    .line 133
    :try_start_1
    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    if-lez v9, :cond_7

    .line 135
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v7, "KERNEL"

    move-object v12, v3

    move-object v15, v7

    goto :goto_3

    :cond_7
    move-object v15, v3

    move-object v12, v7

    :goto_3
    const-string v3, "nativeLog"

    .line 1587
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    if-eqz v3, :cond_8

    .line 1588
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_8

    const-string v7, "BuglyNativeLog.txt"

    .line 1589
    invoke-static {v3, v7}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v3

    move-object/from16 v21, v3

    goto :goto_4

    :cond_8
    move-object/from16 v21, v6

    :goto_4
    const-string v3, "sendingProcess"

    .line 1601
    invoke-static {v0, v3, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v7, "spd"

    .line 1602
    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    if-eqz v7, :cond_9

    .line 1604
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :cond_9
    move-object/from16 v16, v3

    const-string v3, "threadName"

    .line 1616
    invoke-static {v0, v3, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v7, "et"

    .line 1617
    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    if-eqz v7, :cond_a

    .line 1619
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :cond_a
    move-object v9, v3

    const-string v3, "processName"

    .line 1631
    invoke-static {v0, v3, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v7, "ep"

    .line 1632
    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    if-eqz v7, :cond_b

    .line 1634
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 149
    :cond_b
    invoke-static/range {p1 .. p1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v22

    const-string v7, "ets"

    .line 150
    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    int-to-long v10, v7

    const-string v7, "etms"

    .line 151
    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-long v13, v2

    const-wide/16 v17, 0x3e8

    mul-long v10, v10, v17

    .line 152
    div-long v13, v13, v17

    add-long/2addr v10, v13

    const-string v2, "errorAddr"

    .line 154
    invoke-static {v0, v2, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v13, v2

    check-cast v13, Ljava/lang/String;

    .line 155
    invoke-static {v8}, Lcom/tencent/bugly/proguard/be;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v2, "sysLogPath"

    .line 157
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object/from16 v18, v2

    check-cast v18, Ljava/lang/String;

    const-string v2, "jniLogPath"

    .line 158
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object/from16 v19, v2

    check-cast v19, Ljava/lang/String;

    const-string v2, "tombPath"

    .line 160
    invoke-static {v0, v2, v1}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object/from16 v17, v1

    check-cast v17, Ljava/lang/String;

    const/16 v23, 0x0

    const/16 v24, 0x0

    move-object/from16 v7, p2

    move-object v8, v3

    .line 161
    invoke-interface/range {v7 .. v24}, Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;->packageCrashDatas(Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BLjava/util/Map;ZZ)Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;

    move-result-object v1

    if-eqz v1, :cond_d

    const-string v2, "userId"

    .line 165
    iget-object v3, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->m:Ljava/lang/String;

    invoke-static {v0, v2, v3}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->m:Ljava/lang/String;

    const-string v2, "[Native record info] userId: %s"

    .line 166
    new-array v3, v4, [Ljava/lang/Object;

    iget-object v7, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->m:Ljava/lang/String;

    aput-object v7, v3, v5

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v2, "sysLog"

    .line 168
    iget-object v3, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    invoke-static {v0, v2, v3}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    const-string v2, "appVersion"

    .line 169
    iget-object v3, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->w:Ljava/lang/String;

    invoke-static {v0, v2, v3}, Lcom/tencent/bugly/proguard/be;->a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->f:Ljava/lang/String;

    const-string v2, "[Native record info] appVersion: %s"

    .line 170
    new-array v3, v4, [Ljava/lang/Object;

    iget-object v7, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->f:Ljava/lang/String;

    aput-object v7, v3, v5

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v2, "isAppForeground"

    .line 1667
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_c

    const-string v3, "[Native record info] isAppForeground: %s"

    .line 1670
    new-array v7, v4, [Ljava/lang/Object;

    aput-object v2, v7, v5

    invoke-static {v3, v7}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v3, "true"

    .line 1671
    invoke-virtual {v2, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    goto :goto_5

    :cond_c
    const/4 v2, 0x0

    .line 173
    :goto_5
    iput-boolean v2, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->R:Z

    .line 175
    invoke-static/range {p1 .. p1}, Lcom/tencent/bugly/proguard/be;->b(Ljava/util/Map;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->Q:J

    .line 177
    iput-object v6, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->z:Ljava/util/Map;

    .line 178
    iput-boolean v4, v1, Lcom/tencent/bugly/crashreport/crash/CrashDetailBean;->k:Z
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0

    :cond_d
    return-object v1

    :catch_0
    move-exception v0

    .line 182
    new-array v1, v5, [Ljava/lang/Object;

    const-string v2, "error format"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 183
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v6
.end method

.method private static a(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<KeyT:",
            "Ljava/lang/Object;",
            "ValueT:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/Map<",
            "TKeyT;TValueT;>;TKeyT;TValueT;)TValueT;"
        }
    .end annotation

    .line 200
    :try_start_0
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    return-object p0

    :catch_0
    move-exception p0

    .line 205
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_0
    return-object p2
.end method

.method private static a(Ljava/io/BufferedInputStream;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 219
    :try_start_0
    new-instance v1, Ljava/io/ByteArrayOutputStream;

    const/16 v2, 0x400

    invoke-direct {v1, v2}, Ljava/io/ByteArrayOutputStream;-><init>(I)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 221
    :goto_0
    :try_start_1
    invoke-virtual {p0}, Ljava/io/BufferedInputStream;->read()I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_1

    if-nez v2, :cond_0

    .line 223
    new-instance p0, Ljava/lang/String;

    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    const-string v3, "UTf-8"

    invoke-direct {p0, v2, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 231
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    return-object p0

    .line 225
    :cond_0
    :try_start_2
    invoke-virtual {v1, v2}, Ljava/io/ByteArrayOutputStream;->write(I)V
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catch_0
    move-exception p0

    goto :goto_1

    :catchall_0
    move-exception p0

    move-object v1, v0

    goto :goto_2

    :catch_1
    move-exception p0

    move-object v1, v0

    .line 228
    :goto_1
    :try_start_3
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_2

    .line 231
    :cond_1
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    :cond_2
    return-object v0

    :catchall_1
    move-exception p0

    :goto_2
    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    .line 233
    :cond_3
    throw p0
.end method

.method protected static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const-string v0, "\n"

    .line 79
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 80
    array-length v2, v1

    if-nez v2, :cond_1

    goto :goto_1

    .line 84
    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 85
    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_3

    aget-object v4, v1, v3

    const-string v5, "java.lang.Thread.getStackTrace("

    .line 86
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 87
    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 90
    :cond_3
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_4
    :goto_1
    return-object p0
.end method

.method public static a(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;
    .locals 6

    const/4 v0, 0x0

    if-eqz p0, :cond_9

    if-gtz p1, :cond_0

    goto/16 :goto_6

    .line 490
    :cond_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 491
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_9

    invoke-virtual {v1}, Ljava/io/File;->canRead()Z

    move-result v2

    if-nez v2, :cond_1

    goto/16 :goto_6

    :cond_1
    const/4 v2, 0x2

    .line 494
    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const/4 v3, 0x1

    .line 495
    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v3

    const-string v3, "Read system log from native record file(length: %s bytes): %s"

    .line 494
    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 496
    sget-object v2, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 497
    new-array v2, v4, [Ljava/lang/Object;

    const-string v3, "Add this record file to list for cleaning lastly."

    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-nez p2, :cond_2

    .line 500
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p2, p1, p3}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/io/File;IZ)Ljava/lang/String;

    move-result-object p0

    goto/16 :goto_3

    .line 503
    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 505
    :try_start_0
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    new-instance v5, Ljava/io/FileInputStream;

    invoke-direct {v5, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    const-string v1, "utf-8"

    invoke-direct {v3, v5, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 508
    :cond_3
    :goto_0
    :try_start_1
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 510
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "[ ]*:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v1

    .line 511
    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/regex/Matcher;->find()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 512
    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    if-lez p1, :cond_3

    .line 514
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    if-le v0, p1, :cond_3

    if-eqz p3, :cond_5

    .line 516
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    invoke-virtual {p0, p1, p2}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 519
    :cond_5
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    sub-int/2addr v0, p1

    invoke-virtual {p0, v4, v0}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 523
    :cond_6
    :goto_1
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 531
    :try_start_2
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 534
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    goto :goto_3

    :catchall_0
    move-exception p0

    goto :goto_4

    :catch_1
    move-exception p1

    move-object v0, v2

    goto :goto_2

    :catchall_1
    move-exception p0

    move-object v2, v0

    goto :goto_4

    :catch_2
    move-exception p1

    .line 526
    :goto_2
    :try_start_3
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 527
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "\n[error:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_7

    .line 531
    :try_start_4
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :cond_7
    :goto_3
    return-object p0

    :goto_4
    if-eqz v2, :cond_8

    :try_start_5
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_5

    :catch_3
    move-exception p1

    .line 534
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 537
    :cond_8
    :goto_5
    throw p0

    :cond_9
    :goto_6
    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    if-eqz p0, :cond_4

    if-nez p1, :cond_0

    goto :goto_0

    .line 386
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 387
    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/be;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 389
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "Register infos:\n"

    .line 390
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 391
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 393
    :cond_1
    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/be;->c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 395
    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_3

    .line 396
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result p1

    if-lez p1, :cond_2

    const-string p1, "\n"

    .line 397
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    const-string p1, "System SO infos:\n"

    .line 399
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 400
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 403
    :cond_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Ljava/util/Map;)Ljava/util/Map;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, "key-value"

    .line 645
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    if-eqz p0, :cond_2

    .line 647
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "\n"

    .line 649
    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 650
    array-length v1, p0

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, p0, v3

    const-string v5, "="

    .line 651
    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 652
    array-length v5, v4

    const/4 v6, 0x2

    if-ne v5, v6, :cond_0

    .line 653
    aget-object v5, v4, v2

    const/4 v6, 0x1

    aget-object v4, v4, v6

    invoke-interface {v0, v5, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-object v0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(ZLjava/lang/String;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 458
    sget-object v0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    new-instance v1, Ljava/io/File;

    const-string v2, "rqd_record.eup"

    invoke-direct {v1, p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 459
    sget-object v0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    new-instance v1, Ljava/io/File;

    const-string v2, "reg_record.txt"

    invoke-direct {v1, p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 460
    sget-object v0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    new-instance v1, Ljava/io/File;

    const-string v2, "map_record.txt"

    invoke-direct {v1, p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 461
    sget-object v0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    new-instance v1, Ljava/io/File;

    const-string v2, "backup_record.txt"

    invoke-direct {v1, p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz p0, :cond_0

    .line 464
    invoke-static {p1}, Lcom/tencent/bugly/proguard/be;->c(Ljava/lang/String;)V

    .line 467
    :cond_0
    sget-object p0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    if-eqz p0, :cond_2

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0

    if-lez p0, :cond_2

    .line 468
    sget-object p0, Lcom/tencent/bugly/proguard/be;->a:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/io/File;

    .line 469
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->canWrite()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 470
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    const/4 v0, 0x1

    .line 471
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-virtual {p1}, Ljava/io/File;->getAbsoluteFile()Ljava/io/File;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "Delete record file %s"

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    return-void
.end method

.method private static b(Ljava/util/Map;)J
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)J"
        }
    .end annotation

    const-string v0, "launchTime"

    .line 682
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    .line 684
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "[Native record info] launchTime: %s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 686
    :try_start_0
    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p0

    .line 688
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 689
    invoke-virtual {p0}, Ljava/lang/NumberFormatException;->printStackTrace()V

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method public static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 416
    :cond_0
    new-instance v1, Ljava/io/File;

    const-string v2, "backup_record.txt"

    invoke-direct {v1, p0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 418
    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    return-object v0
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    const-string v0, "reg_record.txt"

    .line 294
    invoke-static {p0, v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/io/BufferedReader;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 299
    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 300
    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 301
    invoke-virtual {v2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_3

    :cond_1
    const-string p1, "                "

    const/16 v2, 0x12

    const/4 v3, 0x0

    const/4 v2, 0x0

    const/16 v4, 0x12

    const/4 v5, 0x0

    .line 308
    :goto_0
    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v6
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v7, "\n"

    if-eqz v6, :cond_5

    .line 309
    :try_start_1
    rem-int/lit8 v8, v2, 0x4

    if-nez v8, :cond_3

    if-lez v2, :cond_2

    .line 311
    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    const-string v5, "  "

    .line 313
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 315
    :cond_3
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v7

    const/16 v8, 0x10

    if-le v7, v8, :cond_4

    const/16 v4, 0x1c

    :cond_4
    sub-int v5, v4, v5

    .line 318
    invoke-virtual {p1, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 320
    :goto_1
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v5

    .line 321
    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 324
    :cond_5
    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 325
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p0, :cond_6

    .line 333
    :try_start_2
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 336
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_6
    :goto_2
    return-object p1

    :cond_7
    :goto_3
    if-eqz p0, :cond_8

    .line 333
    :try_start_3
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_4

    :catch_1
    move-exception p0

    .line 336
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_8
    :goto_4
    return-object v0

    :catchall_0
    move-exception p1

    goto :goto_6

    :catch_2
    move-exception p1

    .line 328
    :try_start_4
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz p0, :cond_9

    .line 333
    :try_start_5
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_5

    :catch_3
    move-exception p0

    .line 336
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_9
    :goto_5
    return-object v0

    :goto_6
    if-eqz p0, :cond_a

    .line 333
    :try_start_6
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    goto :goto_7

    :catch_4
    move-exception p0

    .line 336
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 339
    :cond_a
    :goto_7
    throw p1
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, "map_record.txt"

    .line 343
    invoke-static {p0, v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/io/BufferedReader;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 348
    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 349
    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 350
    invoke-virtual {v2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_2

    .line 353
    :cond_1
    :goto_0
    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    const-string v2, "  "

    .line 354
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 355
    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    .line 356
    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 358
    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_3

    .line 366
    :try_start_1
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 369
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_3
    :goto_1
    return-object p1

    :cond_4
    :goto_2
    if-eqz p0, :cond_5

    .line 366
    :try_start_2
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_3

    :catch_1
    move-exception p0

    .line 369
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_5
    :goto_3
    return-object v0

    :catchall_0
    move-exception p1

    goto :goto_5

    :catch_2
    move-exception p1

    .line 361
    :try_start_3
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz p0, :cond_6

    .line 366
    :try_start_4
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_4

    :catch_3
    move-exception p0

    .line 369
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_6
    :goto_4
    return-object v0

    :goto_5
    if-eqz p0, :cond_7

    .line 366
    :try_start_5
    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_6

    :catch_4
    move-exception p0

    .line 369
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 372
    :cond_7
    :goto_6
    throw p1
.end method

.method public static c(Ljava/lang/String;)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 433
    :cond_0
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 434
    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p0

    if-eqz p0, :cond_2

    .line 435
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 437
    array-length v0, p0

    const/4 v1, 0x0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_2

    aget-object v3, p0, v2

    .line 438
    invoke-virtual {v3}, Ljava/io/File;->canRead()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->canWrite()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v8, v4, v6

    if-nez v8, :cond_1

    .line 439
    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    const-string v4, "Delete empty record file %s"

    const/4 v5, 0x1

    .line 440
    new-array v5, v5, [Ljava/lang/Object;

    invoke-virtual {v3}, Ljava/io/File;->getAbsoluteFile()Ljava/io/File;

    move-result-object v3

    aput-object v3, v5, v1

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void

    :catch_0
    move-exception p0

    .line 446
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    return-void
.end method

.method private static d(Ljava/lang/String;)Ljava/util/Map;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    const/4 v2, 0x1

    .line 53
    :try_start_0
    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    const-string v4, ","

    .line 54
    invoke-virtual {p0, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 55
    array-length v5, v4

    const/4 v6, 0x0

    :goto_0
    if-ge v6, v5, :cond_2

    aget-object v7, v4, v6

    const-string v8, ":"

    .line 56
    invoke-virtual {v7, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    .line 57
    array-length v9, v8

    const/4 v10, 0x2

    if-eq v9, v10, :cond_1

    const-string v3, "error format at %s"

    .line 58
    new-array v4, v2, [Ljava/lang/Object;

    aput-object v7, v4, v1

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0

    .line 62
    :cond_1
    aget-object v7, v8, v2

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    .line 63
    aget-object v8, v8, v1

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {v3, v8, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_2
    return-object v3

    :catch_0
    move-exception v3

    .line 68
    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, v1

    const-string p0, "error format intStateStr %s"

    invoke-static {p0, v2}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 69
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method
