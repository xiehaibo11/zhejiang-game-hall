.class public final Lcom/tkay/expressad/foundation/h/k;
.super Lcom/tkay/expressad/foundation/h/d;


# static fields
.field private static final a:Ljava/lang/String; = "SameDiTool"

.field private static b:Ljava/lang/String; = null

.field private static c:Ljava/lang/String; = null

.field private static d:I = -0x1

.field private static e:I = -0x1

.field private static f:I = -0x1

.field private static g:Ljava/lang/String; = ""

.field private static h:Ljava/lang/String; = ""

.field private static i:Ljava/lang/String; = ""

.field private static j:Ljava/lang/String; = ""

.field private static k:I = 0x0

.field private static l:Ljava/lang/String; = ""

.field private static m:Ljava/lang/String; = ""

.field private static n:I = -0x1

.field private static o:Ljava/lang/String; = ""

.field private static p:I = 0x0

.field private static q:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/h/d;-><init>()V

    return-void
.end method

.method public static a()I
    .locals 4

    const/4 v0, 0x0

    .line 263
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    .line 264
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    const-string v3, "network_type"

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 265
    sget v0, Lcom/tkay/expressad/foundation/h/k;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    return v0

    .line 269
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v2

    if-nez v2, :cond_1

    .line 270
    sget v0, Lcom/tkay/expressad/foundation/h/k;->f:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return v0

    :cond_1
    if-nez v1, :cond_2

    .line 279
    :try_start_2
    sget v0, Lcom/tkay/expressad/foundation/h/k;->f:I

    return v0

    .line 281
    :cond_2
    sget v2, Lcom/tkay/expressad/foundation/h/k;->f:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/4 v3, -0x1

    if-eq v2, v3, :cond_4

    .line 1297
    :try_start_3
    new-instance v2, Lcom/tkay/expressad/foundation/h/k$2;

    invoke-direct {v2, v1}, Lcom/tkay/expressad/foundation/h/k$2;-><init>(Landroid/content/Context;)V

    .line 1349
    invoke-static {}, Lcom/tkay/expressad/foundation/g/h/a;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/ThreadPoolExecutor;->getActiveCount()I

    move-result v1

    if-gtz v1, :cond_3

    .line 1351
    invoke-static {}, Lcom/tkay/expressad/foundation/g/h/a;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1354
    :try_start_4
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 283
    :cond_3
    :goto_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->f:I

    return v0

    .line 286
    :cond_4
    sput v0, Lcom/tkay/expressad/foundation/h/k;->f:I

    return v0

    .line 273
    :catch_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->f:I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    return v0

    :catchall_1
    move-exception v1

    .line 288
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 290
    sput v0, Lcom/tkay/expressad/foundation/h/k;->f:I

    return v0
.end method

