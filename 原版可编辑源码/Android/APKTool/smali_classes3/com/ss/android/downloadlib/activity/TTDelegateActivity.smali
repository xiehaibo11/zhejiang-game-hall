.class public Lcom/ss/android/downloadlib/activity/TTDelegateActivity;
.super Landroid/app/Activity;

# interfaces
.implements Landroid/support/v4/app/ActivityCompat$OnRequestPermissionsResultCallback;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/activity/TTDelegateActivity$IntentType;
    }
.end annotation


# static fields
.field private static pt:Lcom/ss/android/downloadlib/guide/install/rg;


# instance fields
.field private df:Z

.field private q:Lcom/ss/android/downloadad/api/rg/df;

.field protected rg:Landroid/content/Intent;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 60
    iput-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    return-void
.end method

.method private df()V
    .locals 3

    .line 242
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 243
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    const/4 v2, 0x0

    .line 244
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->alpha:F

    .line 245
    invoke-virtual {v0, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method

.method private df(J)V
    .locals 6

    .line 385
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/hq;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 388
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 391
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p2

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    .line 392
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "time_after_click"

    .line 395
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->s()J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "click_download_size"

    .line 396
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->su()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p2, :cond_1

    const-string v1, "download_length"

    .line 398
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "download_percent"

    .line 399
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    div-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "download_apk_size"

    .line 400
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 404
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 406
    :cond_1
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    const-string v1, "pause_reserve_wifi_dialog_show"

    invoke-virtual {p2, v1, v0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 408
    :cond_2
    new-instance p2, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    invoke-direct {p2, p0}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;-><init>(Landroid/app/Activity;)V

    const/4 v0, 0x0

    .line 409
    invoke-virtual {p2, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Z)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object p2

    .line 410
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/hq;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object p2

    .line 411
    invoke-virtual {p2}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/pt;

    move-result-object p2

    invoke-virtual {p2}, Lcom/ss/android/downloadlib/addownload/rg/pt;->show()V

    const/4 p2, 0x1

    .line 412
    iput-boolean p2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df:Z

    .line 413
    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q:Lcom/ss/android/downloadad/api/rg/df;

    return-void
.end method

.method public static df(Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 2

    const-string v0, ""

    const/4 v1, 0x5

    .line 195
    invoke-static {p0, v1, v0, v0, v0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Lcom/ss/android/downloadad/api/rg/rg;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static df(Lcom/ss/android/downloadad/api/rg/rg;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x7

    .line 203
    invoke-static {p0, v0, p1, p2, p3}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Lcom/ss/android/downloadad/api/rg/rg;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private df(Ljava/lang/String;)V
    .locals 2

    .line 478
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/b;->c(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    if-nez p1, :cond_0

    .line 480
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void

    :cond_0
    const/high16 v0, 0x10000000

    .line 484
    :try_start_0
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v0, "start_only_for_android"

    const/4 v1, 0x1

    .line 485
    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 486
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 488
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 490
    :goto_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void

    :goto_1
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    throw p1
.end method

.method public static df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 2

    .line 137
    invoke-static {p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;

    move-result-object p1

    const/high16 v0, 0x10000000

    .line 138
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v0, "type"

    const/16 v1, 0xb

    .line 139
    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v0, "package_name"

    .line 140
    invoke-virtual {p1, v0, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 141
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 142
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method private df(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 2

    .line 417
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    if-eqz p2, :cond_2

    array-length v0, p2

    if-gtz v0, :cond_0

    goto :goto_1

    .line 421
    :cond_0
    new-instance v0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;-><init>(Lcom/ss/android/downloadlib/activity/TTDelegateActivity;Ljava/lang/String;)V

    .line 437
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt p1, v1, :cond_1

    .line 439
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pp()Lcom/ss/android/download/api/config/rz;

    move-result-object p1

    invoke-interface {p1, p0, p2, v0}, Lcom/ss/android/download/api/config/rz;->rg(Landroid/app/Activity;[Ljava/lang/String;Lcom/ss/android/download/api/config/n;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 441
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object p2

    const-string v1, "requestPermission"

    invoke-interface {p2, p1, v1}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    .line 442
    invoke-interface {v0}, Lcom/ss/android/download/api/config/n;->rg()V

    goto :goto_0

    .line 445
    :cond_1
    invoke-interface {v0}, Lcom/ss/android/download/api/config/n;->rg()V

    :goto_0
    return-void

    .line 418
    :cond_2
    :goto_1
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method private pt(J)V
    .locals 1

    .line 535
    new-instance v0, Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-direct {v0, p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/compliance/rg;-><init>(Landroid/app/Activity;J)V

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->show()V

    return-void
.end method

.method private static q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;
    .locals 2

    .line 190
    new-instance p0, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    const-class v1, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-direct {p0, v0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    return-object p0
.end method

.method private q()V
    .locals 8

    .line 340
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "model_id"

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    .line 341
    iget-object v2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v3, "message_text"

    invoke-virtual {v2, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 342
    iget-object v3, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v4, "positive_button_text"

    invoke-virtual {v3, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 343
    iget-object v4, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v5, "negative_button_text"

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 344
    iget-object v5, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const/4 v6, 0x0

    const-string v7, "type"

    invoke-virtual {v5, v7, v6}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    .line 346
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v7

    invoke-virtual {v7, v0, v1}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    .line 349
    new-instance v1, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;-><init>(Landroid/app/Activity;)V

    .line 350
    invoke-virtual {v1, v6}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Z)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object v1

    .line 351
    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object v1

    .line 352
    invoke-virtual {v1, v3}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->df(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object v1

    .line 353
    invoke-virtual {v1, v4}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->q(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    move-result-object v1

    const/4 v2, 0x7

    if-ne v5, v2, :cond_1

    .line 355
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q/df;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v2

    if-nez v2, :cond_0

    return-void

    .line 358
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q/df;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    .line 359
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/rg/pt;->show()V

    const-string v1, "download_percent"

    goto :goto_0

    :cond_1
    const/16 v2, 0x8

    if-ne v5, v2, :cond_3

    .line 362
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v2

    if-nez v2, :cond_2

    return-void

    .line 365
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/q;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;

    .line 366
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/rg/pt;->show()V

    const-string v1, "apk_size"

    goto :goto_0

    :cond_3
    const-string v1, ""

    .line 369
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const/4 v2, 0x1

    .line 370
    iput-boolean v2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df:Z

    .line 371
    iput-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q:Lcom/ss/android/downloadad/api/rg/df;

    .line 372
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "pause_optimise_type"

    .line 374
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pause_optimise_action"

    const-string v3, "show_dialog"

    .line 375
    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 377
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 379
    :goto_1
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    const-string v3, "pause_optimise"

    invoke-virtual {v1, v3, v2, v0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    :cond_4
    return-void
.end method

.method private q(J)V
    .locals 4

    .line 495
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    if-nez p1, :cond_0

    .line 497
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "showOpenAppDialogInner nativeModel null"

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    .line 498
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void

    .line 501
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->q()Lcom/ss/android/download/api/config/hq;

    move-result-object p2

    new-instance v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    invoke-direct {v0, p0}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;-><init>(Landroid/content/Context;)V

    const-string v1, "\u5df2\u5b89\u88c5\u5b8c\u6210"

    .line 502
    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    .line 504
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->ms()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "\u521a\u521a\u4e0b\u8f7d\u7684\u5e94\u7528"

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->ms()Ljava/lang/String;

    move-result-object v2

    :goto_0
    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "%1$s\u5df2\u5b89\u88c5\u5b8c\u6210\uff0c\u662f\u5426\u7acb\u5373\u6253\u5f00\uff1f"

    .line 503
    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->df(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    const-string v1, "\u6253\u5f00"

    .line 505
    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->q(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    const-string v1, "\u53d6\u6d88"

    .line 506
    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->pt(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    .line 507
    invoke-virtual {v0, v3}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Z)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    .line 508
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/ss/android/downloadlib/utils/b;->q(Landroid/content/Context;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Landroid/graphics/drawable/Drawable;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;-><init>(Lcom/ss/android/downloadlib/activity/TTDelegateActivity;Lcom/ss/android/downloadad/api/rg/df;)V

    .line 509
    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    const/4 v1, 0x2

    .line 529
    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(I)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    move-result-object v0

    .line 530
    invoke-virtual {v0}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg()Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    move-result-object v0

    .line 501
    invoke-interface {p2, v0}, Lcom/ss/android/download/api/config/hq;->df(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;

    .line 531
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    const-string v0, "market_openapp_window_show"

    invoke-virtual {p2, v0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static rg(J)V
    .locals 3

    .line 167
    new-instance v0, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    const-class v2, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 168
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "type"

    const/16 v2, 0xa

    .line 169
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v1, "app_info_id"

    .line 170
    invoke-virtual {v0, v1, p0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    .line 171
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 172
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 3

    .line 147
    invoke-static {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;

    move-result-object v0

    const/high16 v1, 0x10000000

    .line 148
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "type"

    const/4 v2, 0x4

    .line 149
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 150
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->df()J

    move-result-wide v1

    const-string p0, "model_id"

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    .line 151
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 152
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method private static rg(Lcom/ss/android/downloadad/api/rg/rg;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 207
    invoke-static {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;

    move-result-object v0

    const/high16 v1, 0x10000000

    .line 208
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "type"

    .line 209
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 210
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "positive_button_text"

    .line 211
    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 214
    :cond_0
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    const-string p1, "negative_button_text"

    .line 215
    invoke-virtual {v0, p1, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 218
    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "message_text"

    .line 219
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 222
    :cond_2
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->df()J

    move-result-wide p0

    const-string p2, "model_id"

    invoke-virtual {v0, p2, p0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    .line 223
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 224
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_3
    return-void
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/rg;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 2

    .line 157
    invoke-static {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;

    move-result-object p0

    const/high16 v0, 0x10000000

    .line 158
    invoke-virtual {p0, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v0, "type"

    const/16 v1, 0x9

    .line 159
    invoke-virtual {p0, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 160
    sput-object p1, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->pt:Lcom/ss/android/downloadlib/guide/install/rg;

    .line 161
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 162
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/rg;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/16 v0, 0x8

    .line 199
    invoke-static {p0, v0, p1, p2, p3}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Lcom/ss/android/downloadad/api/rg/rg;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private rg(Ljava/lang/String;)V
    .locals 3

    .line 450
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 451
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void

    .line 455
    :cond_0
    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 456
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 457
    invoke-virtual {v1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const-string v0, "open_url"

    .line 458
    invoke-virtual {v1, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 459
    invoke-virtual {v1, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 460
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "fix_app_link_flag"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/high16 p1, 0x4000000

    .line 461
    invoke-virtual {v1, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    :cond_1
    const-string p1, "start_only_for_android"

    const/4 v0, 0x1

    .line 463
    invoke-virtual {v1, p1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 464
    invoke-virtual {p0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 466
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 468
    :goto_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void

    :goto_1
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    throw p1
.end method

.method public static rg(Ljava/lang/String;JLjava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    .line 177
    new-instance v0, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    const-class v2, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 178
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "type"

    const/16 v2, 0xc

    .line 179
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v1, "package_name"

    .line 180
    invoke-virtual {v0, v1, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p0, "model_id"

    .line 181
    invoke-virtual {v0, p0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;J)Landroid/content/Intent;

    const-string p0, "param"

    .line 182
    invoke-virtual {v0, p0, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 183
    invoke-virtual {p4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ext_json"

    invoke-virtual {v0, p1, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 184
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 185
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public static rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 2

    .line 120
    invoke-static {p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(Lcom/ss/android/downloadad/api/rg/rg;)Landroid/content/Intent;

    move-result-object p1

    const/high16 v0, 0x10000000

    .line 121
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v0, "type"

    const/4 v1, 0x2

    .line 122
    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v0, "open_url"

    .line 123
    invoke-virtual {p1, v0, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 124
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 125
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method public static rg(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3

    .line 109
    new-instance v0, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    const-class v2, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 110
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "type"

    const/4 v2, 0x1

    .line 111
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v1, "permission_id_key"

    .line 112
    invoke-virtual {v0, v1, p0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p0, "permission_content_key"

    .line 113
    invoke-virtual {v0, p0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/Intent;

    .line 114
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 115
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 230
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 231
    invoke-direct {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df()V

    .line 232
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    .line 233
    invoke-static {p0}, Lcom/ss/android/downloadlib/addownload/bm;->df(Landroid/content/Context;)V

    .line 234
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg()V

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 0

    .line 250
    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    .line 251
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->setIntent(Landroid/content/Intent;)V

    .line 252
    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    .line 253
    invoke-static {p0}, Lcom/ss/android/downloadlib/addownload/bm;->df(Landroid/content/Context;)V

    .line 254
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg()V

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1

    .line 259
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    .line 260
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pp()Lcom/ss/android/download/api/config/rz;

    move-result-object v0

    invoke-interface {v0, p0, p1, p2, p3}, Lcom/ss/android/download/api/config/rz;->rg(Landroid/app/Activity;I[Ljava/lang/String;[I)V

    return-void
.end method

.method protected onStop()V
    .locals 5

    .line 265
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 267
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q:Lcom/ss/android/downloadad/api/rg/df;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 268
    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/ux;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 269
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v3

    cmp-long v0, v1, v3

    if-ltz v0, :cond_0

    .line 270
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 271
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->finish()V

    :cond_0
    return-void
.end method

.method protected rg()V
    .locals 11

    .line 278
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    if-nez v0, :cond_0

    goto/16 :goto_1

    :cond_0
    const/4 v1, 0x0

    const-string v2, "type"

    .line 281
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    const-string v1, "package_name"

    const-string v2, "model_id"

    const-wide/16 v3, 0x0

    packed-switch v0, :pswitch_data_0

    .line 331
    :pswitch_0
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    goto/16 :goto_0

    .line 323
    :pswitch_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 324
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v7

    .line 325
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "param"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 326
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "ext_json"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    move-object v5, p0

    .line 327
    invoke-static/range {v5 .. v10}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/app/Activity;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)V

    .line 328
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    goto :goto_0

    .line 319
    :pswitch_2
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 320
    invoke-direct {p0, v0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Ljava/lang/String;)V

    goto :goto_0

    .line 315
    :pswitch_3
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "app_info_id"

    invoke-virtual {v0, v1, v3, v4}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    .line 316
    invoke-direct {p0, v0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->pt(J)V

    goto :goto_0

    .line 309
    :pswitch_4
    sget-object v0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->pt:Lcom/ss/android/downloadlib/guide/install/rg;

    if-eqz v0, :cond_1

    .line 310
    invoke-interface {v0}, Lcom/ss/android/downloadlib/guide/install/rg;->rg()V

    .line 312
    :cond_1
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    goto :goto_0

    .line 305
    :pswitch_5
    invoke-direct {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q()V

    goto :goto_0

    .line 299
    :pswitch_6
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    .line 300
    invoke-direct {p0, v0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(J)V

    goto :goto_0

    .line 295
    :pswitch_7
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v0

    .line 296
    invoke-direct {p0, v0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(J)V

    goto :goto_0

    .line 291
    :pswitch_8
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "open_url"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 292
    invoke-direct {p0, v0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Ljava/lang/String;)V

    goto :goto_0

    .line 286
    :pswitch_9
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v1, "permission_id_key"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 287
    iget-object v1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    const-string v2, "permission_content_key"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringArrayExtra(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 288
    invoke-direct {p0, v0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Ljava/lang/String;[Ljava/lang/String;)V

    :goto_0
    const/4 v0, 0x0

    .line 334
    iput-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg:Landroid/content/Intent;

    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_9
        :pswitch_8
        :pswitch_0
        :pswitch_7
        :pswitch_6
        :pswitch_0
        :pswitch_5
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method
