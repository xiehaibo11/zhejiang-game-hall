.class public Lcom/ss/android/socialbase/appdownloader/df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/appdownloader/df$pp;,
        Lcom/ss/android/socialbase/appdownloader/df$rg;,
        Lcom/ss/android/socialbase/appdownloader/df$q;,
        Lcom/ss/android/socialbase/appdownloader/df$df;,
        Lcom/ss/android/socialbase/appdownloader/df$pt;
    }
.end annotation


# static fields
.field private static df:Lcom/ss/android/socialbase/appdownloader/df$q;

.field private static q:Lcom/ss/android/socialbase/appdownloader/df$rg;

.field private static final rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 51
    const-class v0, Lcom/ss/android/socialbase/appdownloader/df;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/df;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;
    .locals 3

    .line 516
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/rg;

    invoke-direct {v0}, Lcom/ss/android/socialbase/appdownloader/rg;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "type"

    .line 520
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 521
    iput-object v1, v0, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    const-string v1, "vbi"

    .line 523
    iput-object v1, v0, Lcom/ss/android/socialbase/appdownloader/rg;->pp:Ljava/lang/String;

    .line 524
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1, p0, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x0

    .line 526
    iput p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_0

    :cond_1
    const/4 p0, 0x3

    .line 528
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    :goto_0
    return-object v0
.end method