.method public static a(I)I
    .locals 1

    const/16 v0, 0x14

    if-eq p0, v0, :cond_0

    packed-switch p0, :pswitch_data_0

    const/4 p0, 0x0

    return p0

    :pswitch_0
    const/4 p0, 0x4

    return p0

    :pswitch_1
    const/4 p0, 0x3

    return p0

    :pswitch_2
    const/4 p0, 0x2

    return p0

    :cond_0
    const/4 p0, 0x5

    return p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public static a(Landroid/content/Context;I)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    if-eqz p1, :cond_2

    const/16 v1, 0x9

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 365
    :cond_0
    :try_start_0
    sget-boolean p1, Lcom/tkay/expressad/foundation/g/a;->bW:Z

    if-eqz p1, :cond_2

    const-string p1, "phone"

    .line 366
    invoke-virtual {p0, p1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-nez p0, :cond_1

    return-object v0

    .line 370
    :cond_1
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p0

    .line 371
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 374
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_2
    :goto_0
    return-object v0
.end method

.method private static a(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 423
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->o:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 424
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->o:Ljava/lang/String;

    return-object p0

    .line 426
    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    .line 427
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    .line 428
    invoke-virtual {p1, p0}, Landroid/content/pm/PackageManager;->getInstallerPackageName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/expressad/foundation/h/k;->o:Ljava/lang/String;

    .line 429
    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "PKGSource:"

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object p1, Lcom/tkay/expressad/foundation/h/k;->o:Ljava/lang/String;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 432
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 434
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->o:Ljava/lang/String;

    return-object p0
.end method

.method private static a(Ljava/lang/String;)V
    .locals 1

    .line 407
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/h/k;->c:Ljava/lang/String;

    .line 408
    sput-object p0, Lcom/tkay/expressad/foundation/h/k;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic b(I)I
    .locals 0

    .line 38
    sput p0, Lcom/tkay/expressad/foundation/h/k;->f:I

    return p0
.end method

.method public static b(Landroid/content/Context;)I
    .locals 2

    const/4 v0, 0x1

    if-eqz p0, :cond_3

    .line 78
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 81
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    if-nez p0, :cond_1

    return v0

    .line 86
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

.method public static b()Ljava/lang/String;
    .locals 2

    .line 463
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "model"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 468
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 475
    :cond_1
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

    :catch_0
    return-object v1
.end method

.method public static c(Landroid/content/Context;)I
    .locals 2

    if-nez p0, :cond_0

    .line 99
    sget p0, Lcom/tkay/expressad/foundation/h/k;->k:I

    return p0

    .line 101
    :cond_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->k:I

    if-nez v0, :cond_1

    .line 103
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 104
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    .line 105
    sput p0, Lcom/tkay/expressad/foundation/h/k;->k:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 107
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, -0x1

    return p0

    :cond_1
    return v0
.end method

.method public static c()Ljava/lang/String;
    .locals 2

    .line 479
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "os_vc"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 484
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 490
    :cond_1
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 491
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->d()I

    move-result v0

    .line 492
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/h/k;->h:Ljava/lang/String;

    .line 495
    :cond_2
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->h:Ljava/lang/String;

    return-object v0

    :catch_0
    return-object v1
.end method

.method public static d()I
    .locals 1

    .line 500
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 502
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    .line 116
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->j:Ljava/lang/String;

    return-object p0

    .line 119
    :cond_0
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 120
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 121
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    .line 122
    sput-object p0, Lcom/tkay/expressad/foundation/h/k;->j:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 128
    :cond_1
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->j:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 125
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static e(Landroid/content/Context;)I
    .locals 4

    const-string v0, "width"

    .line 147
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "screen"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 152
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v1, :cond_1

    return v2

    :cond_1
    if-nez p0, :cond_2

    return v2

    .line 162
    :cond_2
    :try_start_1
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    .line 163
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object p0

    .line 164
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_3

    iget p0, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    return p0

    :cond_3
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 166
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :catch_1
    return v2
.end method

.method public static e()Ljava/lang/String;
    .locals 10

    const-string v0, ""

    .line 510
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    .line 511
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 512
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    sub-long/2addr v2, v4

    .line 514
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->l()J

    move-result-wide v4

    .line 515
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "app_tki_"

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, "_"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 516
    invoke-static {v1, v6, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 517
    :try_start_1
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_0

    .line 518
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :try_start_2
    const-string v9, "1"

    .line 520
    invoke-virtual {v8, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v9, "2"

    .line 521
    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v8, v9, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "3"

    .line 522
    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v8, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "4"

    .line 523
    invoke-virtual {v8, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "5"

    .line 524
    invoke-virtual {v8, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 526
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 528
    :goto_0
    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 529
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 533
    :try_start_4
    invoke-static {v1, v6, v0}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_1
    move-exception v1

    move-object v0, v7

    goto :goto_1

    :catch_2
    move-exception v1

    .line 536
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    move-object v7, v0

    :cond_0
    return-object v7
.end method

.method public static f()I
    .locals 8

    const-string v0, "TotalRamSize"

    .line 555
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    return v0

    .line 558
    :cond_0
    sget v1, Lcom/tkay/expressad/foundation/h/k;->d:I

    if-gtz v1, :cond_2

    .line 560
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, 0x0

    .line 561
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    .line 562
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v2, v4, v2

    const-wide/32 v6, 0x1b7740

    cmp-long v2, v2, v6

    if-gtz v2, :cond_1

    .line 563
    sget v2, Lcom/tkay/expressad/foundation/h/k;->d:I

    const/4 v3, -0x1

    if-ne v2, v3, :cond_2

    .line 564
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->l()J

    move-result-wide v2

    const-wide/16 v6, 0x3e8

    div-long/2addr v2, v6

    div-long/2addr v2, v6

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->intValue()I

    move-result v2

    sput v2, Lcom/tkay/expressad/foundation/h/k;->d:I

    .line 565
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 568
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 571
    :cond_2
    :goto_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->d:I

    return v0
.end method

.method public static f(Landroid/content/Context;)I
    .locals 4

    const-string v0, "height"

    .line 172
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "screen"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 177
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v1, :cond_1

    return v2

    :cond_1
    if-nez p0, :cond_2

    return v2

    .line 187
    :cond_2
    :try_start_1
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    .line 188
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->g(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object p0

    .line 189
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_3

    iget p0, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    return p0

    :cond_3
    invoke-virtual {p0, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 191
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :catch_1
    return v2
.end method

.method public static g()I
    .locals 10

    const-string v0, "FreeRamSize"

    .line 576
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    return v0

    .line 579
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, 0x0

    .line 580
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-static {v1, v0, v4}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    .line 581
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long v4, v6, v4

    const-wide/32 v8, 0x1b7740

    cmp-long v4, v4, v8

    if-gtz v4, :cond_1

    .line 582
    sget v4, Lcom/tkay/expressad/foundation/h/k;->e:I

    const/4 v5, -0x1

    if-ne v4, v5, :cond_3

    .line 1593
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    if-eqz v4, :cond_2

    const-string v2, "activity"

    .line 1595
    invoke-virtual {v4, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager;

    .line 1596
    new-instance v3, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v3}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    .line 1597
    invoke-virtual {v2, v3}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 1598
    iget-wide v2, v3, Landroid/app/ActivityManager$MemoryInfo;->availMem:J

    :cond_2
    const-wide/16 v4, 0x3e8

    .line 583
    div-long/2addr v2, v4

    div-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->intValue()I

    move-result v2

    sput v2, Lcom/tkay/expressad/foundation/h/k;->e:I

    .line 584
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 587
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 589
    :cond_3
    :goto_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->e:I

    return v0
.end method

.method public static g(Landroid/content/Context;)Ljava/util/HashMap;
    .locals 4

    .line 197
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "window"

    .line 202
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 203
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    .line 204
    new-instance v1, Landroid/util/DisplayMetrics;

    invoke-direct {v1}, Landroid/util/DisplayMetrics;-><init>()V

    .line 206
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_1

    .line 207
    invoke-virtual {p0, v1}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    goto :goto_0

    .line 209
    :cond_1
    invoke-virtual {p0, v1}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    :goto_0
    const-string p0, "height"

    .line 213
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, p0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "width"

    .line 214
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 217
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :goto_1
    return-object v0
.end method

.method public static h()Ljava/lang/String;
    .locals 3

    .line 604
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 605
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    const-string v2, ""

    if-lt v0, v1, :cond_1

    .line 1618
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1622
    :cond_0
    sget-object v0, Landroid/os/Build;->SUPPORTED_ABIS:[Ljava/lang/String;

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 606
    :goto_0
    sput-object v2, Lcom/tkay/expressad/foundation/h/k;->q:Ljava/lang/String;

    goto :goto_3

    .line 608
    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1632
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-nez v1, :cond_2

    move-object v1, v2

    goto :goto_1

    .line 1635
    :cond_2
    sget-object v1, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    .line 609
    :goto_1
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1642
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-nez v1, :cond_3

    goto :goto_2

    .line 1645
    :cond_3
    sget-object v2, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    .line 610
    :goto_2
    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 611
    invoke-virtual {v0}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/h/k;->q:Ljava/lang/String;

    .line 614
    :cond_4
    :goto_3
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->q:Ljava/lang/String;

    return-object v0
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    if-nez p0, :cond_0

    .line 224
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->i:Ljava/lang/String;

    return-object p0

    .line 227
    :cond_0
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/foundation/h/k;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 228
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 229
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 230
    sput-object p0, Lcom/tkay/expressad/foundation/h/k;->i:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 236
    :cond_1
    sget-object p0, Lcom/tkay/expressad/foundation/h/k;->i:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 233
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static i()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public static i(Landroid/content/Context;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    .line 244
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

    .line 246
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->a(Landroid/content/Context;)V

    return-void

    .line 248
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/foundation/h/k$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/h/k$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static j()Ljava/util/UUID;
    .locals 1

    .line 414
    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 416
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method private static j(Landroid/content/Context;)V
    .locals 1

    .line 62
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->h(Landroid/content/Context;)Ljava/lang/String;

    .line 63
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->d(Landroid/content/Context;)Ljava/lang/String;

    .line 64
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->c(Landroid/content/Context;)I

    .line 65
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 66
    invoke-static {v0, p0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    sput-boolean v0, Lcom/tkay/expressad/foundation/g/a;->bX:Z

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    .line 67
    invoke-static {v0, p0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    sput-boolean v0, Lcom/tkay/expressad/foundation/g/a;->bW:Z

    .line 68
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->k(Landroid/content/Context;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catch_0
    :catchall_0
    return-void
.end method

.method private static k()I
    .locals 1

    .line 459
    sget v0, Lcom/tkay/expressad/foundation/h/k;->n:I

    return v0
.end method

.method private static k(Landroid/content/Context;)I
    .locals 1

    if-nez p0, :cond_0

    .line 134
    sget p0, Lcom/tkay/expressad/foundation/h/k;->p:I

    return p0

    .line 136
    :cond_0
    sget v0, Lcom/tkay/expressad/foundation/h/k;->p:I

    if-nez v0, :cond_1

    .line 138
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    sput p0, Lcom/tkay/expressad/foundation/h/k;->p:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 140
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 143
    :cond_1
    :goto_0
    sget p0, Lcom/tkay/expressad/foundation/h/k;->p:I

    return p0
.end method

.method private static l()J
    .locals 3

    .line 542
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "activity"

    .line 544
    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 545
    new-instance v1, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v1}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    .line 546
    invoke-virtual {v0, v1}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 547
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_0

    .line 548
    iget-wide v0, v1, Landroid/app/ActivityManager$MemoryInfo;->totalMem:J

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private static l(Landroid/content/Context;)V
    .locals 1

    .line 297
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/foundation/h/k$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/h/k$2;-><init>(Landroid/content/Context;)V

    .line 349
    invoke-static {}, Lcom/tkay/expressad/foundation/g/h/a;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getActiveCount()I

    move-result p0

    if-gtz p0, :cond_0

    .line 351
    invoke-static {}, Lcom/tkay/expressad/foundation/g/h/a;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    .line 354
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static m()J
    .locals 2

    .line 593
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "activity"

    .line 595
    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 596
    new-instance v1, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v1}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    .line 597
    invoke-virtual {v0, v1}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 598
    iget-wide v0, v1, Landroid/app/ActivityManager$MemoryInfo;->availMem:J

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private static m(Landroid/content/Context;)Z
    .locals 8

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    :try_start_0
    const-string v1, "window"

    .line 442
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 443
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    .line 444
    new-instance v1, Landroid/util/DisplayMetrics;

    invoke-direct {v1}, Landroid/util/DisplayMetrics;-><init>()V

    .line 445
    invoke-virtual {p0, v1}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 446
    iget p0, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float p0, p0

    iget v2, v1, Landroid/util/DisplayMetrics;->xdpi:F

    div-float/2addr p0, v2

    float-to-double v2, p0

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    invoke-static {v2, v3, v4, v5}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    .line 447
    iget p0, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float p0, p0

    iget v1, v1, Landroid/util/DisplayMetrics;->ydpi:F

    div-float/2addr p0, v1

    float-to-double v6, p0

    invoke-static {v6, v7, v4, v5}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v4

    add-double/2addr v2, v4

    .line 448
    invoke-static {v2, v3}, Ljava/lang/Math;->sqrt(D)D

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-wide/high16 v3, 0x4018000000000000L    # 6.0

    cmpl-double p0, v1, v3

    if-ltz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 453
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_1
    return v0
.end method

.method private static n()Ljava/lang/String;
    .locals 1

    .line 618
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 622
    :cond_0
    sget-object v0, Landroid/os/Build;->SUPPORTED_ABIS:[Ljava/lang/String;

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static o()Ljava/lang/String;
    .locals 1

    .line 632
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 635
    :cond_0
    sget-object v0, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    return-object v0
.end method

.method private static p()Ljava/lang/String;
    .locals 1

    .line 642
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 645
    :cond_0
    sget-object v0, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    return-object v0
.end method
