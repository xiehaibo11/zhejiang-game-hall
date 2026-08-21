.class public Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Lcom/tencent/bugly/proguard/q;


# static fields
.field static a:Ljava/lang/String; = null

.field private static b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler; = null

.field private static c:I = 0x1

.field private static n:Z = true


# instance fields
.field private final d:Landroid/content/Context;

.field private final e:Lcom/tencent/bugly/proguard/aa;

.field private final f:Lcom/tencent/bugly/proguard/ak;

.field private g:Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;

.field private final h:Z

.field private i:Z

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Lcom/tencent/bugly/proguard/as;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/as;Lcom/tencent/bugly/proguard/ak;ZLjava/lang/String;)V
    .locals 2
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "SdCardPath"
        }
    .end annotation

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 52
    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    .line 53
    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    .line 55
    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    .line 57
    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->l:Z

    .line 92
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->a(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->d:Landroid/content/Context;

    .line 93
    sget-object v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 96
    :try_start_0
    invoke-static {p6}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p6, "bugly"

    .line 99
    invoke-virtual {p1, p6, v0}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object p6

    invoke-virtual {p6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p6
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 102
    :catch_0
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p6

    iget-object p6, p6, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    .line 103
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "/data/data/"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p6, "/app_bugly"

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p6

    .line 105
    :cond_0
    :goto_0
    sput-object p6, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    .line 107
    :cond_1
    iput-object p3, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->m:Lcom/tencent/bugly/proguard/as;

    .line 108
    iput-object p2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    .line 109
    iput-object p4, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->f:Lcom/tencent/bugly/proguard/ak;

    .line 110
    iput-boolean p5, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->h:Z

    .line 111
    new-instance p4, Lcom/tencent/bugly/proguard/bd;

    .line 112
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object p5

    invoke-direct {p4, p1, p2, p3, p5}, Lcom/tencent/bugly/proguard/bd;-><init>(Landroid/content/Context;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/as;Lcom/tencent/bugly/proguard/ac;)V

    iput-object p4, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->g:Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;

    return-void
.end method

.method static synthetic a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Landroid/content/Context;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->d:Landroid/content/Context;

    return-object p0
.end method

.method private declared-synchronized a(Z)V
    .locals 10

    monitor-enter p0

    .line 279
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const-string p1, "[Native] Native crash report has already registered."

    .line 280
    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 281
    monitor-exit p0

    return-void

    .line 284
    :cond_0
    :try_start_1
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v2, 0x1

    if-eqz v0, :cond_3

    .line 286
    :try_start_2
    sget-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    sget v3, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c:I

    invoke-virtual {p0, v0, p1, v3}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->regist(Ljava/lang/String;ZI)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_8

    const-string v0, "[Native] Native Crash Report enable."

    .line 288
    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 289
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iput-object p1, v0, Lcom/tencent/bugly/proguard/aa;->u:Ljava/lang/String;

    const-string p1, "-"

    .line 290
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->u:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 291
    sget-boolean v0, Lcom/tencent/bugly/proguard/at;->b:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 292
    iget-object p1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    const-string v3, "-"

    invoke-virtual {v0, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v3, v3, Lcom/tencent/bugly/proguard/aa;->u:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    :cond_1
    const-string p1, "comInfo.sdkVersion %s"

    .line 294
    new-array v0, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v3, v3, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    aput-object v3, v0, v1

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 295
    iput-boolean v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    .line 297
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getRunningCpuAbi()Ljava/lang/String;

    move-result-object p1

    .line 298
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 299
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v0, p1}, Lcom/tencent/bugly/proguard/aa;->e(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 301
    :cond_2
    monitor-exit p0

    return-void

    :catch_0
    :try_start_3
    const-string p1, "[Native] Failed to load Bugly SO file."

    .line 304
    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto/16 :goto_1

    .line 306
    :cond_3
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v0, :cond_8

    :try_start_4
    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v3, "registNativeExceptionHandler2"

    const/4 v4, 0x4

    .line 308
    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v1

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x2

    aput-object v6, v5, v7

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v8, 0x3

    aput-object v6, v5, v8

    new-array v4, v4, [Ljava/lang/Object;

    sget-object v6, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    aput-object v6, v4, v1

    .line 311
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->d()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v4, v2

    const/4 v6, 0x5

    if-eqz p1, :cond_4

    const/4 v9, 0x1

    goto :goto_0

    :cond_4
    const/4 v9, 0x5

    :goto_0
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v4, v7

    .line 312
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v4, v8

    .line 308
    invoke-static {v0, v3, v5, v4}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-nez v0, :cond_5

    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v3, "registNativeExceptionHandler"

    .line 314
    new-array v4, v8, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v1

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v2

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v7

    new-array v5, v8, [Ljava/lang/Object;

    sget-object v8, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    aput-object v8, v5, v1

    .line 317
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->d()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v5, v2

    .line 318
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->B()I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v5, v7

    .line 314
    invoke-static {v0, v3, v4, v5}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    :cond_5
    if-eqz v0, :cond_8

    .line 322
    iput-boolean v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    .line 323
    iget-object v3, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iput-object v0, v3, Lcom/tencent/bugly/proguard/aa;->u:Ljava/lang/String;

    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v3, "enableHandler"

    .line 324
    new-array v4, v2, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v1

    new-array v5, v2, [Ljava/lang/Object;

    sget-object v7, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v7, v5, v1

    invoke-static {v0, v3, v4, v5}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p1, :cond_6

    const/4 v6, 0x1

    :cond_6
    const-string p1, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v0, "setLogMode"

    .line 327
    new-array v3, v2, [Ljava/lang/Class;

    sget-object v4, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v4, v3, v1

    new-array v2, v2, [Ljava/lang/Object;

    .line 328
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v1

    .line 327
    invoke-static {p1, v0, v3, v2}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 330
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getRunningCpuAbi()Ljava/lang/String;

    move-result-object p1

    .line 331
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 332
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v0, p1}, Lcom/tencent/bugly/proguard/aa;->e(Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 334
    :cond_7
    monitor-exit p0

    return-void

    .line 340
    :catch_1
    :cond_8
    :goto_1
    :try_start_5
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    .line 341
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 342
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a()Z
    .locals 1

    .line 34
    sget-boolean v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->n:Z

    return v0
.end method

.method private a(ILjava/lang/String;)Z
    .locals 2

    .line 759
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 763
    :cond_0
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeInfo(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 768
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 769
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_1
    :cond_1
    return v1
.end method

.method static synthetic a(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0x3e7

    .line 34
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static a(Ljava/lang/String;Z)Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "[Native] Trying to load so: %s"

    .line 430
    new-array v3, v0, [Ljava/lang/Object;

    aput-object p0, v3, v1

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-eqz p1, :cond_0

    .line 432
    invoke-static {p0}, Ljava/lang/System;->load(Ljava/lang/String;)V

    goto :goto_0

    .line 434
    :cond_0
    invoke-static {p0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_1

    :goto_0
    :try_start_1
    const-string p1, "[Native] Successfully loaded SO: %s"

    .line 437
    new-array v2, v0, [Ljava/lang/Object;

    aput-object p0, v2, v1

    invoke-static {p1, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    const/4 v2, 0x1

    goto :goto_1

    :catch_1
    move-exception p1

    const/4 v2, 0x0

    .line 439
    :goto_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {p1, v3}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 440
    new-array p1, v0, [Ljava/lang/Object;

    aput-object p0, p1, v1

    const-string p0, "[Native] Failed to load so: %s"

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    move v0, v2

    :goto_2
    return v0
.end method

.method static synthetic b(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->g:Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;

    return-object p0
.end method

.method static synthetic b()Ljava/lang/String;
    .locals 1

    .line 34
    sget-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    return-object v0
.end method

.method private declared-synchronized b(Z)V
    .locals 0

    monitor-enter p0

    if-eqz p1, :cond_0

    .line 594
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->startNativeMonitor()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 596
    :cond_0
    :try_start_1
    invoke-direct {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 598
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic c(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)Lcom/tencent/bugly/proguard/as;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->m:Lcom/tencent/bugly/proguard/as;

    return-object p0
.end method

.method private declared-synchronized c()V
    .locals 6

    monitor-enter p0

    .line 449
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    const-string v0, "[Native] Native crash report has already unregistered."

    .line 450
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 451
    monitor-exit p0

    return-void

    .line 454
    :cond_0
    :try_start_1
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->unregist()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v0, "[Native] Successfully closed native crash report."

    .line 456
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 457
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 458
    monitor-exit p0

    return-void

    :catch_0
    :try_start_2
    const-string v0, "[Native] Failed to close native crash report."

    .line 461
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    :try_start_3
    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v2, "enableHandler"

    const/4 v3, 0x1

    .line 465
    new-array v4, v3, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v1

    new-array v3, v3, [Ljava/lang/Object;

    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    aput-object v5, v3, v1

    invoke-static {v0, v2, v4, v3}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 467
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    const-string v0, "[Native] Successfully closed native crash report."

    .line 468
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 469
    monitor-exit p0

    return-void

    :catch_1
    :try_start_4
    const-string v0, "[Native] Failed to close native crash report."

    .line 471
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 474
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    .line 475
    iput-boolean v1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 476
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized c(Z)V
    .locals 4

    monitor-enter p0

    .line 611
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->l:Z

    if-eq v0, p1, :cond_0

    const-string v0, "user change native %b"

    const/4 v1, 0x1

    .line 612
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 613
    iput-boolean p1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->l:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 615
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static declared-synchronized getDumpFilePath()Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    monitor-enter v0

    .line 143
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized getInstance()Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;
    .locals 2

    const-class v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    monitor-enter v0

    .line 139
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized getInstance(Landroid/content/Context;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/as;Lcom/tencent/bugly/proguard/ac;Lcom/tencent/bugly/proguard/ak;ZLjava/lang/String;)Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;
    .locals 8

    const-class p3, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    monitor-enter p3

    .line 131
    :try_start_0
    sget-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    if-nez v0, :cond_0

    .line 132
    new-instance v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    move-object v1, v0

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p4

    move v6, p5

    move-object v7, p6

    invoke-direct/range {v1 .. v7}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;-><init>(Landroid/content/Context;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/as;Lcom/tencent/bugly/proguard/ak;ZLjava/lang/String;)V

    sput-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    .line 135
    :cond_0
    sget-object p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p3

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit p3

    throw p0
.end method

.method private native getProperties(Ljava/lang/String;)Ljava/lang/String;
.end method

.method private native getSoCpuAbi()Ljava/lang/String;
.end method

.method public static isShouldHandleInJava()Z
    .locals 1

    .line 168
    sget-boolean v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->n:Z

    return v0
.end method

.method public static declared-synchronized setDumpFilePath(Ljava/lang/String;)V
    .locals 1

    const-class v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    monitor-enter v0

    .line 147
    :try_start_0
    sput-object p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 148
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static setShouldHandleInJava(Z)V
    .locals 2

    .line 156
    sput-boolean p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->n:Z

    .line 157
    sget-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    if-eqz v0, :cond_0

    const/16 v1, 0x3e7

    .line 158
    invoke-static {p0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, v1, p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public appendLogToNative(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 8

    .line 664
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-eqz p1, :cond_4

    if-eqz p2, :cond_4

    if-nez p3, :cond_1

    goto :goto_0

    .line 671
    :cond_1
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-eqz v0, :cond_2

    .line 672
    invoke-virtual {p0, p1, p2, p3}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->appendNativeLog(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_2
    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v2, "appendNativeLog"

    const/4 v3, 0x3

    .line 674
    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v1

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x2

    aput-object v5, v4, v7

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v1

    aput-object p2, v3, v6

    aput-object p3, v3, v7

    .line 675
    invoke-static {v0, v2, v4, v3}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-eqz p1, :cond_3

    .line 678
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :cond_3
    return v1

    :catch_0
    move-exception p1

    .line 683
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 684
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_1
    :cond_4
    :goto_0
    return v1
.end method

.method protected native appendNativeLog(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
.end method

.method protected native appendWholeNativeLog(Ljava/lang/String;)Z
.end method

.method public checkUploadRecordCrash()V
    .locals 2

    .line 391
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->f:Lcom/tencent/bugly/proguard/ak;

    new-instance v1, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;

    invoke-direct {v1, p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler$1;-><init>(Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;)V

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public disableCatchAnrTrace()V
    .locals 2

    .line 862
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-le v0, v1, :cond_0

    const/4 v0, 0x1

    .line 863
    sput v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c:I

    :cond_0
    return-void
.end method

.method public dumpAnrNativeStack()V
    .locals 2

    const/16 v0, 0x13

    const-string v1, "1"

    .line 504
    invoke-direct {p0, v0, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    return-void
.end method

.method public enableCatchAnrTrace()V
    .locals 2

    .line 856
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-le v0, v1, :cond_0

    .line 857
    sget v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c:I

    or-int/lit8 v0, v0, 0x2

    sput v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c:I

    :cond_0
    return-void
.end method

.method public filterSigabrtSysLog()Z
    .locals 2

    const/16 v0, 0x3e6

    const-string v1, "true"

    .line 781
    invoke-direct {p0, v0, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public getLogFromNative()Ljava/lang/String;
    .locals 3

    .line 696
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_0

    return-object v1

    .line 700
    :cond_0
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-eqz v0, :cond_1

    .line 701
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getNativeLog()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v2, "getNativeLog"

    .line 704
    invoke-static {v0, v2, v1, v1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 711
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 712
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_1
    :cond_2
    return-object v1
.end method

.method public getNativeExceptionHandler()Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;
    .locals 1

    .line 521
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->g:Lcom/tencent/bugly/crashreport/crash/jni/NativeExceptionHandler;

    return-object v0
.end method

.method protected native getNativeKeyValueList()Ljava/lang/String;
.end method

.method protected native getNativeLog()Ljava/lang/String;
.end method

.method public getRunningCpuAbi()Ljava/lang/String;
    .locals 2

    .line 266
    :try_start_0
    invoke-direct {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getSoCpuAbi()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    .line 268
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "get so cpu abi failed\uff0cplease upgrade bugly so version"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v0, ""

    return-object v0
.end method

.method public getSystemProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 875
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, "fail"

    return-object p1

    .line 876
    :cond_1
    :goto_0
    invoke-direct {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->getProperties(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public isEnableCatchAnrTrace()Z
    .locals 2

    .line 871
    sget v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c:I

    const/4 v1, 0x2

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public declared-synchronized isUserOpened()Z
    .locals 1

    monitor-enter p0

    .line 604
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->l:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized onStrategyChanged(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V
    .locals 4

    monitor-enter p0

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    .line 642
    :try_start_0
    iget-boolean v2, p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    iget-boolean v3, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    if-eq v2, v3, :cond_0

    const-string v2, "server native changed to %b"

    .line 643
    new-array v3, v0, [Ljava/lang/Object;

    iget-boolean p1, p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    aput-object p1, v3, v1

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 647
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object p1

    iget-boolean p1, p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->l:Z

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    .line 648
    :goto_0
    iget-boolean v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    if-eq p1, v2, :cond_2

    const-string v2, "native changed to %b"

    .line 649
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v0, v1

    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 650
    invoke-direct {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 653
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public putKeyValueToNative(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 7

    .line 726
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-eqz p1, :cond_4

    if-nez p2, :cond_1

    goto :goto_0

    .line 733
    :cond_1
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-eqz v0, :cond_2

    .line 734
    invoke-virtual {p0, p1, p2}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->putNativeKeyValue(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_2
    const-string v0, "com.tencent.feedback.eup.jni.NativeExceptionUpload"

    const-string v2, "putNativeKeyValue"

    const/4 v3, 0x2

    .line 736
    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v1

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v1

    aput-object p2, v3, v6

    invoke-static {v0, v2, v4, v3}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-eqz p1, :cond_3

    .line 739
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :cond_3
    return v1

    :catch_0
    move-exception p1

    .line 744
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 745
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_1
    :cond_4
    :goto_0
    return v1
.end method

.method protected native putNativeKeyValue(Ljava/lang/String;Ljava/lang/String;)Z
.end method

.method protected native regist(Ljava/lang/String;ZI)Ljava/lang/String;
.end method

.method public removeEmptyNativeRecordFiles()V
    .locals 1

    .line 576
    sget-object v0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/be;->c(Ljava/lang/String;)V

    return-void
.end method

.method protected native removeNativeKeyValue(Ljava/lang/String;)Ljava/lang/String;
.end method

.method public resendSigquit()V
    .locals 2

    const/16 v0, 0x14

    const-string v1, ""

    .line 509
    invoke-direct {p0, v0, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    return-void
.end method

.method public setNativeAppChannel(Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0xc

    .line 801
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public setNativeAppPackage(Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0xd

    .line 811
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public setNativeAppVersion(Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0xa

    .line 791
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method protected native setNativeInfo(ILjava/lang/String;)V
.end method

.method public setNativeIsAppForeground(Z)Z
    .locals 1

    if-eqz p1, :cond_0

    const-string p1, "true"

    goto :goto_0

    :cond_0
    const-string p1, "false"

    :goto_0
    const/16 v0, 0xe

    .line 832
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public setNativeLaunchTime(J)Z
    .locals 1

    const/16 v0, 0xf

    .line 843
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 845
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 846
    invoke-virtual {p1}, Ljava/lang/NumberFormatException;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public setNativeUserId(Ljava/lang/String;)Z
    .locals 1

    const/16 v0, 0xb

    .line 821
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public declared-synchronized setUserOpened(Z)V
    .locals 4

    monitor-enter p0

    .line 622
    :try_start_0
    invoke-direct {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->c(Z)V

    .line 624
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->isUserOpened()Z

    move-result p1

    .line 625
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 627
    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object p1

    iget-boolean p1, p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 629
    :cond_1
    :goto_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->k:Z

    if-eq p1, v0, :cond_2

    const-string v0, "native changed to %b"

    .line 630
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 631
    invoke-direct {p0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->b(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 634
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized startNativeMonitor()V
    .locals 4

    monitor-enter p0

    .line 348
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_7

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    if-eqz v0, :cond_0

    goto/16 :goto_3

    .line 353
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->t:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 354
    :goto_0
    sget-boolean v2, Lcom/tencent/bugly/proguard/at;->b:Z

    if-eqz v2, :cond_3

    const-string v2, "Bugly_Native"

    const-string v3, "NativeRQD"

    if-eqz v0, :cond_2

    .line 357
    iget-object v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v2, v2, Lcom/tencent/bugly/proguard/aa;->t:Ljava/lang/String;

    .line 359
    :cond_2
    invoke-static {v2, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Ljava/lang/String;Z)Z

    move-result v2

    iput-boolean v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    .line 360
    iget-boolean v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v2, :cond_5

    if-nez v0, :cond_5

    .line 361
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z

    goto :goto_2

    :cond_3
    const-string v1, "Bugly_Native"

    .line 365
    iget-object v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v2, v2, Lcom/tencent/bugly/proguard/aa;->t:Ljava/lang/String;

    if-nez v0, :cond_4

    .line 368
    iget-object v2, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    goto :goto_1

    :cond_4
    move-object v1, v2

    .line 372
    :goto_1
    invoke-static {v1, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    .line 374
    :cond_5
    :goto_2
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_6

    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->i:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_6

    .line 375
    monitor-exit p0

    return-void

    .line 378
    :cond_6
    :try_start_1
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->h:Z

    invoke-direct {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Z)V

    .line 379
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppVersion(Ljava/lang/String;)Z

    .line 380
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppChannel(Ljava/lang/String;)Z

    .line 381
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeAppPackage(Ljava/lang/String;)Z

    .line 382
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/aa;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeUserId(Ljava/lang/String;)Z

    .line 383
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/aa;->a()Z

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeIsAppForeground(Z)Z

    .line 384
    iget-object v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->e:Lcom/tencent/bugly/proguard/aa;

    iget-wide v0, v0, Lcom/tencent/bugly/proguard/aa;->a:J

    invoke-virtual {p0, v0, v1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->setNativeLaunchTime(J)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 385
    monitor-exit p0

    return-void

    .line 349
    :cond_7
    :goto_3
    :try_start_2
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->h:Z

    invoke-direct {p0, v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 350
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected native testCrash()V
.end method

.method public testNativeCrash()V
    .locals 2

    .line 482
    iget-boolean v0, p0, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->j:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 483
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "[Native] Bugly SO file has not been load."

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 487
    :cond_0
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->testCrash()V

    return-void
.end method

.method public testNativeCrash(ZZZ)V
    .locals 1

    .line 494
    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x10

    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    .line 495
    invoke-static {p2}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x11

    invoke-direct {p0, p2, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    .line 496
    invoke-static {p3}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x12

    invoke-direct {p0, p2, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    .line 497
    invoke-virtual {p0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->testNativeCrash()V

    return-void
.end method

.method public unBlockSigquit(Z)V
    .locals 1

    const/16 v0, 0x15

    if-eqz p1, :cond_0

    const-string p1, "true"

    .line 514
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    return-void

    :cond_0
    const-string p1, "false"

    .line 516
    invoke-direct {p0, v0, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->a(ILjava/lang/String;)Z

    return-void
.end method

.method protected native unregist()Ljava/lang/String;
.end method
