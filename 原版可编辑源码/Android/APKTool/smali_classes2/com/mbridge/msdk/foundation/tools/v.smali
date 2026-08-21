.class public final Lcom/mbridge/msdk/foundation/tools/v;
.super Lcom/mbridge/msdk/foundation/tools/e;
.source "SameDiTool.java"


# static fields
.field private static a:Ljava/lang/String; = null

.field private static b:Ljava/lang/String; = null

.field private static c:I = -0x1

.field private static d:I = -0x1

.field private static volatile e:I = -0x1

.field private static f:Ljava/lang/String; = ""

.field private static g:Ljava/lang/String; = ""

.field private static h:Ljava/lang/String; = ""

.field private static i:Ljava/lang/String; = ""

.field private static j:I = 0x0

.field private static k:Ljava/lang/String; = ""

.field private static l:Ljava/lang/String; = ""

.field private static m:I = -0x1

.field private static n:Ljava/lang/String; = ""

.field private static o:I = 0x0

.field private static p:Ljava/lang/String; = ""

.field private static q:Ljava/lang/String; = null

.field private static r:I = 0x0

.field private static s:I = -0x1

.field private static t:I = -0x1

.field private static u:Ljava/lang/Object; = null

.field private static v:I = 0x0

.field private static w:I = 0x0

.field private static x:I = -0x1

.field private static y:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static A()Ljava/lang/String;
    .locals 1

    .line 475
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 476
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->C(Landroid/content/Context;)Ljava/lang/String;

    .line 478
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    return-object v0
.end method