.method public static df(ILorg/json/JSONObject;)V
    .locals 3

    const-string v0, "show_unknown_source_on_startup"

    .line 839
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 840
    :goto_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "scene"

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    .line 842
    :goto_1
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 844
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 846
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    move-result-object p1

    const-string v0, "guide_auth_dialog_cancel"

    invoke-interface {p1, p0, v0, v1}, Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;->onUnityEvent(ILjava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static df(IZZ)V
    .locals 4

    .line 869
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "scene"

    const/4 v2, 0x1

    const/4 v3, 0x2

    if-eqz p1, :cond_0

    move p1, v2

    goto :goto_0

    :cond_0
    move p1, v3

    .line 871
    :goto_0
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "result_code"

    if-eqz p2, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    .line 872
    :goto_1
    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 874
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 876
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    move-result-object p1

    const-string p2, "guide_auth_result"

    invoke-interface {p1, p0, p2, v0}, Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;->onUnityEvent(ILjava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic df(Landroid/content/Context;)Z
    .locals 0

    .line 49
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pt(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method private static df(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    const/4 v0, 0x1

    .line 896
    invoke-static {p0, p1, v0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;Z)Z

    move-result p0

    return p0
.end method

.method private static df(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_7

    if-nez p2, :cond_0

    goto :goto_2

    .line 376
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    .line 377
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    :cond_1
    const-string v2, "custom"

    .line 380
    iput-object v2, p3, Lcom/ss/android/socialbase/appdownloader/rg;->pt:Ljava/lang/String;

    .line 381
    invoke-static {p0, v2, p2, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/appdownloader/rg/rg;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 382
    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/rg/rg;->rg()Z

    move-result v3

    if-nez v3, :cond_2

    goto :goto_1

    .line 386
    :cond_2
    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/rg/rg;->df()Landroid/content/Intent;

    move-result-object v2

    if-nez v2, :cond_3

    return v0

    .line 390
    :cond_3
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 391
    invoke-static {v3, p1, p2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Ljava/io/File;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 392
    invoke-static {p0, v2}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    const/4 p1, 0x1

    if-eqz p0, :cond_4

    .line 393
    iput v0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    return p1

    .line 396
    :cond_4
    iput p1, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_0

    :cond_5
    const/4 p0, 0x6

    .line 399
    iput p0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :goto_0
    return v0

    :cond_6
    :goto_1
    const/4 p0, 0x3

    .line 383
    iput p0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :cond_7
    :goto_2
    return v0
.end method

.method private static pp(Landroid/content/Context;)Z
    .locals 1

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 789
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/pm/PackageManager;->canRequestPackageInstalls()Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    return v0
.end method

.method private static pt(ILorg/json/JSONObject;)V
    .locals 3

    const-string v0, "show_unknown_source_on_startup"

    .line 810
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 811
    :goto_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "scene"

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    .line 813
    :goto_1
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 815
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 817
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    move-result-object p1

    const-string v0, "guide_auth_dialog_show"

    invoke-interface {p1, p0, v0, v1}, Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;->onUnityEvent(ILjava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private static pt(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 772
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "install_non_market_apps"

    invoke-static {p0, v1, v0}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :catchall_0
    :goto_0
    return v0
.end method

.method public static q(ILorg/json/JSONObject;)V
    .locals 3

    const-string v0, "show_unknown_source_on_startup"

    .line 854
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 855
    :goto_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "scene"

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    .line 857
    :goto_1
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 859
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 861
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    move-result-object p1

    const-string v0, "guide_auth_open_setting"

    invoke-interface {p1, p0, v0, v1}, Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;->onUnityEvent(ILjava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic q(Landroid/content/Context;)Z
    .locals 0

    .line 49
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pp(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method public static rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)I
    .locals 8

    const-string v0, "download_dir"

    .line 412
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const-string v2, "dir_name"

    .line 415
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 416
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-nez v0, :cond_1

    const/4 p0, 0x5

    return p0

    .line 421
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v2, "get_download_info_by_list"

    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const/4 p0, 0x4

    return p0

    :cond_2
    const-string v0, "ah_plans"

    .line 432
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    const/4 v2, -0x1

    if-eqz v0, :cond_9

    .line 434
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    move v4, v1

    :goto_1
    if-ge v4, v3, :cond_9

    .line 437
    invoke-virtual {v0, v4}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v5

    .line 438
    invoke-static {v5}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;)Z

    move-result v6

    if-eqz v6, :cond_8

    const-string v6, "type"

    .line 439
    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "plan_a"

    .line 441
    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_6

    const-string v7, "plan_b"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_6

    const-string v7, "plan_e"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_6

    const-string v7, "plan_f"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    goto :goto_3

    :cond_3
    const-string v7, "plan_d"

    .line 448
    invoke-virtual {v7, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_5

    const-string v7, "plan_h"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    goto :goto_2

    :cond_4
    const-string v7, "plan_g"

    .line 451
    invoke-virtual {v7, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_8

    .line 452
    invoke-static {v5, p0}, Lcom/ss/android/socialbase/appdownloader/df;->df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object v2

    .line 453
    iget v5, v2, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    .line 454
    iget v2, v2, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-nez v2, :cond_7

    :cond_5
    :goto_2
    return v1

    .line 443
    :cond_6
    :goto_3
    invoke-static {v5, p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object v2

    .line 444
    iget v5, v2, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    .line 445
    iget v2, v2, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-nez v2, :cond_7

    return v1

    :cond_7
    move v2, v5

    :cond_8
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_9
    return v2
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/df$rg;)Lcom/ss/android/socialbase/appdownloader/df$rg;
    .locals 0

    .line 49
    sput-object p0, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    return-object p0
.end method

.method public static rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;
    .locals 8

    .line 472
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/rg;

    invoke-direct {v0}, Lcom/ss/android/socialbase/appdownloader/rg;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "type"

    .line 476
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 477
    iput-object v1, v0, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    const-string v2, "plan_b"

    .line 479
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x0

    if-eqz v1, :cond_2

    const-string v1, "custom"

    .line 481
    iput-object v1, v0, Lcom/ss/android/socialbase/appdownloader/rg;->pp:Ljava/lang/String;

    .line 483
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v1, p0, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 485
    iput v3, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    return-object v0

    .line 488
    :cond_1
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    goto :goto_1

    :cond_2
    const-string v1, "device_plans"

    .line 493
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 494
    iput-object v1, v0, Lcom/ss/android/socialbase/appdownloader/rg;->pp:Ljava/lang/String;

    .line 495
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    const-string v4, ","

    .line 496
    invoke-virtual {v1, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 497
    array-length v4, v1

    move v5, v3

    :goto_0
    if-ge v5, v4, :cond_4

    aget-object v6, v1, v5

    .line 498
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v6, p0, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 500
    iput v3, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    return-object v0

    .line 503
    :cond_3
    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_4
    :goto_1
    return-object v0
.end method

.method public static rg(Lorg/json/JSONObject;Ljava/lang/String;Landroid/content/Context;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;
    .locals 2

    .line 552
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/rg;

    invoke-direct {v0}, Lcom/ss/android/socialbase/appdownloader/rg;-><init>()V

    if-eqz p0, :cond_4

    .line 554
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "type"

    .line 557
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    const/4 p0, 0x0

    const-string v1, "bi"

    .line 558
    invoke-virtual {p3, v1, p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p3

    const/4 v1, 0x1

    if-ne p3, v1, :cond_1

    .line 561
    iput p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    return-object v0

    .line 565
    :cond_1
    invoke-static {p2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;)Z

    move-result p2

    if-eqz p2, :cond_2

    const/4 p0, 0x2

    .line 566
    iput p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_0

    .line 567
    :cond_2
    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/fw$rg;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 568
    iput p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_0

    :cond_3
    const/16 p0, 0x9

    .line 571
    iput p0, v0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :cond_4
    :goto_0
    return-object v0
.end method

.method public static rg(Ljava/lang/Throwable;)Ljava/lang/String;
    .locals 2

    .line 924
    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    .line 925
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x320

    if-le v0, v1, :cond_0

    const/4 v0, 0x0

    const/16 v1, 0x1f4

    .line 926
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    :cond_0
    return-object p0
.end method

.method public static rg(ILorg/json/JSONObject;)V
    .locals 3

    const-string v0, "show_unknown_source_on_startup"

    .line 824
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 825
    :goto_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "scene"

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    .line 827
    :goto_1
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 829
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 831
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getEventListener()Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;

    move-result-object p1

    const-string v0, "guide_auth_dialog_confirm"

    invoke-interface {p1, p0, v0, v1}, Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;->onUnityEvent(ILjava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic rg(IZZ)V
    .locals 0

    .line 49
    invoke-static {p0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/df;->df(IZZ)V

    return-void
.end method

.method private static rg(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/df$df;)V
    .locals 7

    .line 887
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    if-eqz v0, :cond_0

    .line 888
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    sget-object v1, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    const/4 v0, 0x0

    .line 889
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    .line 891
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/df$rg;

    move-object v1, v0

    move-object v2, p0

    move-object v3, p1

    move v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/ss/android/socialbase/appdownloader/df$rg;-><init>(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/df$df;)V

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    .line 892
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object p0

    sget-object p1, Lcom/ss/android/socialbase/appdownloader/df;->q:Lcom/ss/android/socialbase/appdownloader/df$rg;

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method

.method public static rg(Lcom/ss/android/socialbase/appdownloader/df$q;)V
    .locals 0

    .line 973
    sput-object p0, Lcom/ss/android/socialbase/appdownloader/df;->df:Lcom/ss/android/socialbase/appdownloader/df$q;

    return-void
.end method

.method private static rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V
    .locals 2

    .line 584
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    .line 585
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    mul-int/lit8 v0, v0, 0xa

    add-int/2addr v0, p1

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_0

    .line 587
    :cond_0
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :goto_0
    return-void
.end method

.method public static rg()Z
    .locals 2

    .line 802
    sget v0, Lcom/ss/android/socialbase/appdownloader/df$pp;->rg:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static rg(Landroid/content/Context;)Z
    .locals 3

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 749
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v1

    const/16 v2, 0x1a

    if-eqz v1, :cond_1

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v1, v2, :cond_1

    .line 750
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pt(Landroid/content/Context;)Z

    move-result p0

    return p0

    .line 751
    :cond_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v1, v2, :cond_2

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    iget v1, v1, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    if-lt v1, v2, :cond_2

    .line 752
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pp(Landroid/content/Context;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    :cond_2
    return v0
.end method

.method static synthetic rg(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 0

    .line 49
    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method public static rg(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;)Z
    .locals 3

    const/4 v0, 0x0

    .line 706
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v1

    const/16 v2, 0x1a

    if-eqz v1, :cond_0

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v1, v2, :cond_0

    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pt(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 707
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/rg/c;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/appdownloader/rg/c;-><init>(Landroid/content/Context;)V

    .line 708
    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/rg/c;->rg()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 709
    new-instance v2, Lcom/ss/android/socialbase/appdownloader/df$1;

    invoke-direct {v2}, Lcom/ss/android/socialbase/appdownloader/df$1;-><init>()V

    invoke-static {p0, p1, p2, p3, v2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/df$df;)V

    .line 715
    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/rg/c;->df()Landroid/content/Intent;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    return p0

    .line 718
    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v1, v2, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    iget v1, v1, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    if-lt v1, v2, :cond_1

    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->pp(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 719
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/rg/df;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/appdownloader/rg/df;-><init>(Landroid/content/Context;)V

    .line 720
    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/rg/df;->rg()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 721
    new-instance v2, Lcom/ss/android/socialbase/appdownloader/df$2;

    invoke-direct {v2}, Lcom/ss/android/socialbase/appdownloader/df$2;-><init>()V

    invoke-static {p0, p1, p2, p3, v2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/df$df;)V

    .line 727
    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/rg/df;->df()Landroid/content/Intent;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    :cond_1
    return v0
.end method

.method public static rg(Landroid/content/Context;Landroid/content/Intent;Lorg/json/JSONObject;ILcom/ss/android/socialbase/appdownloader/rg;)Z
    .locals 9

    const/4 v0, 0x0

    if-eqz p0, :cond_8

    if-nez p2, :cond_0

    goto/16 :goto_1

    :cond_0
    const-wide/16 v1, 0x0

    const-string v3, "jump_interval"

    .line 653
    invoke-virtual {p2, v3, v1, v2}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v3

    cmp-long v5, v3, v1

    if-gtz v5, :cond_1

    return v0

    :cond_1
    const-string v5, "sp_ah_config"

    .line 657
    invoke-virtual {p0, v5, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v5

    const-string v6, "last_jump_unknown_source_time"

    .line 658
    invoke-interface {v5, v6, v1, v2}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    .line 660
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    sub-long/2addr v7, v1

    const-wide/32 v1, 0xea60

    div-long/2addr v7, v1

    cmp-long v1, v7, v3

    if-gez v1, :cond_2

    return v0

    .line 664
    :cond_2
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_8

    .line 665
    invoke-interface {v5}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-interface {v1, v6, v2, v3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    const-string v1, "show_unknown_source_dialog"

    .line 666
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    move v1, v2

    goto :goto_0

    :cond_3
    move v1, v0

    :goto_0
    if-eqz v1, :cond_6

    .line 668
    new-instance v1, Landroid/content/Intent;

    const-class v3, Lcom/ss/android/socialbase/appdownloader/view/JumpUnknownSourceActivity;

    invoke-direct {v1, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v3, 0x10000000

    .line 669
    invoke-virtual {v1, v3}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v3, "intent"

    .line 670
    invoke-virtual {v1, v3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 671
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v3, "config"

    invoke-virtual {v1, v3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "id"

    .line 672
    invoke-virtual {v1, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 674
    :try_start_0
    invoke-static {p0, v1, v0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;Z)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 676
    invoke-static {p3, p2}, Lcom/ss/android/socialbase/appdownloader/df;->pt(ILorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_4
    return v2

    :catchall_0
    move-exception p0

    if-eqz p4, :cond_5

    .line 681
    iput v2, p4, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    .line 682
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "tryShowUnknownSourceDialog"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, p4, Lcom/ss/android/socialbase/appdownloader/rg;->q:Ljava/lang/String;

    :cond_5
    return v0

    .line 687
    :cond_6
    invoke-static {p0, p1, p3, p2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;ILorg/json/JSONObject;)Z

    move-result p0

    if-eqz p0, :cond_7

    .line 688
    invoke-static {p3, p2}, Lcom/ss/android/socialbase/appdownloader/df;->q(ILorg/json/JSONObject;)V

    :cond_7
    return v2

    :cond_8
    :goto_1
    return v0
.end method

.method public static rg(Landroid/content/Context;Landroid/content/Intent;Z)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "start_only_for_android"

    const/4 v2, 0x1

    if-eqz p2, :cond_1

    .line 907
    :try_start_0
    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 908
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    return v0

    .line 916
    :cond_1
    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 917
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return v2

    :cond_2
    :goto_0
    return v0
.end method

.method private static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/content/Intent;Lorg/json/JSONObject;Z)Z
    .locals 11

    const/4 v0, 0x0

    if-eqz p3, :cond_11

    if-nez p1, :cond_0

    goto/16 :goto_8

    .line 106
    :cond_0
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/rg;

    invoke-direct {v1}, Lcom/ss/android/socialbase/appdownloader/rg;-><init>()V

    const-string v2, "type"

    .line 107
    invoke-virtual {p3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 108
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_11

    .line 109
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v3

    .line 113
    iput-object v2, v1, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    .line 114
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v4

    const/4 v5, 0x2

    const/4 v6, 0x4

    const-string v7, "plan_f"

    const-string v8, "plan_d"

    const/4 v9, -0x1

    const/4 v10, 0x1

    packed-switch v4, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v4, "plan_h"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x6

    goto :goto_1

    :pswitch_1
    const-string v4, "plan_g"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x5

    goto :goto_1

    :pswitch_2
    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    move v4, v5

    goto :goto_1

    :pswitch_3
    const-string v4, "plan_e"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    move v4, v10

    goto :goto_1

    :pswitch_4
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    move v4, v6

    goto :goto_1

    :pswitch_5
    const-string v4, "plan_c"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x7

    goto :goto_1

    :pswitch_6
    const-string v4, "plan_b"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x3

    goto :goto_1

    :pswitch_7
    const-string v4, "plan_a"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    move v4, v0

    goto :goto_1

    :cond_1
    :goto_0
    move v4, v9

    :goto_1
    packed-switch v4, :pswitch_data_1

    goto/16 :goto_7

    .line 216
    :pswitch_8
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    if-ge v2, v3, :cond_2

    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v2

    if-eqz v2, :cond_f

    :cond_2
    const-string v2, "enable_for_all"

    .line 217
    invoke-virtual {p3, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-ne v2, v10, :cond_3

    move v2, v10

    goto :goto_2

    :cond_3
    move v2, v0

    :goto_2
    if-nez v2, :cond_4

    if-eqz p4, :cond_f

    :cond_4
    const-string p4, "show_unknown_source_on_startup"

    .line 219
    invoke-virtual {p3, p4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p4

    if-ne p4, v10, :cond_5

    goto :goto_3

    :cond_5
    move v10, v0

    :goto_3
    if-nez v10, :cond_f

    .line 221
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p4

    invoke-static {p0, p2, p3, p4, v1}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;Lorg/json/JSONObject;ILcom/ss/android/socialbase/appdownloader/rg;)Z

    move-result p0

    goto :goto_4

    :pswitch_9
    const-string p4, "bh"

    .line 189
    invoke-virtual {v3, p4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    const-string v2, "s"

    invoke-virtual {v3, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p4, v2}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    .line 190
    invoke-static {p3, p4, p0, v3}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lorg/json/JSONObject;Ljava/lang/String;Landroid/content/Context;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object p3

    .line 191
    iget v2, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-eqz v2, :cond_6

    move-object v1, p3

    goto/16 :goto_7

    .line 195
    :cond_6
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p3

    .line 196
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v2

    invoke-static {v2, p0, p4}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    move-result p4

    if-eqz p4, :cond_7

    .line 199
    :try_start_0
    invoke-static {p0, p2}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;Landroid/content/Intent;)I

    .line 200
    iput v0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 207
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object p4

    invoke-static {p4, p0, p3}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    goto :goto_5

    :catchall_0
    move-exception p4

    .line 203
    :try_start_1
    iput v10, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    .line 204
    invoke-virtual {p4}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p4

    iput-object p4, v1, Lcom/ss/android/socialbase/appdownloader/rg;->q:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 207
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object p4

    invoke-static {p4, p0, p3}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    goto/16 :goto_7

    :catchall_1
    move-exception p1

    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object p2

    invoke-static {p2, p0, p3}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    throw p1

    :cond_7
    const/16 p0, 0xb

    .line 210
    iput p0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto/16 :goto_7

    .line 181
    :pswitch_a
    invoke-static {p3, v3}, Lcom/ss/android/socialbase/appdownloader/df;->df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object p4

    .line 182
    iget v2, p4, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-eqz v2, :cond_8

    goto :goto_6

    .line 186
    :cond_8
    invoke-static {p0, p1, p3, v1, v3}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z

    move-result p0

    :goto_4
    move v0, p0

    goto/16 :goto_7

    .line 161
    :pswitch_b
    iput-object v8, v1, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    .line 162
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->q()Z

    move-result p3

    if-nez p3, :cond_9

    .line 163
    iput v5, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto/16 :goto_7

    .line 168
    :cond_9
    :try_start_2
    invoke-static {p0, p2}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;Landroid/content/Intent;)I

    .line 170
    iput v0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :goto_5
    move v0, v10

    goto :goto_7

    :catchall_2
    move-exception p0

    .line 174
    iput v6, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    .line 175
    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->q:Ljava/lang/String;

    goto :goto_7

    .line 144
    :pswitch_c
    invoke-static {p3, v3}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object p4

    .line 145
    iget v2, p4, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-eqz v2, :cond_a

    goto :goto_6

    .line 149
    :cond_a
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSavePathRedirected()Z

    move-result p4

    if-nez p4, :cond_b

    .line 155
    invoke-virtual {p1, v9}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAntiHijackErrorCode(I)I

    move-result p0

    iput p0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_7

    .line 158
    :cond_b
    invoke-static {p0, p1, p3, v1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;)Z

    move-result p0

    goto :goto_4

    .line 118
    :pswitch_d
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSavePathRedirected()Z

    move-result p4

    if-nez p4, :cond_c

    .line 124
    invoke-virtual {p1, v9}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAntiHijackErrorCode(I)I

    move-result p0

    iput p0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_7

    .line 130
    :cond_c
    :pswitch_e
    invoke-static {p3, v3}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object p4

    .line 131
    iget v3, p4, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-eqz v3, :cond_d

    :goto_6
    move-object v1, p4

    goto :goto_7

    .line 136
    :cond_d
    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_e

    const-string p4, "file_content_uri"

    invoke-virtual {p1, p4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDBJsonString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-eqz p4, :cond_e

    const/16 p0, 0xa

    .line 137
    invoke-virtual {p1, p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAntiHijackErrorCode(I)I

    move-result p0

    iput p0, v1, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    goto :goto_7

    .line 140
    :cond_e
    invoke-static {p0, p1, p3, v1}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;)Z

    move-result p0

    goto :goto_4

    :cond_f
    :goto_7
    if-eqz v0, :cond_10

    .line 229
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p0

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/rg;->rg()Ljava/lang/String;

    move-result-object p3

    const-string p4, "ah_attempt"

    invoke-virtual {p0, p4, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 231
    :cond_10
    sget-object p0, Lcom/ss/android/socialbase/appdownloader/df;->df:Lcom/ss/android/socialbase/appdownloader/df$q;

    if-eqz p0, :cond_11

    .line 232
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p0

    const-string p3, "intent"

    invoke-virtual {p0, p3, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 233
    sget-object p0, Lcom/ss/android/socialbase/appdownloader/df;->df:Lcom/ss/android/socialbase/appdownloader/df$q;

    invoke-interface {p0, p1, v1}, Lcom/ss/android/socialbase/appdownloader/df$q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/rg;)V

    :cond_11
    :goto_8
    return v0

    :pswitch_data_0
    .packed-switch -0x3ac18f35
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x0
        :pswitch_d
        :pswitch_d
        :pswitch_e
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
    .end packed-switch
.end method

.method public static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/content/Intent;Z)Z
    .locals 6

    .line 80
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "ah_plans"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 83
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    move v3, v1

    :goto_0
    if-ge v3, v2, :cond_1

    .line 85
    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    .line 86
    invoke-static {v4}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;)Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-static {p0, p1, p2, v4, p3}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/content/Intent;Lorg/json/JSONObject;Z)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v1, 0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return v1
.end method

.method private static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;)Z
    .locals 11

    const/4 v0, 0x0

    if-eqz p0, :cond_7

    if-nez p2, :cond_0

    goto/16 :goto_4

    :cond_0
    const-string v1, "device_plans"

    .line 301
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 302
    iput-object v1, p3, Lcom/ss/android/socialbase/appdownloader/rg;->pp:Ljava/lang/String;

    .line 304
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, ","

    .line 305
    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 309
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v2

    .line 310
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    return v0

    .line 313
    :cond_1
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 314
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v4, 0x0

    .line 317
    array-length v5, v1

    move v6, v0

    :goto_0
    const/4 v7, 0x1

    if-ge v6, v5, :cond_5

    aget-object v8, v1, v6

    .line 318
    invoke-static {p0, v8, p2, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/appdownloader/rg/rg;

    move-result-object v9

    if-eqz v9, :cond_4

    .line 320
    invoke-virtual {v9}, Lcom/ss/android/socialbase/appdownloader/rg/rg;->df()Landroid/content/Intent;

    move-result-object v9

    if-eqz v9, :cond_3

    .line 327
    invoke-static {v3, p1, p2}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Ljava/io/File;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)Z

    move-result v10

    if-eqz v10, :cond_2

    .line 333
    :try_start_0
    invoke-static {p0, v9, v0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;Z)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v4, v8

    goto :goto_2

    :catchall_0
    move-exception v9

    .line 341
    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " startActivity failed : "

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 342
    invoke-static {p3, v7}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    goto :goto_1

    :cond_2
    const/4 v7, 0x6

    .line 345
    invoke-static {p3, v7}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    .line 346
    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " createDescFile failed! "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_3
    const/4 v7, 0x3

    .line 349
    invoke-static {p3, v7}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    .line 350
    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " resolveActivity failed! "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    :goto_1
    const-string v7, "  "

    .line 353
    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_5
    move v7, v0

    :goto_2
    if-nez v7, :cond_6

    .line 356
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->q:Ljava/lang/String;

    goto :goto_3

    .line 358
    :cond_6
    iput-object v4, p3, Lcom/ss/android/socialbase/appdownloader/rg;->pt:Ljava/lang/String;

    .line 359
    iput v0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :goto_3
    return v7

    :cond_7
    :goto_4
    return v0
.end method

.method private static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;Lcom/ss/android/socialbase/appdownloader/rg;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z
    .locals 2

    const-string p4, "type"

    .line 246
    invoke-virtual {p2, p4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    .line 247
    iput-object p4, p3, Lcom/ss/android/socialbase/appdownloader/rg;->rg:Ljava/lang/String;

    const-string v0, "vbi"

    .line 250
    invoke-static {p0, v0, p2, p1}, Lcom/ss/android/socialbase/appdownloader/rg/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/appdownloader/rg/rg;

    move-result-object p1

    .line 251
    invoke-virtual {p1}, Lcom/ss/android/socialbase/appdownloader/rg/rg;->df()Landroid/content/Intent;

    move-result-object p1

    .line 252
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 254
    :try_start_0
    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 259
    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " startActivity failed : "

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 260
    invoke-static {p3, v1}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/rg;I)V

    move p0, v0

    :goto_0
    if-nez p0, :cond_0

    .line 264
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->q:Ljava/lang/String;

    goto :goto_1

    .line 266
    :cond_0
    iput v0, p3, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    :goto_1
    return v1
.end method

.method private static rg(Ljava/io/File;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)Z
    .locals 2

    const/4 p2, 0x0

    if-nez p0, :cond_0

    return p2

    .line 615
    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    .line 616
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "download_dir"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    const-string v1, "ins_desc"

    .line 620
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v0

    .line 622
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 623
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 624
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    :cond_2
    if-eqz v0, :cond_3

    .line 630
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z

    move-result p0

    if-eqz p0, :cond_3

    .line 631
    invoke-virtual {v0}, Ljava/io/File;->deleteOnExit()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    return p2

    :cond_3
    :goto_1
    const/4 p0, 0x1

    return p0
.end method
