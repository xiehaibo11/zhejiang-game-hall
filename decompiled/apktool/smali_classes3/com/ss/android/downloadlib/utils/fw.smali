.class public Lcom/ss/android/downloadlib/utils/fw;
.super Ljava/lang/Object;


# direct methods
.method static df(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 3

    .line 548
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x4

    if-eqz v0, :cond_0

    .line 549
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0xb

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    :cond_0
    if-nez p0, :cond_1

    .line 552
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    .line 554
    :cond_1
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/b;->c(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    if-nez p1, :cond_2

    .line 556
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x16

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    :cond_2
    const/4 v0, 0x1

    const-string v2, "start_only_for_android"

    .line 558
    invoke-virtual {p1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 560
    :try_start_0
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 564
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x3

    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V

    return-object p0

    .line 562
    :catch_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x17

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method static df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 6

    .line 631
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x2

    if-eqz v0, :cond_0

    .line 632
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x15

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    .line 634
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 635
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 636
    new-instance v3, Landroid/content/Intent;

    const-string v4, "android.intent.action.VIEW"

    invoke-direct {v3, v4}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 637
    invoke-virtual {v3, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 v2, 0x10000000

    .line 638
    invoke-virtual {v3, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v2, "open_url"

    .line 639
    invoke-virtual {v3, v2, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/4 v2, 0x1

    const-string v4, "start_only_for_android"

    .line 640
    invoke-virtual {v3, v4, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 641
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v4

    const-string v5, "fix_app_link_flag"

    invoke-virtual {v4, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/high16 v4, 0x4000000

    .line 642
    invoke-virtual {v3, v4}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 644
    :cond_1
    invoke-static {v0, v3}, Lcom/ss/android/downloadlib/utils/b;->df(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 646
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v4, "open_url_mode"

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_2

    .line 647
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 648
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v0

    invoke-interface {v0}, Lcom/ss/android/download/api/config/df;->rg()Z

    move-result v0

    if-eqz v0, :cond_2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v0, v4, :cond_2

    .line 650
    invoke-interface {p1}, Lcom/ss/android/downloadad/api/rg/rg;->z()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 651
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 654
    :cond_2
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v3}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 659
    :goto_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    invoke-direct {p0, v2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V

    return-object p0

    .line 656
    :catch_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    invoke-direct {p0, v1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V

    return-object p0

    .line 661
    :cond_3
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x18

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method private static df(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
    .locals 2

    .line 167
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/utils/fw$1;

    invoke-direct {v1, p2, p0, p1}, Lcom/ss/android/downloadlib/utils/fw$1;-><init>(Ljava/lang/String;Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static df(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V
    .locals 5

    const-string v0, "market://details?id="

    const/4 v1, 0x5

    .line 464
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "ttdownloader_type"

    invoke-static {p4, v3, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const/4 v2, 0x1

    .line 466
    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "a"

    .line 467
    invoke-virtual {v3, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 468
    invoke-static {p2}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 469
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 470
    iget-wide v3, p3, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-static {p1, v3, v4, p2, p4}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Ljava/lang/String;JLjava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_0

    .line 472
    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p2

    invoke-static {p2, p3, v2}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 473
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p3, p4, v1, v1, p2}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 476
    :catch_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    invoke-static {p0, p3, v2}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    const/4 p0, 0x6

    .line 477
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p3, p4, p0, v1, p1}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private static df(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 4

    const-string v0, "market://details?id="

    const/4 v1, 0x1

    .line 352
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "ttdownloader_type"

    invoke-static {p4, v3, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 354
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "a"

    .line 355
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 356
    invoke-static {p2}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 357
    invoke-static {p2, p5, p6}, Lcom/ss/android/downloadlib/utils/fw;->rg(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string p5, "open_url"

    .line 358
    invoke-static {p4, p5, p2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 359
    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->pp(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p5

    if-eqz p5, :cond_0

    const/4 p5, -0x1

    .line 360
    invoke-static {p3, p4, p5, v1, p2}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    const-string p2, "am_m1"

    .line 361
    invoke-static {p2, p4, p3, v1}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    goto :goto_0

    .line 363
    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p2

    invoke-static {p2, p3, v1}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    const/4 p2, 0x2

    .line 364
    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p5

    invoke-static {p3, p4, p2, v1, p5}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 367
    :catch_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    invoke-static {p0, p3, v1}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    const/4 p0, 0x3

    .line 368
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p3, p4, p0, v1, p1}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private static df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    .locals 1

    .line 513
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string v0, "error_code"

    invoke-static {p1, v0, p2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 514
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "ttdownloader_type"

    invoke-static {p1, p3, p2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "rmu"

    .line 515
    invoke-static {p1, p2, p4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 516
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object p2

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object p4

    invoke-static {p3, p4}, Lcom/ss/android/downloadlib/utils/b;->df(Landroid/content/Context;Ljava/lang/String;)I

    move-result p3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-static {p1, p2, p3}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 517
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    const-string p3, "am_result"

    invoke-virtual {p2, p3, p1, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method private static pp(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
    .locals 2

    .line 424
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/utils/fw$3;

    invoke-direct {v1, p2, p0, p1}, Lcom/ss/android/downloadlib/utils/fw$3;-><init>(Ljava/lang/String;Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static pp(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    if-nez p0, :cond_0

    .line 294
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    .line 296
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 297
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 298
    instance-of v1, p0, Landroid/app/Activity;

    if-nez v1, :cond_1

    const/high16 v1, 0x10000000

    .line 299
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 300
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "fix_app_link_flag"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const v1, 0x8000

    .line 301
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 304
    :cond_1
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/4 p1, 0x1

    const-string v1, "start_only_for_android"

    .line 305
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 306
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object v1

    .line 307
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 308
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 310
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 312
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method private static pt(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 3

    .line 151
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://www.samsungapps.com/appquery/appDetail.as?appId="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 152
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.sec.android.app.samsungapps"

    const-string v2, "com.sec.android.app.samsungapps.Main"

    .line 153
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 154
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 155
    instance-of p1, p0, Landroid/app/Activity;

    if-nez p1, :cond_0

    const/high16 p1, 0x10000000

    .line 156
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    :cond_0
    const-string p1, "start_only_for_android"

    const/4 v1, 0x1

    .line 158
    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 159
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 160
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x5

    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 162
    :catch_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x6

    const/16 v0, 0xe

    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method private static pt(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V
    .locals 2

    .line 373
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/utils/fw$2;

    invoke-direct {v1, p0, p2, p1}, Lcom/ss/android/downloadlib/utils/fw$2;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static q(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 5

    .line 225
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/ss/android/downloadlib/activity/JumpKllkActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 226
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "p"

    .line 227
    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 228
    iget-wide v1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    const-string v3, "id"

    invoke-virtual {v0, v3, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    const/4 v1, 0x1

    const-string v2, "start_only_for_android"

    .line 229
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 230
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 232
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 233
    new-instance v0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 v3, 0x7

    const-string v4, "am_kllk2"

    invoke-direct {v0, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 v0, 0x3

    .line 235
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "market://details?id="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v2, v1, v0, v3}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    .line 236
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0
.end method

.method static q(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 695
    :cond_0
    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 696
    new-instance v2, Landroid/content/Intent;

    const-string v3, "android.intent.action.VIEW"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 697
    invoke-virtual {v2, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 v1, 0x10000000

    .line 698
    invoke-virtual {v2, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "open_url"

    .line 699
    invoke-virtual {v2, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "start_only_for_android"

    const/4 v1, 0x1

    .line 700
    invoke-virtual {v2, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 701
    invoke-virtual {p0, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v1

    :catchall_0
    move-exception p0

    .line 704
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return v0
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Landroid/net/Uri;
    .locals 6

    .line 715
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/pp;->pp()Ljava/lang/String;

    move-result-object v0

    .line 716
    new-instance v1, Landroid/net/Uri$Builder;

    invoke-direct {v1}, Landroid/net/Uri$Builder;-><init>()V

    .line 717
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 718
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v3

    const-string v4, "s"

    .line 719
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "bl"

    .line 721
    invoke-virtual {v3, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v4}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "market"

    .line 722
    invoke-virtual {v1, v4}, Landroid/net/Uri$Builder;->scheme(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object v4

    const-string v5, "details"

    invoke-virtual {v4, v5}, Landroid/net/Uri$Builder;->authority(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object v4

    const-string v5, "id"

    invoke-virtual {v4, v5, v0}, Landroid/net/Uri$Builder;->appendQueryParameter(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 723
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 724
    invoke-virtual {v1, v3}, Landroid/net/Uri$Builder;->appendPath(Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 726
    :cond_0
    invoke-virtual {v1}, Landroid/net/Uri$Builder;->build()Landroid/net/Uri;

    move-result-object v0

    const/4 v1, -0x1

    const/4 v3, 0x6

    .line 727
    invoke-virtual {v0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {p0, v2, v1, v3, v4}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    return-object v0
.end method

.method public static rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 3

    const/4 v0, 0x6

    if-eqz p0, :cond_6

    if-eqz p1, :cond_6

    .line 60
    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v1

    const-string v2, "market"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_1

    .line 64
    :cond_0
    :try_start_0
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    invoke-direct {v1, v2, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 65
    invoke-static {p0, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 66
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0xd

    invoke-direct {p0, v0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    .line 68
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object p1

    .line 70
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->c()Z

    move-result v2

    if-nez v2, :cond_2

    .line 71
    invoke-virtual {v1, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 73
    :cond_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v2, "fix_jump_market"

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/high16 p1, 0x14000000

    .line 74
    invoke-virtual {v1, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    goto :goto_0

    .line 76
    :cond_3
    instance-of p1, p0, Landroid/app/Activity;

    if-nez p1, :cond_4

    const/high16 p1, 0x10000000

    .line 77
    invoke-virtual {v1, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 80
    :cond_4
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v2, "test_jump_market_failed"

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v2, 0x1

    if-ne p1, v2, :cond_5

    .line 81
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const/4 p1, 0x0

    const-string v1, "jump market error"

    invoke-virtual {p0, p1, v1}, Lcom/ss/android/downloadlib/exception/q;->rg(ZLjava/lang/String;)V

    .line 82
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x19

    invoke-direct {p0, v0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    :cond_5
    const-string p1, "start_only_for_android"

    .line 84
    invoke-virtual {v1, p1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 85
    invoke-virtual {p0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 86
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x5

    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 89
    :catch_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0xe

    invoke-direct {p0, v0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    .line 61
    :cond_6
    :goto_1
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0xc

    invoke-direct {p0, v0, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method public static rg(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 4

    if-eqz p0, :cond_9

    .line 112
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    .line 115
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "com.sec.android.app.samsungapps"

    invoke-static {p0, v0}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 116
    invoke-static {p0, p2}, Lcom/ss/android/downloadlib/utils/fw;->pt(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 118
    :cond_1
    iget-object v0, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    const-string v1, "market://details?id="

    if-eqz v0, :cond_8

    iget-object v0, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->enableAM()Z

    move-result v0

    if-nez v0, :cond_2

    goto/16 :goto_0

    .line 121
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "am_plans"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 122
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v2

    const/4 v3, 0x7

    if-eqz v2, :cond_3

    const-string v2, "am_0"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 123
    invoke-static {p0, p1, p2}, Lcom/ss/android/downloadlib/utils/fw;->df(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V

    .line 124
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const-string p1, "am_m1"

    invoke-direct {p0, v3, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(ILjava/lang/String;)V

    return-object p0

    .line 126
    :cond_3
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt()Z

    move-result v2

    if-eqz v2, :cond_4

    const-string v2, "am_3"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 127
    invoke-static {p0, p1, p2}, Lcom/ss/android/downloadlib/utils/fw;->q(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 129
    :cond_4
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pp()Z

    move-result v2

    if-eqz v2, :cond_5

    const-string v2, "am_2"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 130
    invoke-static {p0, p1, p2}, Lcom/ss/android/downloadlib/utils/fw;->pt(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V

    .line 131
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const-string p1, "am_m2"

    invoke-direct {p0, v3, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(ILjava/lang/String;)V

    return-object p0

    .line 133
    :cond_5
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->df()Z

    move-result v2

    if-eqz v2, :cond_6

    const-string v2, "am_6"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 134
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 139
    :cond_6
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->q()Z

    move-result v2

    if-eqz v2, :cond_7

    const-string v2, "am_5"

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONArray;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 140
    invoke-static {p0, p1, p2}, Lcom/ss/android/downloadlib/utils/fw;->pp(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)V

    .line 141
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const-string p1, "am_v1"

    invoke-direct {p0, v3, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(ILjava/lang/String;)V

    return-object p0

    .line 143
    :cond_7
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 119
    :cond_8
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 113
    :cond_9
    :goto_1
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x6

    const/16 p2, 0xb

    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method public static rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 2

    if-eqz p0, :cond_2

    .line 98
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 101
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "com.sec.android.app.samsungapps"

    invoke-static {p0, v0}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 102
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->pt(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 104
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "market://details?id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0

    .line 99
    :cond_2
    :goto_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/4 p1, 0x6

    const/16 v0, 0xb

    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method static rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 6

    .line 568
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/b;->c(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v0

    const/4 v1, 0x4

    if-nez v0, :cond_0

    .line 570
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x16

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0

    .line 573
    :cond_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    const/4 v4, 0x3

    const/4 v5, 0x1

    if-lt v2, v3, :cond_1

    .line 574
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "open_package_mode"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    if-ne v2, v5, :cond_1

    .line 575
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 576
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/download/api/config/df;->rg()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 577
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->z()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 579
    invoke-static {p1, p2}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 580
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    invoke-direct {p0, v4}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V

    return-object p0

    :cond_1
    const-string p1, "start_only_for_android"

    .line 582
    invoke-virtual {v0, p1, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 584
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 588
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    invoke-direct {p0, v4}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(I)V

    return-object p0

    .line 586
    :catch_0
    new-instance p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    const/16 p1, 0x17

    invoke-direct {p0, v1, p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(II)V

    return-object p0
.end method

.method static rg(Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 2

    .line 670
    invoke-static {p1, p0}, Lcom/ss/android/downloadlib/utils/fw;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p1

    .line 673
    invoke-static {p0}, Lcom/ss/android/downloadlib/df/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 677
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 678
    invoke-static {p2, p0}, Lcom/ss/android/downloadlib/utils/fw;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p1

    :cond_1
    return-object p1
.end method

.method static rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
    .locals 1

    .line 592
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0, p1}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    return-object p0
.end method

.method private static rg(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 210
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "g"

    .line 213
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "h"

    .line 214
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 215
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 216
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    :cond_1
    return-object p0
.end method

.method public static rg(Landroid/app/Activity;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)V
    .locals 5

    const-string v0, "market://details?id="

    .line 484
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 486
    :catch_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 489
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p5

    invoke-virtual {p5, p2, p3}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object p2

    const/4 p3, 0x5

    const/4 p5, 0x1

    .line 491
    :try_start_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "s"

    .line 492
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "bg"

    .line 493
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, p0, v3}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    .line 494
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Lcom/ss/android/downloadlib/utils/b;->df(Lorg/json/JSONObject;)Ljava/util/HashMap;

    move-result-object p4

    if-eqz v2, :cond_0

    .line 495
    invoke-virtual {p4}, Ljava/util/HashMap;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {p0, p1, p4}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/app/Activity;Ljava/lang/String;Ljava/util/HashMap;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 p0, -0x1

    .line 496
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p2, v1, p0, p3, p4}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    const-string p0, "am_v1"

    .line 497
    invoke-static {p0, v1, p2, p5}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    goto :goto_2

    :cond_0
    if-eqz v2, :cond_2

    .line 499
    invoke-virtual {p4}, Ljava/util/HashMap;->isEmpty()Z

    move-result p4

    if-eqz p4, :cond_1

    move p4, p5

    goto :goto_1

    :cond_1
    const/4 p4, 0x2

    goto :goto_1

    :cond_2
    const/4 p4, 0x3

    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v1, p4, p3, v2}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    .line 500
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p4

    invoke-static {p0, p4}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    invoke-static {p0, p2, p5}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    .line 503
    :catch_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p4

    invoke-static {p0, p4}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object p0

    invoke-static {p0, p2, p5}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    const/4 p0, 0x4

    .line 504
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v1, p0, p3, p1}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    :goto_2
    return-void
.end method

.method public static rg(Landroid/content/Context;Ljava/lang/String;JZ)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 246
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 247
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v3

    move-wide/from16 v4, p2

    invoke-virtual {v3, v4, v5}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object v3

    const/4 v4, 0x2

    const/4 v5, 0x1

    const/4 v6, 0x3

    .line 250
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v7

    const-string v8, "s"

    .line 251
    invoke-virtual {v7, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v9, "aa"

    .line 252
    invoke-virtual {v7, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9, v8}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v10, "ac"

    .line 254
    invoke-virtual {v7, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-static {v10, v8}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string v11, "af"

    .line 256
    invoke-virtual {v7, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v11, v8}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 258
    invoke-static {v7, v0, v10}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;Landroid/content/Context;Ljava/lang/String;)Z

    move-result v12

    .line 259
    new-instance v13, Ljava/lang/StringBuilder;

    new-array v14, v6, [Ljava/lang/Object;

    const/4 v15, 0x0

    aput-object v1, v14, v15

    aput-object v11, v14, v5

    aput-object v10, v14, v4

    invoke-static {v9, v14}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    invoke-direct {v13, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 260
    new-instance v9, Landroid/content/Intent;

    const-string v10, "android.intent.action.VIEW"

    invoke-direct {v9, v10}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 261
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object v10

    .line 262
    invoke-static {v0, v10}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_0

    .line 263
    invoke-virtual {v9, v10}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :cond_0
    if-eqz p4, :cond_1

    const-string v10, "ae"

    .line 266
    invoke-virtual {v7, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7, v8}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 267
    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    const/high16 v7, 0x14000000

    .line 269
    invoke-virtual {v9, v7}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    :goto_0
    const-string v7, "mf"

    .line 272
    invoke-static {v12}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v8

    invoke-static {v2, v7, v8}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v7, "if"

    .line 273
    invoke-static/range {p4 .. p4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v8

    invoke-static {v2, v7, v8}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 275
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v7

    invoke-virtual {v9, v7}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const-string v7, "start_only_for_android"

    .line 276
    invoke-virtual {v9, v7, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 278
    invoke-virtual {v0, v9}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    const-string v0, "am_kllk2"

    .line 279
    invoke-static {v0, v2, v3, v5}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    if-eqz v12, :cond_2

    const/4 v0, -0x1

    .line 281
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v2, v0, v6, v7}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    goto :goto_1

    .line 283
    :cond_2
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v2, v6, v6, v0}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 286
    :catch_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "market://details?id="

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v7

    invoke-static {v0, v7}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Landroid/net/Uri;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v0

    invoke-static {v0, v3, v5}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 287
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v2, v4, v6, v0}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic rg(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V
    .locals 0

    .line 54
    invoke-static {p0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/utils/fw;->df(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic rg(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 0

    .line 54
    invoke-static/range {p0 .. p6}, Lcom/ss/android/downloadlib/utils/fw;->df(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;Lorg/json/JSONObject;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V
    .locals 0

    .line 54
    invoke-static {p0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/utils/fw;->df(Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;IILjava/lang/String;)V

    return-void
.end method

.method private static rg(Landroid/app/Activity;Ljava/lang/String;Ljava/util/HashMap;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    .line 323
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 324
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "market://details?id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/4 p1, 0x1

    const-string v1, "start_only_for_android"

    .line 325
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const-string v1, "param"

    .line 326
    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 327
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->rz()Ljava/lang/String;

    move-result-object p2

    .line 328
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p2}, Lcom/ss/android/downloadlib/utils/b;->pt(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 329
    invoke-virtual {v0, p2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 331
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 333
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p0

    .line 336
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "start v1"

    invoke-virtual {p1, p0, p2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :cond_1
    const/4 p0, 0x0

    return p0
.end method