.method public static A(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    .line 326
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->h:Ljava/lang/String;

    return-object p0

    .line 329
    :cond_0
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 330
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 331
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->h:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 338
    :cond_1
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->h:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 335
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static B()Ljava/lang/String;
    .locals 3

    .line 616
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_other"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 619
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 620
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/foundation/tools/v$4;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/tools/v$4;-><init>()V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 631
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 632
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->l:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 635
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameDiTool"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 637
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->l:Ljava/lang/String;

    return-object v0
.end method

.method public static B(Landroid/content/Context;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    .line 360
    :cond_0
    :try_start_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_2

    .line 362
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->p(Landroid/content/Context;)V

    goto :goto_1

    .line 364
    :cond_2
    new-instance v0, Landroid/os/Handler;

    invoke-virtual {p0}, Landroid/content/Context;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/mbridge/msdk/foundation/tools/v$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/tools/v$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    const-string v0, "SameDiTool"

    const-string v1, ""

    .line 372
    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public static C()Ljava/lang/String;
    .locals 3

    .line 641
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 644
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 645
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->D()I

    move-result v0

    .line 646
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->g:Ljava/lang/String;

    .line 649
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->g:Ljava/lang/String;

    return-object v0
.end method

.method public static C(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    .line 378
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 2465
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v2, "SameDiTool"

    if-eqz v0, :cond_1

    :try_start_0
    const-string v0, "mbridge_ua"

    const-string v3, ""

    .line 2467
    invoke-static {p0, v0, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2469
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 383
    :cond_1
    :goto_0
    :try_start_1
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-ne v0, v3, :cond_2

    move v0, v4

    goto :goto_1

    :cond_2
    move v0, v5

    :goto_1
    if-eqz v0, :cond_6

    .line 385
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    if-eqz v0, :cond_5

    .line 387
    :try_start_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v0, v3, :cond_3

    .line 388
    invoke-static {p0}, Landroid/webkit/WebSettings;->getDefaultUserAgent(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 393
    :catchall_1
    :cond_3
    :try_start_3
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    if-eqz v0, :cond_7

    .line 395
    :try_start_4
    const-class v0, Landroid/webkit/WebSettings;

    const/4 v3, 0x2

    new-array v6, v3, [Ljava/lang/Class;

    const-class v7, Landroid/content/Context;

    aput-object v7, v6, v5

    const-class v7, Landroid/webkit/WebView;

    aput-object v7, v6, v4

    invoke-virtual {v0, v6}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    .line 396
    invoke-virtual {v0, v4}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v5

    aput-object v1, v3, v4

    .line 397
    invoke-virtual {v0, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/webkit/WebSettings;

    .line 398
    invoke-virtual {v1}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    .line 399
    invoke-virtual {v0, v5}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    .line 401
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 403
    :goto_2
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    if-eqz v0, :cond_4

    .line 405
    :try_start_6
    new-instance v0, Landroid/webkit/WebView;

    invoke-direct {v0, p0}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v0

    .line 407
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 410
    :cond_4
    :goto_3
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 411
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->R()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    goto :goto_4

    .line 416
    :cond_5
    :try_start_8
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/foundation/tools/v$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/tools/v$2;-><init>(Landroid/content/Context;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 440
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    goto :goto_4

    :catch_0
    move-exception v0

    .line 442
    :try_start_9
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_4

    .line 446
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->R()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    goto :goto_4

    :catchall_4
    move-exception v0

    .line 449
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 451
    :cond_7
    :goto_4
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->H(Landroid/content/Context;)V

    .line 452
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    return-object p0
.end method

.method public static D()I
    .locals 1

    .line 654
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 656
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method

.method public static D(Landroid/content/Context;)I
    .locals 4

    const-string p0, "SameDiTool"

    const/4 v0, 0x0

    .line 541
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 542
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v2

    const-string v3, "authority_general_data"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 543
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0

    :cond_0
    if-nez v1, :cond_1

    .line 546
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0

    .line 548
    :cond_1
    sget v2, Lcom/mbridge/msdk/foundation/tools/v;->e:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v3, -0x1

    if-eq v2, v3, :cond_3

    .line 2494
    :try_start_1
    new-instance v2, Lcom/mbridge/msdk/foundation/tools/v$3;

    invoke-direct {v2, v1}, Lcom/mbridge/msdk/foundation/tools/v$3;-><init>(Landroid/content/Context;)V

    .line 2528
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->c()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/ThreadPoolExecutor;->getActiveCount()I

    move-result v1

    const/4 v3, 0x1

    if-ge v1, v3, :cond_2

    .line 2530
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->c()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 2534
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 550
    :cond_2
    :goto_0
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0

    .line 553
    :cond_3
    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->e:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    .line 559
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0

    :catch_0
    move-exception v1

    .line 555
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 556
    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    .line 557
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0
.end method

.method public static E()Ljava/lang/String;
    .locals 2

    .line 669
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_device_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 672
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_2

    .line 673
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->a:Ljava/lang/String;

    :goto_0
    return-object v1

    .line 675
    :cond_2
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    return-object v1

    .line 678
    :cond_3
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static E(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, "SameDiTool"

    .line 801
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const-string v2, ""

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    if-nez p0, :cond_1

    return-object v2

    .line 808
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "time_12_24"

    .line 809
    invoke-static {p0, v1}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 815
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_0

    :catch_0
    move-exception p0

    .line 813
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-object v2
.end method

.method public static F()Ljava/lang/String;
    .locals 2

    .line 687
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_device_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 690
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-nez v0, :cond_2

    .line 691
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->b:Ljava/lang/String;

    :goto_0
    return-object v1

    .line 693
    :cond_2
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->b:Ljava/lang/String;

    if-nez v0, :cond_3

    return-object v1

    :cond_3
    return-object v0
.end method

.method public static F(Landroid/content/Context;)Ljava/lang/String;
    .locals 9

    const-string v0, "SameDiTool"

    .line 821
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const-string v2, ""

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    if-nez p0, :cond_1

    return-object v2

    .line 829
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->q:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 830
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->q:Ljava/lang/String;

    return-object p0

    :cond_2
    const-string v1, "/proc/meminfo"

    const/4 v3, 0x0

    .line 839
    :try_start_0
    new-instance v4, Ljava/io/FileReader;

    invoke-direct {v4, v1}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 840
    :try_start_1
    new-instance v1, Ljava/io/BufferedReader;

    const/16 v5, 0x2000

    invoke-direct {v1, v4, v5}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 841
    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v3

    const-string v5, "\\s+"

    .line 842
    invoke-virtual {v3, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    .line 843
    aget-object v3, v3, v5

    invoke-static {v3}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    const-wide/16 v7, 0x400

    mul-long/2addr v5, v7

    .line 844
    invoke-static {p0, v5, v6}, Landroid/text/format/Formatter;->formatFileSize(Landroid/content/Context;J)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->q:Ljava/lang/String;
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 853
    :try_start_3
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 856
    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 860
    :goto_0
    :try_start_4
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 863
    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-object p0

    :catchall_0
    move-exception p0

    move-object v3, v1

    goto :goto_2

    :catch_2
    move-exception p0

    move-object v3, v1

    goto :goto_4

    :catchall_1
    move-exception p0

    goto :goto_2

    :catch_3
    move-exception p0

    goto :goto_4

    :catchall_2
    move-exception p0

    move-object v4, v3

    .line 849
    :goto_2
    :try_start_5
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v3, :cond_3

    .line 853
    :try_start_6
    invoke-virtual {v3}, Ljava/io/BufferedReader;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_4

    goto :goto_3

    :catch_4
    move-exception p0

    .line 856
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_3
    if-eqz v4, :cond_5

    .line 860
    :try_start_7
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_7

    goto :goto_6

    :catch_5
    move-exception p0

    move-object v4, v3

    .line 847
    :goto_4
    :try_start_8
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    if-eqz v3, :cond_4

    .line 853
    :try_start_9
    invoke-virtual {v3}, Ljava/io/BufferedReader;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_6

    goto :goto_5

    :catch_6
    move-exception p0

    .line 856
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_4
    :goto_5
    if-eqz v4, :cond_5

    .line 860
    :try_start_a
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_7

    goto :goto_6

    :catch_7
    move-exception p0

    .line 863
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_6
    return-object v2

    :catchall_3
    move-exception p0

    if-eqz v3, :cond_6

    .line 853
    :try_start_b
    invoke-virtual {v3}, Ljava/io/BufferedReader;->close()V
    :try_end_b
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_8

    goto :goto_7

    :catch_8
    move-exception v1

    .line 856
    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_6
    :goto_7
    if-eqz v4, :cond_7

    .line 860
    :try_start_c
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_c
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_9

    goto :goto_8

    :catch_9
    move-exception v1

    .line 863
    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 865
    :cond_7
    :goto_8
    throw p0
.end method

.method public static G()Ljava/util/UUID;
    .locals 3

    .line 703
    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 705
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameDiTool"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method static synthetic G(Landroid/content/Context;)V
    .locals 0

    .line 49
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->H(Landroid/content/Context;)V

    return-void
.end method

.method public static H()Ljava/lang/String;
    .locals 2

    .line 748
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 751
    :cond_0
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method private static H(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    const-string v0, "mbridge_ua"

    .line 457
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    invoke-static {p0, v0, v1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 459
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SameDiTool"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public static I()Ljava/lang/String;
    .locals 8

    const-string v0, "SameDiTool"

    .line 755
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v0, ""

    return-object v0

    .line 759
    :cond_0
    sget v1, Lcom/mbridge/msdk/foundation/tools/v;->r:I

    const-string v2, "GB"

    if-lez v1, :cond_1

    .line 760
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget v1, Lcom/mbridge/msdk/foundation/tools/v;->r:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v1, "/proc/meminfo"

    const/4 v3, 0x0

    .line 764
    sput v3, Lcom/mbridge/msdk/foundation/tools/v;->r:I

    const/4 v3, 0x0

    .line 768
    :try_start_0
    new-instance v4, Ljava/io/FileReader;

    invoke-direct {v4, v1}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 769
    :try_start_1
    new-instance v1, Ljava/io/BufferedReader;

    const/16 v5, 0x2000

    invoke-direct {v1, v4, v5}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 770
    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v3

    const-string v5, "\\s+"

    invoke-virtual {v3, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    aget-object v3, v3, v5

    .line 771
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V

    if-eqz v3, :cond_2

    .line 773
    new-instance v5, Ljava/lang/Float;

    invoke-static {v3}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Float;->floatValue()F

    move-result v3

    const/high16 v6, 0x49800000    # 1048576.0f

    div-float/2addr v3, v6

    invoke-direct {v5, v3}, Ljava/lang/Float;-><init>(F)V

    invoke-virtual {v5}, Ljava/lang/Float;->doubleValue()D

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v5

    double-to-int v3, v5

    sput v3, Lcom/mbridge/msdk/foundation/tools/v;->r:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 783
    :cond_2
    :try_start_3
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    .line 790
    :catch_0
    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_6

    goto :goto_2

    :catchall_0
    move-exception v3

    goto :goto_0

    :catch_1
    move-exception v3

    goto :goto_1

    :catchall_1
    move-exception v1

    move-object v7, v3

    move-object v3, v1

    move-object v1, v7

    goto :goto_0

    :catch_2
    move-exception v1

    move-object v7, v3

    move-object v3, v1

    move-object v1, v7

    goto :goto_1

    :catchall_2
    move-exception v1

    move-object v4, v3

    move-object v3, v1

    move-object v1, v4

    .line 779
    :goto_0
    :try_start_5
    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5, v3}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v4, :cond_3

    .line 783
    :try_start_6
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_3

    :catch_3
    :cond_3
    if-eqz v1, :cond_5

    .line 790
    :try_start_7
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_2

    :catch_4
    move-exception v1

    move-object v4, v3

    move-object v3, v1

    move-object v1, v4

    .line 777
    :goto_1
    :try_start_8
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5, v3}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    if-eqz v4, :cond_4

    .line 783
    :try_start_9
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_5

    :catch_5
    :cond_4
    if-eqz v1, :cond_5

    .line 790
    :try_start_a
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_6

    goto :goto_2

    :catch_6
    move-exception v0

    .line 793
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 797
    :cond_5
    :goto_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget v1, Lcom/mbridge/msdk/foundation/tools/v;->r:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :catchall_3
    move-exception v0

    if-eqz v4, :cond_6

    .line 783
    :try_start_b
    invoke-virtual {v4}, Ljava/io/FileReader;->close()V
    :try_end_b
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_7

    :catch_7
    :cond_6
    if-eqz v1, :cond_7

    .line 790
    :try_start_c
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_c
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_8

    goto :goto_3

    :catch_8
    move-exception v1

    .line 793
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 795
    :cond_7
    :goto_3
    throw v0
.end method

.method public static J()Ljava/lang/String;
    .locals 10

    const-string v0, ""

    .line 872
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 875
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/u;->a()J

    move-result-wide v2

    .line 876
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->S()J

    move-result-wide v4

    .line 877
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "app_tki_"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, "_"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 878
    invoke-static {v1, v6, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 879
    :try_start_1
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_0

    .line 880
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :try_start_2
    const-string v9, "1"

    .line 882
    invoke-virtual {v8, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v9, "2"

    .line 883
    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v8, v9, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "3"

    .line 884
    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v8, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "4"

    .line 885
    invoke-virtual {v8, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "5"

    .line 886
    invoke-virtual {v8, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 888
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 890
    :goto_0
    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 891
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 895
    :try_start_4
    invoke-static {v1, v6, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_1
    move-exception v1

    move-object v0, v7

    goto :goto_1

    :catch_2
    move-exception v1

    .line 898
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    move-object v7, v0

    :cond_0
    return-object v7
.end method

.method public static K()I
    .locals 10

    const-string v0, "FreeRamSize"

    .line 905
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    return v0

    .line 908
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, 0x0

    .line 909
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-static {v1, v0, v4}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    .line 910
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long v4, v6, v4

    const-wide/32 v8, 0x1b7740

    cmp-long v4, v4, v8

    if-gtz v4, :cond_1

    .line 911
    sget v4, Lcom/mbridge/msdk/foundation/tools/v;->d:I

    const/4 v5, -0x1

    if-ne v4, v5, :cond_3

    .line 2922
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    if-eqz v4, :cond_2

    const-string v2, "activity"

    .line 2924
    invoke-virtual {v4, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager;

    .line 2925
    new-instance v3, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v3}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    .line 2926
    invoke-virtual {v2, v3}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 2927
    iget-wide v2, v3, Landroid/app/ActivityManager$MemoryInfo;->availMem:J

    :cond_2
    const-wide/16 v4, 0x3e8

    .line 912
    div-long/2addr v2, v4

    div-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->intValue()I

    move-result v2

    sput v2, Lcom/mbridge/msdk/foundation/tools/v;->d:I

    .line 913
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 916
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameDiTool"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 918
    :cond_3
    :goto_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->d:I

    return v0
.end method

.method public static L()I
    .locals 8

    const-string v0, "TotalRamSize"

    .line 946
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    return v0

    .line 949
    :cond_0
    sget v1, Lcom/mbridge/msdk/foundation/tools/v;->c:I

    const/4 v2, 0x1

    if-ge v1, v2, :cond_2

    .line 951
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, 0x0

    .line 952
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    .line 953
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v2, v4, v2

    const-wide/32 v6, 0x1b7740

    cmp-long v2, v2, v6

    if-gtz v2, :cond_1

    .line 954
    sget v2, Lcom/mbridge/msdk/foundation/tools/v;->c:I

    const/4 v3, -0x1

    if-ne v2, v3, :cond_2

    .line 955
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->S()J

    move-result-wide v2

    const-wide/16 v6, 0x3e8

    div-long/2addr v2, v6

    div-long/2addr v2, v6

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->intValue()I

    move-result v2

    sput v2, Lcom/mbridge/msdk/foundation/tools/v;->c:I

    .line 956
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 959
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameDiTool"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 962
    :cond_2
    :goto_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->c:I

    return v0
.end method

.method public static M()I
    .locals 1

    .line 983
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->m:I

    return v0
.end method

.method public static N()Ljava/lang/String;
    .locals 7

    const-string v0, "SameDiTool"

    .line 987
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->p:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 988
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->p:Ljava/lang/String;

    return-object v0

    .line 990
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const/4 v2, 0x0

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "com.huawei.system.BuildEx"

    .line 993
    invoke-static {v4}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v4

    const-string v5, "getOsBrand"

    new-array v6, v3, [Ljava/lang/Class;

    .line 994
    invoke-virtual {v4, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v6, v3, [Ljava/lang/Object;

    invoke-virtual {v5, v4, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v2, v4

    goto :goto_0

    :catchall_0
    move-exception v4

    .line 996
    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1000
    :goto_0
    :try_start_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v4, "harmony"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string v4, "osType"

    .line 1001
    invoke-virtual {v1, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    :try_start_2
    const-string v2, "ohos.system.version.SystemVersion"

    .line 1004
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v4, "getVersion"

    new-array v5, v3, [Ljava/lang/Class;

    .line 1005
    invoke-virtual {v2, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v4, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "version"

    .line 1006
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v2

    .line 1008
    :try_start_3
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 1013
    :goto_1
    :try_start_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "pure_mode_state"

    const/4 v4, -0x1

    .line 1012
    invoke-static {v2, v3, v4}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2

    const-string v3, "pure_state"

    .line 1014
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v2

    .line 1016
    :try_start_5
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1019
    :goto_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1020
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1021
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1023
    :cond_1
    sput-object v1, Lcom/mbridge/msdk/foundation/tools/v;->p:Ljava/lang/String;

    goto :goto_3

    :cond_2
    const-string v1, "android"

    .line 1025
    sput-object v1, Lcom/mbridge/msdk/foundation/tools/v;->p:Ljava/lang/String;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v1

    .line 1028
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1031
    :goto_3
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->p:Ljava/lang/String;

    return-object v0
.end method

.method public static O()I
    .locals 1

    .line 1039
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->x:I

    return v0
.end method

.method public static P()I
    .locals 3

    const/4 v0, 0x0

    .line 3197
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab$a;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v1

    const-string v2, "v_a_d_p"

    .line 1050
    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1051
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->g()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 1053
    sput v1, Lcom/mbridge/msdk/foundation/tools/v;->y:I

    goto :goto_0

    .line 1055
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->h()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x2

    .line 1057
    sput v1, Lcom/mbridge/msdk/foundation/tools/v;->y:I

    goto :goto_0

    .line 1059
    :cond_1
    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->y:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_2
    return v0

    :catch_0
    move-exception v1

    .line 1066
    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->y:I

    .line 1067
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SameDiTool"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1069
    :goto_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->y:I

    return v0
.end method

.method static synthetic Q()Ljava/lang/String;
    .locals 1

    .line 49
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    return-object v0
.end method

.method private static R()V
    .locals 4

    .line 482
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    .line 483
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object v1

    .line 484
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 485
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Mozilla/5.0 (Linux; Android "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "; "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " Build/) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "Mozilla/5.0 (Linux; Android 4.0.4; Galaxy Nexus Build/IMM76B) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"

    .line 488
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    :goto_0
    return-void
.end method

.method private static S()J
    .locals 3

    .line 933
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "activity"

    .line 935
    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 936
    new-instance v1, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v1}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    .line 937
    invoke-virtual {v0, v1}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 938
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_0

    .line 939
    iget-wide v0, v1, Landroid/app/ActivityManager$MemoryInfo;->totalMem:J

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static a(I)I
    .locals 0

    packed-switch p0, :pswitch_data_0

    const/4 p0, 0x0

    return p0

    :pswitch_0
    const/4 p0, 0x5

    return p0

    :pswitch_1
    const/4 p0, 0x4

    return p0

    :pswitch_2
    const/4 p0, 0x3

    return p0

    :pswitch_3
    const/4 p0, 0x2

    return p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_3
        :pswitch_2
        :pswitch_2
        :pswitch_3
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_2
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public static a(Landroid/content/Context;I)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    if-eqz p1, :cond_2

    const/16 v1, 0x9

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 569
    :cond_0
    :try_start_0
    sget-boolean p1, Lcom/mbridge/msdk/foundation/same/a;->h:Z

    if-eqz p1, :cond_2

    const-string p1, "phone"

    .line 570
    invoke-virtual {p0, p1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-nez p0, :cond_1

    return-object v0

    .line 574
    :cond_1
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p0

    .line 575
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 578
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "SameDiTool"

    invoke-static {v1, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    return-object v0
.end method

.method public static a(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, "SameDiTool"

    .line 712
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/v;->n:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 713
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->n:Ljava/lang/String;

    return-object p0

    .line 715
    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    if-eqz p1, :cond_1

    .line 716
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    .line 717
    invoke-virtual {p1, p0}, Landroid/content/pm/PackageManager;->getInstallerPackageName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->n:Ljava/lang/String;

    .line 718
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "PKGSource:"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Lcom/mbridge/msdk/foundation/tools/v;->n:Ljava/lang/String;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 721
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 723
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->n:Ljava/lang/String;

    return-object p0
.end method

.method public static b(I)V
    .locals 0

    .line 1035
    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->x:I

    return-void
.end method

.method static synthetic c(I)I
    .locals 0

    .line 49
    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->e:I

    return p0
.end method

.method public static f(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 123
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->u:Ljava/lang/Object;

    if-nez v0, :cond_0

    .line 124
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->u:Ljava/lang/Object;

    .line 126
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->u:Ljava/lang/Object;

    return-object p0
.end method

.method public static g(Ljava/lang/String;)I
    .locals 1

    .line 131
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->v:I

    if-nez v0, :cond_0

    .line 132
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ae;->e(Ljava/lang/String;)I

    move-result p0

    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->v:I

    .line 134
    :cond_0
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->v:I

    return p0
.end method

.method public static h(Ljava/lang/String;)V
    .locals 1

    .line 682
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->b:Ljava/lang/String;

    .line 683
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->a:Ljava/lang/String;

    return-void
.end method

.method static synthetic i(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 49
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->f:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 49
    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->l:Ljava/lang/String;

    return-object p0
.end method

.method public static q(Landroid/content/Context;)V
    .locals 6

    const-string v0, "SameDiTool"

    .line 84
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->C()Ljava/lang/String;

    .line 85
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    .line 86
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->v(Landroid/content/Context;)Ljava/lang/String;

    .line 87
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->u(Landroid/content/Context;)I

    .line 88
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    .line 89
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    .line 90
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    .line 91
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    .line 92
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    .line 93
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->B()Ljava/lang/String;

    const/4 v1, 0x0

    .line 94
    sput-boolean v1, Lcom/mbridge/msdk/foundation/same/a;->i:Z

    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    .line 95
    invoke-static {v2, p0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v2

    sput-boolean v2, Lcom/mbridge/msdk/foundation/same/a;->h:Z

    .line 96
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 1078
    :try_start_1
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->g(Landroid/content/Context;)Ljava/lang/String;

    .line 1079
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->b(Landroid/content/Context;)Ljava/lang/String;

    .line 1080
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->c(Landroid/content/Context;)Ljava/lang/String;

    .line 1081
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->i(Landroid/content/Context;)Ljava/lang/String;

    .line 1083
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->j(Landroid/content/Context;)Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1967
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->D()I

    move-result v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-string v3, "install_non_market_apps"

    const/16 v4, 0x15

    const/16 v5, 0x11

    if-lt v2, v5, :cond_0

    if-ge v2, v4, :cond_0

    .line 1969
    :try_start_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-static {v2, v3, v1}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/mbridge/msdk/foundation/tools/v;->m:I

    goto :goto_0

    :cond_0
    if-ge v2, v4, :cond_1

    if-ge v2, v5, :cond_2

    const/16 v4, 0xa

    if-le v2, v4, :cond_2

    .line 1972
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-static {v2, v3, v1}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/mbridge/msdk/foundation/tools/v;->m:I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 1976
    :try_start_4
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 1978
    :cond_2
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getUSSForPe:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mbridge/msdk/foundation/tools/v;->m:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "android.permission.GET_TASKS"

    .line 1085
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    sput-boolean v0, Lcom/mbridge/msdk/foundation/same/a;->k:Z

    .line 1086
    sput-boolean v1, Lcom/mbridge/msdk/foundation/same/a;->j:Z

    .line 1087
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/e;->a(Landroid/content/Context;)Ljava/lang/String;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 98
    :catch_0
    :catchall_1
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->N()Ljava/lang/String;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :catch_1
    :catchall_2
    return-void
.end method

.method public static r(Landroid/content/Context;)I
    .locals 2

    .line 108
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->s:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const-string v0, "com.tencent.mm"

    .line 109
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->s:I

    .line 111
    :cond_0
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->s:I

    return p0
.end method

.method public static s(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 166
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, ""

    return-object p0

    .line 169
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "en-US"

    if-nez p0, :cond_1

    return-object v0

    .line 174
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    if-eqz v1, :cond_5

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    if-nez v1, :cond_2

    goto :goto_1

    .line 177
    :cond_2
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget-object p0, p0, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;

    if-nez p0, :cond_3

    return-object v0

    .line 181
    :cond_3
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_4

    .line 182
    invoke-virtual {p0}, Ljava/util/Locale;->toLanguageTag()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;

    goto :goto_0

    .line 184
    :cond_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/util/Locale;->getCountry()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;

    .line 186
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :cond_5
    :goto_1
    return-object v0

    :catchall_0
    move-exception p0

    .line 188
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v1, "SameDiTool"

    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;

    .line 192
    :cond_6
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->k:Ljava/lang/String;

    return-object p0
.end method

.method public static t(Landroid/content/Context;)I
    .locals 2

    const/4 v0, 0x1

    if-eqz p0, :cond_3

    .line 196
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 199
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    if-nez p0, :cond_1

    return v0

    .line 204
    :cond_1
    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    const/4 v1, 0x2

    if-ne p0, v1, :cond_2

    return v1

    :cond_2
    if-ne p0, v0, :cond_3

    :cond_3
    :goto_0
    return v0
.end method

.method public static u(Landroid/content/Context;)I
    .locals 2

    if-nez p0, :cond_0

    .line 217
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->j:I

    return p0

    .line 219
    :cond_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->j:I

    if-nez v0, :cond_1

    .line 221
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 222
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->j:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 225
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, -0x1

    return p0

    :cond_1
    return v0
.end method

.method public static v()I
    .locals 2

    .line 116
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->t:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 117
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->c()Z

    move-result v0

    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->t:I

    .line 119
    :cond_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->t:I

    return v0
.end method

.method public static v(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    .line 234
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->i:Ljava/lang/String;

    return-object p0

    .line 237
    :cond_0
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/v;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 238
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 239
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    sput-object p0, Lcom/mbridge/msdk/foundation/tools/v;->i:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 246
    :cond_1
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/v;->i:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 243
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static w()I
    .locals 1

    .line 138
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->w:I

    if-nez v0, :cond_0

    .line 139
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ae;->d()I

    move-result v0

    sput v0, Lcom/mbridge/msdk/foundation/tools/v;->w:I

    .line 141
    :cond_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->w:I

    return v0
.end method

.method public static w(Landroid/content/Context;)I
    .locals 1

    if-nez p0, :cond_0

    .line 252
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->o:I

    return p0

    .line 254
    :cond_0
    sget v0, Lcom/mbridge/msdk/foundation/tools/v;->o:I

    if-nez v0, :cond_1

    .line 256
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    sput p0, Lcom/mbridge/msdk/foundation/tools/v;->o:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 258
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "SameDiTool"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 261
    :cond_1
    :goto_0
    sget p0, Lcom/mbridge/msdk/foundation/tools/v;->o:I

    return p0
.end method

.method public static x(Landroid/content/Context;)I
    .locals 4

    const-string v0, "width"

    .line 265
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    :cond_0
    if-nez p0, :cond_1

    return v2

    .line 272
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    .line 273
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object p0

    .line 274
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_2

    iget p0, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    goto :goto_0

    :cond_2
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return p0

    :catch_0
    move-exception p0

    .line 276
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v2
.end method

.method public static x()Ljava/lang/String;
    .locals 2

    .line 145
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 148
    :cond_0
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0
.end method

.method public static y(Landroid/content/Context;)I
    .locals 4

    const-string v0, "height"

    .line 282
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v1

    const-string v2, "authority_general_data"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    :cond_0
    if-nez p0, :cond_1

    return v2

    .line 289
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    .line 290
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object p0

    .line 291
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_2

    iget p0, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    goto :goto_0

    :cond_2
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return p0

    :catch_0
    move-exception p0

    .line 293
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v2
.end method

.method public static y()Ljava/lang/String;
    .locals 2

    .line 152
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 155
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static z()Ljava/lang/String;
    .locals 2

    .line 159
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 162
    :cond_0
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    return-object v0
.end method

.method public static z(Landroid/content/Context;)Ljava/util/HashMap;
    .locals 4

    .line 299
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "window"

    .line 304
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 305
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    .line 306
    new-instance v1, Landroid/util/DisplayMetrics;

    invoke-direct {v1}, Landroid/util/DisplayMetrics;-><init>()V

    .line 308
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_1

    .line 309
    invoke-virtual {p0, v1}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    goto :goto_0

    .line 311
    :cond_1
    invoke-virtual {p0, v1}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    :goto_0
    const-string p0, "height"

    .line 315
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, p0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "width"

    .line 316
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 319
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameDiTool"

    invoke-static {v2, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-object v0
.end method
