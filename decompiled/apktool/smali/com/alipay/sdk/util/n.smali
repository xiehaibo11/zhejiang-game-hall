.class public Lcom/alipay/sdk/util/n;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/util/n$a;
    }
.end annotation


# static fields
.field static final a:Ljava/lang/String; = "com.alipay.android.app"

.field public static final b:Ljava/lang/String; = "com.eg.android.AlipayGphone"

.field public static final c:I = 0x63

.field public static final d:I = 0x49

.field public static final e:[Ljava/lang/String;

.field public static final f:I = 0x7d

.field private static final g:Ljava/lang/String; = "com.eg.android.AlipayGphoneRC"

.field private static final h:Ljava/lang/String; = ".alipay.wallet"

.field private static final i:[C


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "10.1.5.1013151"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    const-string v2, "10.1.5.1013148"

    aput-object v2, v0, v1

    .line 84
    sput-object v0, Lcom/alipay/sdk/util/n;->e:[Ljava/lang/String;

    const-string v0, "0123456789ABCDEF"

    .line 901
    invoke-virtual {v0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v0

    sput-object v0, Lcom/alipay/sdk/util/n;->i:[C

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 70
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)Landroid/webkit/WebView;
    .locals 8

    const-string v0, "accessibilityTraversal"

    const-string v1, "accessibility"

    const-string v2, "searchBoxJavaBridge_"

    .line 494
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    .line 495
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 497
    invoke-static {v3}, Landroid/webkit/CookieSyncManager;->createInstance(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;

    move-result-object v4

    .line 498
    invoke-virtual {v4}, Landroid/webkit/CookieSyncManager;->sync()V

    .line 499
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v4

    .line 500
    invoke-virtual {v4, p1, p2}, Landroid/webkit/CookieManager;->setCookie(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    invoke-static {}, Landroid/webkit/CookieSyncManager;->getInstance()Landroid/webkit/CookieSyncManager;

    move-result-object p2

    invoke-virtual {p2}, Landroid/webkit/CookieSyncManager;->sync()V

    .line 504
    :cond_0
    new-instance p2, Landroid/widget/LinearLayout;

    invoke-direct {p2, v3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 505
    new-instance v4, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/4 v5, 0x1

    .line 506
    invoke-virtual {p2, v5}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 507
    invoke-virtual {p0, p2, v4}, Landroid/app/Activity;->setContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 509
    new-instance p0, Landroid/webkit/WebView;

    invoke-direct {p0, v3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const/high16 v6, 0x3f800000    # 1.0f

    .line 510
    iput v6, v4, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    const/4 v6, 0x0

    .line 511
    invoke-virtual {p0, v6}, Landroid/webkit/WebView;->setVisibility(I)V

    .line 512
    invoke-virtual {p2, p0, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 514
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p2

    .line 515
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3}, Lcom/alipay/sdk/util/n;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2, v4}, Landroid/webkit/WebSettings;->setUserAgentString(Ljava/lang/String;)V

    .line 516
    sget-object v4, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {p2, v4}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 517
    invoke-virtual {p2, v5}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 518
    invoke-virtual {p2, v5}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 519
    invoke-virtual {p2, v6}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 520
    invoke-virtual {p2, v5}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 521
    invoke-virtual {p2}, Landroid/webkit/WebSettings;->getMinimumFontSize()I

    move-result v4

    add-int/lit8 v4, v4, 0x8

    invoke-virtual {p2, v4}, Landroid/webkit/WebSettings;->setMinimumFontSize(I)V

    .line 522
    invoke-virtual {p2, v6}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 523
    invoke-virtual {p2, v6}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 524
    invoke-virtual {p2, v6}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    .line 525
    invoke-virtual {p2, v6}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    .line 526
    sget-object v4, Landroid/webkit/WebSettings$TextSize;->NORMAL:Landroid/webkit/WebSettings$TextSize;

    invoke-virtual {p2, v4}, Landroid/webkit/WebSettings;->setTextSize(Landroid/webkit/WebSettings$TextSize;)V

    .line 527
    invoke-virtual {p0, v5}, Landroid/webkit/WebView;->setVerticalScrollbarOverlay(Z)V

    .line 528
    new-instance p2, Lcom/alipay/sdk/util/o;

    invoke-direct {p2, v3}, Lcom/alipay/sdk/util/o;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0, p2}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 543
    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v3, 0x7

    if-lt p2, v3, :cond_1

    .line 545
    :try_start_0
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    const-string v3, "setDomStorageEnabled"

    new-array v4, v5, [Ljava/lang/Class;

    sget-object v7, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v7, v4, v6

    invoke-virtual {p2, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 548
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v3

    new-array v4, v5, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v7

    aput-object v7, v4, v6

    invoke-virtual {p2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 554
    :catch_0
    :cond_1
    :try_start_1
    invoke-virtual {p0, v2}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 555
    invoke-virtual {p0, v1}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 556
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 559
    :catchall_0
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    const-string v3, "removeJavascriptInterface"

    new-array v4, v6, [Ljava/lang/Class;

    .line 560
    invoke-virtual {p2, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p2

    if-eqz p2, :cond_2

    new-array v3, v5, [Ljava/lang/Object;

    aput-object v2, v3, v6

    .line 562
    invoke-virtual {p2, p0, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    new-array v2, v5, [Ljava/lang/Object;

    aput-object v1, v2, v6

    .line 563
    invoke-virtual {p2, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    new-array v1, v5, [Ljava/lang/Object;

    aput-object v0, v1, v6

    .line 564
    invoke-virtual {p2, p0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    nop

    .line 569
    :cond_2
    :goto_0
    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x13

    if-lt p2, v0, :cond_3

    .line 570
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p2

    const/4 v0, 0x2

    invoke-virtual {p2, v0}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 572
    :cond_3
    invoke-virtual {p0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-object p0
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)Lcom/alipay/sdk/util/n$a;
    .locals 2

    .line 275
    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isSandBox()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "com.eg.android.AlipayGphone"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "com.eg.android.AlipayGphoneRC"

    :cond_0
    const/4 v0, 0x0

    .line 280
    :try_start_0
    invoke-static {p0, p1}, Lcom/alipay/sdk/util/n;->d(Landroid/content/Context;Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "auth"

    const-string v1, "GetPackageInfoEx"

    .line 282
    invoke-static {p1, v1, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    move-object p0, v0

    .line 285
    :goto_0
    invoke-static {p0}, Lcom/alipay/sdk/util/n;->b(Landroid/content/pm/PackageInfo;)Z

    move-result p1

    if-nez p1, :cond_1

    return-object v0

    .line 288
    :cond_1
    invoke-static {p0, p2, p3}, Lcom/alipay/sdk/util/n;->a(Landroid/content/pm/PackageInfo;ILjava/lang/String;)Lcom/alipay/sdk/util/n$a;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/util/List;)Lcom/alipay/sdk/util/n$a;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/alipay/sdk/data/a$a;",
            ">;)",
            "Lcom/alipay/sdk/util/n$a;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 251
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/alipay/sdk/data/a$a;

    if-nez v1, :cond_2

    goto :goto_0

    .line 255
    :cond_2
    iget-object v2, v1, Lcom/alipay/sdk/data/a$a;->a:Ljava/lang/String;

    iget v3, v1, Lcom/alipay/sdk/data/a$a;->b:I

    iget-object v1, v1, Lcom/alipay/sdk/data/a$a;->c:Ljava/lang/String;

    invoke-static {p0, v2, v3, v1}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)Lcom/alipay/sdk/util/n$a;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 256
    invoke-virtual {v1}, Lcom/alipay/sdk/util/n$a;->a()Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1}, Lcom/alipay/sdk/util/n$a;->b()Z

    move-result v2

    if-nez v2, :cond_1

    return-object v1

    :cond_3
    return-object v0
.end method

.method private static a(Landroid/content/pm/PackageInfo;ILjava/lang/String;)Lcom/alipay/sdk/util/n$a;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 331
    :cond_0
    new-instance v0, Lcom/alipay/sdk/util/n$a;

    invoke-direct {v0, p0, p1, p2}, Lcom/alipay/sdk/util/n$a;-><init>(Landroid/content/pm/PackageInfo;ILjava/lang/String;)V

    return-object v0
.end method

.method public static a()Ljava/lang/String;
    .locals 2

    .line 89
    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isSandBox()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "com.eg.android.AlipayGphoneRC"

    return-object v0

    .line 94
    :cond_0
    :try_start_0
    sget-object v0, Lcom/alipay/sdk/app/i;->a:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/alipay/sdk/data/a$a;

    iget-object v0, v0, Lcom/alipay/sdk/data/a$a;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const-string v0, "com.eg.android.AlipayGphone"

    return-object v0
.end method

.method public static a(I)Ljava/lang/String;
    .locals 8

    .line 673
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    .line 674
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, p0, :cond_3

    const/4 v3, 0x3

    .line 676
    invoke-virtual {v0, v3}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    const-wide/high16 v4, 0x4039000000000000L    # 25.0

    if-eqz v3, :cond_2

    const/4 v6, 0x1

    if-eq v3, v6, :cond_1

    const/4 v4, 0x2

    if-eq v3, v4, :cond_0

    goto :goto_1

    .line 688
    :cond_0
    new-instance v3, Ljava/util/Random;

    invoke-direct {v3}, Ljava/util/Random;-><init>()V

    const/16 v4, 0xa

    invoke-virtual {v3, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 684
    :cond_1
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v6

    mul-double v6, v6, v4

    const-wide v3, 0x4058400000000000L    # 97.0

    add-double/2addr v6, v3

    invoke-static {v6, v7}, Ljava/lang/Math;->round(D)J

    move-result-wide v3

    long-to-int v4, v3

    int-to-char v3, v4

    .line 685
    invoke-static {v3}, Ljava/lang/String;->valueOf(C)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 680
    :cond_2
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v6

    mul-double v6, v6, v4

    const-wide v3, 0x4050400000000000L    # 65.0

    add-double/2addr v6, v3

    invoke-static {v6, v7}, Ljava/lang/Math;->round(D)J

    move-result-wide v3

    long-to-int v4, v3

    int-to-char v3, v4

    .line 681
    invoke-static {v3}, Ljava/lang/String;->valueOf(C)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 692
    :cond_3
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const-string v0, ":"

    const-string v1, ""

    .line 705
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string v2, "activity"

    .line 706
    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/ActivityManager;

    .line 707
    invoke-virtual {p0}, Landroid/app/ActivityManager;->getRunningAppProcesses()Ljava/util/List;

    move-result-object p0

    .line 708
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    move-object v2, v1

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 710
    iget-object v4, v3, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-virtual {v4, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 711
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "#M"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    .line 712
    :cond_1
    iget-object v4, v3, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 713
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "#"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v3, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 714
    invoke-virtual {v2, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_2
    move-object v1, v2

    goto :goto_1

    :catchall_0
    nop

    .line 720
    :goto_1
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result p0

    if-lez p0, :cond_3

    const/4 p0, 0x1

    .line 721
    invoke-virtual {v1, p0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    .line 723
    :cond_3
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result p0

    if-nez p0, :cond_4

    const-string v1, "N"

    :cond_4
    return-object v1
.end method

.method public static a(Landroid/content/pm/Signature;)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "SHA-256"

    .line 892
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    .line 893
    invoke-virtual {p0}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0

    .line 894
    invoke-static {p0}, Lcom/alipay/sdk/util/n;->b([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string v0, "biz"

    const-string v1, "CheckClientSignEx"

    .line 896
    invoke-static {v0, v1, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 108
    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isSandBox()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "com.eg.android.AlipayGphoneRC"

    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "com.eg.android.AlipayGphoneRC.IAlixPay"

    return-object p0

    :cond_0
    const-string p0, "com.eg.android.AlipayGphone.IAlixPay"

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 198
    :try_start_0
    invoke-virtual {p2, p0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    add-int/2addr v1, v2

    .line 199
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    if-gt v1, p0, :cond_0

    return-object v0

    :cond_0
    const/4 p0, 0x0

    .line 203
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 204
    invoke-virtual {p2, p1, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p0

    :cond_1
    const/4 p1, 0x1

    if-ge p0, p1, :cond_2

    .line 207
    invoke-virtual {p2, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 209
    :cond_2
    invoke-virtual {p2, v1, p0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method public static a([B)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "X.509"

    .line 222
    invoke-static {v0}, Ljava/security/cert/CertificateFactory;->getInstance(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;

    move-result-object v0

    .line 223
    new-instance v1, Ljava/io/ByteArrayInputStream;

    invoke-direct {v1, p0}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    .line 224
    invoke-virtual {v0, v1}, Ljava/security/cert/CertificateFactory;->generateCertificate(Ljava/io/InputStream;)Ljava/security/cert/Certificate;

    move-result-object p0

    check-cast p0, Ljava/security/cert/X509Certificate;

    .line 225
    invoke-virtual {p0}, Ljava/security/cert/X509Certificate;->getPublicKey()Ljava/security/PublicKey;

    move-result-object p0

    .line 226
    instance-of v0, p0, Ljava/security/interfaces/RSAPublicKey;

    if-eqz v0, :cond_0

    .line 227
    check-cast p0, Ljava/security/interfaces/RSAPublicKey;

    invoke-interface {p0}, Ljava/security/interfaces/RSAPublicKey;->getModulus()Ljava/math/BigInteger;

    move-result-object p0

    if-eqz p0, :cond_0

    const/16 v0, 0x10

    .line 229
    invoke-virtual {p0, v0}, Ljava/math/BigInteger;->toString(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    const-string v0, "auth"

    const-string v1, "GetPublicKeyFromSignEx"

    .line 233
    invoke-static {v0, v1, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 3

    const/4 v0, 0x0

    .line 379
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "com.alipay.android.app"

    const/16 v2, 0x80

    .line 380
    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x1

    return p0

    :catch_0
    return v0
.end method

.method public static a(Landroid/content/pm/PackageInfo;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 428
    :cond_0
    :try_start_0
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    .line 429
    sget-object v1, Lcom/alipay/sdk/util/n;->e:[Ljava/lang/String;

    aget-object v1, v1, v0

    invoke-static {p0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_2

    sget-object v1, Lcom/alipay/sdk/util/n;->e:[Ljava/lang/String;

    aget-object v1, v1, v2

    invoke-static {p0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    return v0

    :cond_2
    :goto_0
    return v2

    :catchall_0
    return v0
.end method

.method public static a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/app/Activity;)Z
    .locals 8

    const-string p0, "&"

    const-string v0, "&return_url="

    const-string v1, "&end_code="

    .line 747
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    return v3

    :cond_0
    const/4 v2, 0x0

    if-nez p2, :cond_1

    return v2

    .line 753
    :cond_1
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v4

    const-string v5, "alipays://platformapi/startApp?"

    invoke-virtual {v5}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_9

    .line 754
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v4

    const-string v6, "intent://platformapi/startapp?"

    invoke-virtual {v6}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    goto/16 :goto_4

    :cond_2
    const-string v4, "sdklite://h5quit"

    .line 776
    invoke-static {p1, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    const-string v4, "http://m.alipay.com/?action=h5quit"

    .line 777
    invoke-static {p1, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    goto/16 :goto_3

    :cond_3
    const-string v4, "sdklite://h5quit?result="

    .line 783
    invoke-virtual {p1, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_7

    .line 785
    :try_start_0
    invoke-virtual {p1, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v5

    add-int/lit8 v5, v5, 0x18

    invoke-virtual {p1, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 788
    invoke-virtual {v5, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v6

    add-int/lit8 v6, v6, 0xa

    invoke-virtual {v5, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 790
    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    .line 791
    sget-object v6, Lcom/alipay/sdk/app/k;->a:Lcom/alipay/sdk/app/k;

    invoke-virtual {v6}, Lcom/alipay/sdk/app/k;->a()I

    move-result v6

    if-eq v5, v6, :cond_5

    sget-object v6, Lcom/alipay/sdk/app/k;->g:Lcom/alipay/sdk/app/k;

    .line 792
    invoke-virtual {v6}, Lcom/alipay/sdk/app/k;->a()I

    move-result v6

    if-ne v5, v6, :cond_4

    goto :goto_0

    .line 831
    :cond_4
    sget-object p0, Lcom/alipay/sdk/app/k;->b:Lcom/alipay/sdk/app/k;

    .line 832
    invoke-virtual {p0}, Lcom/alipay/sdk/app/k;->a()I

    move-result p0

    invoke-static {p0}, Lcom/alipay/sdk/app/k;->b(I)Lcom/alipay/sdk/app/k;

    move-result-object p0

    .line 834
    invoke-virtual {p0}, Lcom/alipay/sdk/app/k;->a()I

    move-result p1

    invoke-virtual {p0}, Lcom/alipay/sdk/app/k;->b()Ljava/lang/String;

    move-result-object p0

    const-string v0, ""

    invoke-static {p1, p0, v0}, Lcom/alipay/sdk/app/j;->a(ILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 833
    invoke-static {p0}, Lcom/alipay/sdk/app/j;->a(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 794
    :cond_5
    :goto_0
    sget-boolean v6, Lcom/alipay/sdk/cons/a;->s:Z

    if-eqz v6, :cond_6

    .line 795
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    .line 796
    invoke-static {p1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 797
    invoke-static {p1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 800
    invoke-virtual {v7, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v4

    add-int/lit8 v4, v4, 0x18

    .line 802
    invoke-virtual {v7, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 799
    invoke-virtual {v7, v4, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 804
    invoke-virtual {v1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 805
    aget-object v1, v1, v2

    .line 808
    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v2, v2, 0xc

    .line 812
    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 813
    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 816
    invoke-virtual {p1, p0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v0

    .line 815
    invoke-virtual {p1, v2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 814
    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 818
    invoke-virtual {p1, p0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    .line 817
    invoke-virtual {v6, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 820
    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    .line 822
    :cond_6
    invoke-static {p1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 823
    invoke-virtual {p0, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result p1

    add-int/lit8 p1, p1, 0x18

    .line 825
    invoke-virtual {p0, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    .line 823
    invoke-virtual {p0, p1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    .line 827
    :goto_1
    invoke-static {v5}, Lcom/alipay/sdk/app/k;->b(I)Lcom/alipay/sdk/app/k;

    move-result-object p1

    .line 828
    invoke-virtual {p1}, Lcom/alipay/sdk/app/k;->a()I

    move-result v0

    .line 829
    invoke-virtual {p1}, Lcom/alipay/sdk/app/k;->b()Ljava/lang/String;

    move-result-object p1

    .line 828
    invoke-static {v0, p1, p0}, Lcom/alipay/sdk/app/j;->a(ILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/alipay/sdk/app/j;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    .line 837
    :catch_0
    invoke-static {}, Lcom/alipay/sdk/app/j;->e()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/alipay/sdk/app/j;->a(Ljava/lang/String;)V

    .line 839
    :goto_2
    new-instance p0, Lcom/alipay/sdk/util/p;

    invoke-direct {p0, p2}, Lcom/alipay/sdk/util/p;-><init>(Landroid/app/Activity;)V

    .line 845
    invoke-virtual {p2, p0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return v3

    :cond_7
    return v2

    .line 778
    :cond_8
    :goto_3
    invoke-static {}, Lcom/alipay/sdk/app/j;->c()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/alipay/sdk/app/j;->a(Ljava/lang/String;)V

    .line 779
    invoke-virtual {p2}, Landroid/app/Activity;->finish()V

    return v3

    .line 760
    :cond_9
    :goto_4
    :try_start_1
    sget-object p0, Lcom/alipay/sdk/app/i;->a:Ljava/util/List;

    invoke-static {p2, p0}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/util/List;)Lcom/alipay/sdk/util/n$a;

    move-result-object p0

    if-eqz p0, :cond_c

    .line 761
    invoke-virtual {p0}, Lcom/alipay/sdk/util/n$a;->b()Z

    move-result v0

    if-nez v0, :cond_c

    invoke-virtual {p0}, Lcom/alipay/sdk/util/n$a;->a()Z

    move-result p0

    if-eqz p0, :cond_a

    goto :goto_5

    :cond_a
    const-string p0, "intent://platformapi/startapp"

    .line 765
    invoke-virtual {p1, p0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_b

    const-string p0, "intent://platformapi/startapp\\?"

    .line 766
    invoke-virtual {p1, p0, v5}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 769
    :cond_b
    new-instance p0, Landroid/content/Intent;

    const-string v0, "android.intent.action.VIEW"

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {p0, v0, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 770
    invoke-virtual {p2, p0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    nop

    :catchall_0
    :cond_c
    :goto_5
    return v3
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 483
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Android "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 864
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/16 v0, 0x80

    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 866
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "biz"

    const-string v0, "GetPackageInfoEx"

    .line 868
    invoke-static {p1, v0, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method private static b([B)Ljava/lang/String;
    .locals 6

    .line 903
    new-instance v0, Ljava/lang/StringBuffer;

    array-length v1, p0

    mul-int/lit8 v1, v1, 0x3

    add-int/lit8 v1, v1, -0x1

    invoke-direct {v0, v1}, Ljava/lang/StringBuffer;-><init>(I)V

    .line 904
    array-length v1, p0

    add-int/lit8 v1, v1, -0x1

    const/4 v2, 0x0

    :goto_0
    if-gt v2, v1, :cond_1

    .line 906
    aget-byte v3, p0, v2

    .line 907
    sget-object v4, Lcom/alipay/sdk/util/n;->i:[C

    and-int/lit16 v5, v3, 0xf0

    shr-int/lit8 v5, v5, 0x4

    aget-char v4, v4, v5

    invoke-virtual {v0, v4}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    .line 908
    sget-object v4, Lcom/alipay/sdk/util/n;->i:[C

    and-int/lit8 v3, v3, 0xf

    aget-char v3, v4, v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    if-ge v2, v1, :cond_0

    const/16 v3, 0x3a

    .line 910
    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 913
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b(Ljava/lang/String;)Ljava/util/Map;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 122
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "&"

    .line 123
    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 126
    array-length v1, p0

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, p0, v3

    const/4 v5, 0x1

    const-string v6, "="

    .line 127
    invoke-virtual {v4, v6, v5}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v5

    const/4 v6, -0x1

    if-ne v6, v5, :cond_0

    goto :goto_1

    .line 131
    :cond_0
    invoke-virtual {v4, v2, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    add-int/lit8 v5, v5, 0x1

    .line 132
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 133
    invoke-static {v4}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v6, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 3

    const/4 v0, 0x0

    .line 445
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    .line 446
    invoke-static {}, Lcom/alipay/sdk/util/n;->a()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-nez p0, :cond_0

    return v0

    .line 451
    :cond_0
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x63

    if-ge p0, v1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0

    :catchall_0
    move-exception p0

    .line 457
    invoke-static {p0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    return v0
.end method

.method public static b(Landroid/content/Context;Ljava/util/List;)Z
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/alipay/sdk/data/a$a;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    .line 396
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catch_0
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/alipay/sdk/data/a$a;

    if-nez v1, :cond_1

    goto :goto_0

    .line 401
    :cond_1
    iget-object v1, v1, Lcom/alipay/sdk/data/a$a;->a:Ljava/lang/String;

    .line 404
    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isSandBox()Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v2, "com.eg.android.AlipayGphone"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v1, "com.eg.android.AlipayGphoneRC"

    .line 408
    :cond_2
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v3, 0x80

    .line 410
    :try_start_1
    invoke-virtual {v2, v1, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_3
    return v0

    :catchall_0
    move-exception p0

    const-string p1, "biz"

    const-string v1, "CheckLaunchAppExistEx"

    .line 417
    invoke-static {p1, v1, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method private static b(Landroid/content/pm/PackageInfo;)Z
    .locals 3

    const-string v0, ""

    const/4 v1, 0x0

    if-nez p0, :cond_0

    .line 302
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "info == null"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 303
    :cond_0
    iget-object v2, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    if-nez v2, :cond_1

    .line 304
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "info.signatures == null"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 305
    :cond_1
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    array-length p0, p0

    if-gtz p0, :cond_2

    .line 306
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "info.signatures.length <= 0"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_2
    const/4 v1, 0x1

    :goto_0
    if-nez v1, :cond_3

    const-string p0, "auth"

    const-string v2, "NotIncludeSignatures"

    .line 312
    invoke-static {p0, v2, v0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return v1
.end method

.method public static c(Landroid/content/Context;Ljava/lang/String;)I
    .locals 1

    .line 880
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/16 v0, 0x80

    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 882
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "biz"

    const-string v0, "GetPackageInfoEx"

    .line 884
    invoke-static {p1, v0, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p0, -0x1

    :goto_0
    return p0
.end method

.method public static c()Ljava/lang/String;
    .locals 4

    .line 584
    invoke-static {}, Lcom/alipay/sdk/util/n;->d()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-"

    .line 585
    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, -0x1

    if-eq v1, v3, :cond_0

    .line 587
    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    :cond_0
    const-string v1, "\n"

    .line 589
    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    if-eq v1, v3, :cond_1

    .line 591
    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 593
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Linux "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    .line 465
    invoke-static {}, Lcom/alipay/sdk/util/n;->b()Ljava/lang/String;

    move-result-object v0

    .line 468
    invoke-static {}, Lcom/alipay/sdk/util/n;->c()Ljava/lang/String;

    move-result-object v1

    .line 471
    invoke-static {p0}, Lcom/alipay/sdk/util/n;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 474
    invoke-static {p0}, Lcom/alipay/sdk/util/n;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 476
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, " ("

    .line 477
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ";"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 478
    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ")"

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "(sdk android)"

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 479
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c(Ljava/lang/String;)Ljava/util/Map;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 142
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x4

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    const/16 v1, 0x3f

    .line 143
    invoke-virtual {p0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_2

    .line 145
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    if-ge v1, v3, :cond_2

    add-int/2addr v1, v4

    .line 146
    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    const-string v1, "&"

    .line 147
    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 148
    array-length v1, p0

    const/4 v3, 0x0

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v1, :cond_2

    aget-object v6, p0, v5

    const/16 v7, 0x3d

    .line 149
    invoke-virtual {v6, v7, v4}, Ljava/lang/String;->indexOf(II)I

    move-result v7

    if-eq v7, v2, :cond_1

    .line 151
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v8

    sub-int/2addr v8, v4

    if-lt v7, v8, :cond_0

    goto :goto_1

    .line 154
    :cond_0
    invoke-virtual {v6, v3, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    add-int/lit8 v7, v7, 0x1

    .line 155
    invoke-virtual {v6, v7}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/alipay/sdk/util/n;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 156
    invoke-interface {v0, v8, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method private static c(Landroid/content/pm/PackageInfo;)Z
    .locals 1

    .line 731
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->flags:I

    and-int/lit8 v0, p0, 0x1

    if-nez v0, :cond_0

    and-int/lit16 p0, p0, 0x80

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static d(Landroid/content/Context;Ljava/lang/String;)Landroid/content/pm/PackageInfo;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/content/pm/PackageManager$NameNotFoundException;
        }
    .end annotation

    .line 320
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/16 v0, 0xc0

    .line 321
    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    return-object p0
.end method

.method public static d()Ljava/lang/String;
    .locals 6

    const-string v0, "\n"

    const-string v1, "Unavailable"

    .line 600
    :try_start_0
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    const-string v4, "/proc/version"

    invoke-direct {v3, v4}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V

    const/16 v4, 0x100

    invoke-direct {v2, v3, v4}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 602
    :try_start_1
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 604
    :try_start_2
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    const-string v2, "\\w+\\s+\\w+\\s+([^\\s]+)\\s+\\(([^\\s@]+(?:@[^\\s.]+)?)[^)]*\\)\\s+\\((?:[^(]*\\([^)]*\\))?[^)]*\\)\\s+([^\\s]+)\\s+(?:PREEMPT\\s+)?(.+)"

    .line 619
    invoke-static {v2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v2

    .line 620
    invoke-virtual {v2, v3}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    .line 622
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->matches()Z

    move-result v3

    if-nez v3, :cond_0

    return-object v1

    .line 624
    :cond_0
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->groupCount()I

    move-result v3

    const/4 v4, 0x4

    if-ge v3, v4, :cond_1

    return-object v1

    .line 627
    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    const/4 v5, 0x1

    invoke-virtual {v2, v5}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x2

    invoke-virtual {v2, v5}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x3

    .line 628
    invoke-virtual {v2, v5}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :catchall_0
    move-exception v0

    .line 604
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    throw v0
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    return-object v1
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 636
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    .line 637
    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    .line 638
    iget-object p0, p0, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;

    .line 639
    invoke-virtual {p0}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 1

    .line 168
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 170
    :catchall_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :goto_0
    return-object v0
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 643
    invoke-static {p0}, Lcom/alipay/sdk/util/n;->f(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 644
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 645
    iget v1, p0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "*"

    .line 646
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 647
    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 649
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static e(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "utf-8"

    .line 177
    invoke-static {p0, v0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    const-string v0, "biz"

    const-string v1, "H5PayDataAnalysisError"

    .line 179
    invoke-static {v0, v1, p0}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string p0, ""

    return-object p0
.end method

.method public static f(Landroid/content/Context;)Landroid/util/DisplayMetrics;
    .locals 2

    .line 653
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 654
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string v1, "window"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 655
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    .line 656
    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    return-object v0
.end method

.method public static f(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "^http(s)?://([a-z0-9_\\-]+\\.)*(alipaydev|alipay|taobao)\\.(com|net)(:\\d+)?(/.*)?$"

    .line 697
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 698
    invoke-virtual {v0, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    .line 699
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->matches()Z

    move-result p0

    return p0
.end method

.method public static g(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 662
    invoke-static {p0}, Lcom/alipay/sdk/util/m;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "://"

    .line 663
    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    const-string p0, "-1;-1"

    return-object p0
.end method

.method public static i(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 858
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/alipay/sdk/util/n;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static j(Landroid/content/Context;)I
    .locals 1

    .line 874
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/alipay/sdk/util/n;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    return p0
.end method
