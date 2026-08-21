.class public Lcom/ss/android/downloadlib/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadad/api/rg;
.implements Lcom/ss/android/socialbase/appdownloader/df$q;
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;
.implements Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/rg$rg;,
        Lcom/ss/android/downloadlib/rg$q;,
        Lcom/ss/android/downloadlib/rg$df;
    }
.end annotation


# static fields
.field private static volatile pt:Lcom/ss/android/downloadlib/rg;

.field private static rg:Ljava/lang/String;


# instance fields
.field private df:J

.field private q:Lcom/ss/android/downloadlib/rg$df;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 91
    const-class v0, Lcom/ss/android/downloadlib/rg;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/rg;->rg:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 114
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 115
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/appdownloader/df$q;)V

    .line 116
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method

.method private df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/rg;)Lorg/json/JSONObject;
    .locals 3

    .line 1041
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 1045
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 1046
    invoke-virtual {p2, v1}, Lcom/ss/android/socialbase/appdownloader/rg;->rg(Lorg/json/JSONObject;)V

    :try_start_0
    const-string p2, "download_id"

    .line 1048
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "name"

    .line 1049
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 1051
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1063
    :goto_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-static {v1, p1}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;I)V

    .line 1064
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    const-string p2, "embeded_ad"

    const-string v2, "ah_result"

    invoke-virtual {p1, p2, v2, v1, v0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-object v1
.end method

.method public static df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;
    .locals 13

    if-eqz p0, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    .line 650
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "download_event_opt"

    .line 651
    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-nez v0, :cond_1

    return-object p0

    :cond_1
    const-wide/16 v0, 0x0

    .line 656
    :try_start_0
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(J)J

    move-result-wide v2

    const-string v4, "available_space"

    long-to-double v5, v2

    const-wide/high16 v7, 0x4130000000000000L    # 1048576.0

    div-double v9, v5, v7

    .line 657
    invoke-virtual {p0, v4, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 659
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v9

    const-string p1, "apk_size"

    long-to-double v11, v9

    div-double v7, v11, v7

    .line 660
    invoke-virtual {p0, p1, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    cmp-long p1, v2, v0

    if-lez p1, :cond_2

    cmp-long p1, v9, v0

    if-lez p1, :cond_2

    const-string p1, "available_space_ratio"

    div-double/2addr v5, v11

    .line 662
    invoke-virtual {p0, p1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 667
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_0
    return-object p0
.end method

.method private static df(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 700
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->m()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_1

    move-object v0, v1

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->m()Ljava/lang/String;

    move-result-object v0

    .line 701
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    .line 702
    invoke-virtual {p0, v1}, Lcom/ss/android/downloadad/api/rg/df;->hq(Ljava/lang/String;)V

    .line 703
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 705
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {v1, v2}, Lcom/ss/android/downloadlib/rg;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;

    move-result-object v1

    const/4 v3, 0x1

    :try_start_0
    const-string v4, "finish_reason"

    .line 707
    invoke-virtual {v1, v4, v0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "finish_from_reserve_wifi"

    .line 708
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadFromReserveWifi()Z

    move-result v4

    if-eqz v4, :cond_2

    move v4, v3

    goto :goto_1

    :cond_2
    const/4 v4, 0x0

    :goto_1
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v1, v0, v4}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 710
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 712
    :goto_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    .line 713
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    invoke-static {v1, v4}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;I)V

    :try_start_1
    const-string v4, "download_failed_times"

    .line 715
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->re()I

    move-result v5

    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "can_show_notification"

    .line 716
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg()Z

    move-result v5

    const/4 v6, 0x2

    if-eqz v5, :cond_3

    move v5, v3

    goto :goto_3

    :cond_3
    move v5, v6

    :goto_3
    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 718
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v4

    const-wide/16 v7, 0x0

    cmp-long v4, v4, v7

    if-lez v4, :cond_4

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    cmp-long v4, v4, v7

    if-lez v4, :cond_4

    .line 719
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v4

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v7

    sub-long/2addr v4, v7

    const-string v7, "file_length_gap"

    .line 720
    invoke-virtual {v1, v7, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    :cond_4
    const-string v4, "ttmd5_status"

    .line 722
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTTMd5CheckStatus()I

    move-result v2

    invoke-virtual {v1, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "has_send_download_failed_finally"

    .line 723
    iget-object v4, v0, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v4

    if-eqz v4, :cond_5

    move v4, v3

    goto :goto_4

    :cond_5
    move v4, v6

    :goto_4
    invoke-virtual {v1, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "is_update_download"

    .line 725
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->fl()Z

    move-result v4

    if-eqz v4, :cond_6

    goto :goto_5

    :cond_6
    move v3, v6

    :goto_5
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 727
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_6

    :catchall_0
    move-exception v0

    .line 729
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 731
    :goto_6
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v2, "download_finish"

    invoke-virtual {v0, v2, v1, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method private pt(Lcom/ss/android/downloadad/api/rg/df;)I
    .locals 9

    .line 990
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "download_failed_finally_hours"

    const-wide/high16 v2, 0x4048000000000000L    # 48.0

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double v2, v0, v2

    const/4 v3, -0x1

    if-gtz v2, :cond_0

    return v3

    .line 994
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 995
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->bj()J

    move-result-wide v6

    sub-long/2addr v4, v6

    long-to-double v4, v4

    const-wide/high16 v6, 0x404e000000000000L    # 60.0

    mul-double/2addr v0, v6

    mul-double/2addr v0, v6

    const-wide v6, 0x408f400000000000L    # 1000.0

    mul-double/2addr v0, v6

    cmpg-double v0, v4, v0

    const/4 v1, 0x1

    if-gez v0, :cond_1

    return v1

    .line 998
    :cond_1
    iget-object v0, p1, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    return v2

    .line 1001
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-nez v0, :cond_3

    return v3

    .line 1005
    :cond_3
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v4

    const/4 v5, -0x3

    if-eq v4, v5, :cond_9

    const/4 v5, -0x4

    if-ne v4, v5, :cond_4

    goto/16 :goto_1

    .line 1013
    :cond_4
    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/constants/DownloadStatus;->isDownloading(I)Z

    move-result v3

    if-eqz v3, :cond_5

    return v1

    .line 1017
    :cond_5
    iget-object v3, p1, Lcom/ss/android/downloadad/api/rg/df;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v3, v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v3

    if-eqz v3, :cond_8

    .line 1019
    :try_start_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 1020
    invoke-static {v3, v0}, Lcom/ss/android/downloadlib/rg;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;

    const-string v5, "download_status"

    .line 1021
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v5, v4}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "fail_status"

    .line 1022
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->go()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "fail_msg"

    .line 1023
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->k()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "download_failed_times"

    .line 1024
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->re()I

    move-result v5

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1025
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v4, v4, v6

    if-lez v4, :cond_6

    const-string v4, "download_percent"

    .line 1026
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v5

    long-to-double v5, v5

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v7

    long-to-double v7, v7

    div-double/2addr v5, v7

    invoke-virtual {v3, v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    :cond_6
    const-string v0, "is_update_download"

    .line 1028
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->fl()Z

    move-result v4

    if-eqz v4, :cond_7

    move v4, v1

    goto :goto_0

    :cond_7
    const/4 v4, 0x2

    :goto_0
    invoke-virtual {v3, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1030
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->bm()Ljava/lang/String;

    move-result-object v4

    const-string v5, "download_failed_finally"

    invoke-virtual {v0, v4, v5, v3, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 1031
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    move-exception p1

    .line 1034
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_8
    return v1

    :cond_9
    :goto_1
    return v3
.end method

.method static synthetic q()Ljava/lang/String;
    .locals 1

    .line 87
    sget-object v0, Lcom/ss/android/downloadlib/rg;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public static q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)Ljava/lang/String;
    .locals 4

    .line 808
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 809
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 811
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 812
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/q;->rg()I

    move-result v3

    invoke-virtual {v1, v0, v3}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 814
    iget-object v0, v0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 817
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 820
    :cond_0
    :goto_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 821
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_1
    const-string v1, "real_package_name"

    .line 823
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "input_package_name"

    .line 824
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p0

    .line 826
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    .line 828
    :goto_1
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string v1, "embeded_ad"

    const-string v3, "package_name_error"

    invoke-virtual {p0, v1, v3, v0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-object v2

    .line 832
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPackageName()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private q(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 4

    const-wide/16 v0, 0x4e20

    .line 742
    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V

    const/16 v2, 0xf

    :goto_0
    if-lez v2, :cond_2

    .line 745
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 746
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/rg;->rg(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_1

    goto :goto_1

    .line 752
    :cond_1
    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method private rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lorg/json/JSONObject;)I
    .locals 4

    .line 764
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 765
    invoke-static {v0, p2}, Lcom/ss/android/socialbase/appdownloader/q;->df(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)I

    move-result v0

    .line 766
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p3}, Lcom/ss/android/downloadlib/utils/b;->df(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-lez v0, :cond_1

    if-lez v1, :cond_1

    if-eq v0, v1, :cond_1

    if-le v1, v0, :cond_0

    const/16 p1, 0xbc3

    goto :goto_0

    :cond_0
    const/16 p1, 0xbc2

    :goto_0
    return p1

    .line 773
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "install_finish_check_ttmd5"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v1, :cond_4

    .line 774
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v2, 0x0

    const-string v3, "sp_ttdownloader_md5"

    invoke-virtual {v0, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 775
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const/4 v2, 0x0

    invoke-interface {v0, p1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 776
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    if-eqz p2, :cond_2

    .line 777
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/rg;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 779
    :cond_2
    invoke-static {p3}, Lcom/ss/android/downloadlib/utils/rg;->df(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/ss/android/downloadlib/utils/rg;->rg(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    :try_start_0
    const-string p2, "ttmd5_status"

    .line 783
    invoke-virtual {p4, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    if-nez p1, :cond_3

    const/16 p1, 0xbb8

    return p1

    :cond_3
    if-ne p1, v1, :cond_4

    const/16 p1, 0xbba

    return p1

    :cond_4
    const/16 p1, 0xbb9

    return p1
.end method

.method public static rg()Lcom/ss/android/downloadlib/rg;
    .locals 2

    .line 120
    sget-object v0, Lcom/ss/android/downloadlib/rg;->pt:Lcom/ss/android/downloadlib/rg;

    if-nez v0, :cond_1

    .line 121
    const-class v0, Lcom/ss/android/downloadlib/rg;

    monitor-enter v0

    .line 122
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/rg;->pt:Lcom/ss/android/downloadlib/rg;

    if-nez v1, :cond_0

    .line 123
    new-instance v1, Lcom/ss/android/downloadlib/rg;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/rg;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/rg;->pt:Lcom/ss/android/downloadlib/rg;

    .line 125
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 127
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/rg;->pt:Lcom/ss/android/downloadlib/rg;

    return-object v0
.end method

.method private static rg(Ljava/util/List;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_4

    .line 541
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 544
    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v1, :cond_2

    goto :goto_0

    .line 548
    :cond_2
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    return-object v1

    .line 551
    :cond_3
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object v2

    .line 552
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v1

    :cond_4
    :goto_1
    return-object v0
.end method

.method private rg(Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;I)Lorg/json/JSONObject;
    .locals 9

    .line 1126
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1129
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    const-string v2, "scene"

    .line 1131
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {v0, v2, p3}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1133
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result p3

    invoke-static {v0, p3}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;I)V

    .line 1134
    invoke-static {p1, v0}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V

    const-string p3, "is_update_download"

    .line 1136
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->fl()Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v4

    :goto_0
    invoke-virtual {v0, p3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p3, "install_after_back_app"

    .line 1137
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->xv()Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v3

    goto :goto_1

    :cond_1
    move v2, v4

    :goto_1
    invoke-virtual {v0, p3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p3, "clean_space_install_params"

    .line 1139
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->bl()Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v2, "1"

    goto :goto_2

    :cond_2
    const-string v2, "2"

    :goto_2
    invoke-virtual {v0, p3, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz v1, :cond_4

    .line 1142
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/rg;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string p3, "uninstall_resume_count"

    .line 1144
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUninstallResumeCount()I

    move-result v2

    invoke-virtual {v0, p3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 1145
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->d()J

    move-result-wide v5

    const-wide/16 v7, 0x0

    cmp-long p3, v5, v7

    if-lez p3, :cond_3

    const-string p3, "install_time"

    .line 1146
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->d()J

    move-result-wide v7

    sub-long/2addr v5, v7

    invoke-virtual {v0, p3, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1151
    :catchall_0
    :cond_3
    :try_start_2
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p3

    const-string v2, "ah_attempt"

    invoke-virtual {p3, v2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    const/4 v2, 0x0

    invoke-static {p3, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getString(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    .line 1152
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 1153
    invoke-static {p3}, Lcom/ss/android/socialbase/appdownloader/rg;->rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object p3

    if-eqz p3, :cond_4

    .line 1155
    invoke-virtual {p3, v0}, Lcom/ss/android/socialbase/appdownloader/rg;->rg(Lorg/json/JSONObject;)V

    .line 1160
    :cond_4
    invoke-direct {p0, p1, v1, p2, v0}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Lorg/json/JSONObject;)I

    move-result p1

    const-string p2, "fail_status"

    .line 1161
    invoke-virtual {v0, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/16 p2, 0xbb8

    const-string p3, "hijack"

    if-ne p1, p2, :cond_5

    .line 1165
    :try_start_3
    invoke-virtual {v0, p3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_3

    :cond_5
    const/16 p2, 0xbb9

    if-ne p1, p2, :cond_6

    const/4 p1, 0x0

    .line 1167
    invoke-virtual {v0, p3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_3

    .line 1169
    :cond_6
    invoke-virtual {v0, p3, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception p1

    .line 1173
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_3
    return-object v0
.end method

.method public static rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;
    .locals 10

    if-eqz p0, :cond_10

    if-nez p1, :cond_0

    goto/16 :goto_c

    .line 564
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "download_event_opt"

    .line 565
    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-nez v0, :cond_1

    return-object p0

    :cond_1
    :try_start_0
    const-string v0, "download_id"

    .line 570
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "name"

    .line 571
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "cur_bytes"

    .line 572
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    invoke-virtual {p0, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "total_bytes"

    .line 573
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    invoke-virtual {p0, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "network_quality"

    .line 574
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getNetworkQuality()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 575
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->getInstance()Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;->getCurrentNetworkQuality()Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    move-result-object v0

    const-string v2, "current_network_quality"

    .line 576
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->name()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "only_wifi"

    .line 577
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_2

    move v2, v1

    goto :goto_0

    :cond_2
    move v2, v3

    :goto_0
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "need_https_degrade"

    .line 578
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedHttpsToHttpRetry()Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v1

    goto :goto_1

    :cond_3
    move v2, v3

    :goto_1
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "https_degrade_retry_used"

    .line 579
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isHttpsToHttpRetryUsed()Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, v1

    goto :goto_2

    :cond_4
    move v2, v3

    :goto_2
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "chunk_count"

    .line 580
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "retry_count"

    .line 581
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryCount()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "cur_retry_time"

    .line 582
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurRetryTime()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "need_retry_delay"

    .line 583
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedRetryDelay()Z

    move-result v2

    if-eqz v2, :cond_5

    move v2, v1

    goto :goto_3

    :cond_5
    move v2, v3

    :goto_3
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "backup_url_used"

    .line 584
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isBackUpUrlUsed()Z

    move-result v2

    if-eqz v2, :cond_6

    move v2, v1

    goto :goto_4

    :cond_6
    move v2, v3

    :goto_4
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "head_connection_error_msg"

    .line 585
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getHeadConnectionException()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getHeadConnectionException()Ljava/lang/String;

    move-result-object v2

    goto :goto_5

    :cond_7
    const-string v2, ""

    :goto_5
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "need_independent_process"

    .line 586
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedIndependentProcess()Z

    move-result v2

    if-eqz v2, :cond_8

    move v2, v1

    goto :goto_6

    :cond_8
    move v2, v3

    :goto_6
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "total_retry_count"

    .line 588
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalRetryCount()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "cur_retry_time_in_total"

    .line 589
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurRetryTimeInTotal()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "real_download_time"

    .line 591
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealDownloadTime()J

    move-result-wide v4

    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "first_speed_time"

    .line 592
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getFirstSpeedTime()J

    move-result-wide v4

    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "all_connect_time"

    .line 593
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAllConnectTime()J

    move-result-wide v4

    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "download_prepare_time"

    .line 594
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadPrepareTime()J

    move-result-wide v4

    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "download_time"

    .line 595
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealDownloadTime()J

    move-result-wide v4

    .line 596
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getAllConnectTime()J

    move-result-wide v6

    add-long/2addr v4, v6

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadPrepareTime()J

    move-result-wide v6

    add-long/2addr v4, v6

    .line 595
    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "chunk_downgrade_retry_used"

    .line 598
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isChunkDowngradeRetryUsed()Z

    move-result v2

    if-eqz v2, :cond_9

    move v2, v1

    goto :goto_7

    :cond_9
    move v2, v3

    :goto_7
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "need_chunk_downgrade_retry"

    .line 599
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isNeedChunkDowngradeRetry()Z

    move-result v2

    if-eqz v2, :cond_a

    move v2, v1

    goto :goto_8

    :cond_a
    move v2, v3

    :goto_8
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "failed_resume_count"

    .line 600
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getFailedResumeCount()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 601
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPreconnectLevel()I

    move-result v0

    const-string v2, "preconnect_level"

    .line 602
    invoke-virtual {p0, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "md5"

    .line 604
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMd5()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "expect_file_length"

    .line 605
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExpectFileLength()J

    move-result-wide v4

    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "retry_schedule_count"

    .line 607
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRetryScheduleCount()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "rw_concurrent"

    .line 608
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isRwConcurrent()Z

    move-result v2

    if-eqz v2, :cond_b

    move v2, v1

    goto :goto_9

    :cond_b
    move v2, v3

    :goto_9
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 610
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v4

    long-to-double v4, v4

    const-wide/high16 v6, 0x4130000000000000L    # 1048576.0

    div-double/2addr v4, v6

    .line 611
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealDownloadTime()J

    move-result-wide v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    long-to-double v6, v6

    const-wide v8, 0x408f400000000000L    # 1000.0

    div-double/2addr v6, v8

    const-wide/16 v8, 0x0

    cmpl-double v0, v4, v8

    if-lez v0, :cond_c

    cmpl-double v0, v6, v8

    if-lez v0, :cond_c

    div-double/2addr v4, v6

    :try_start_1
    const-string v0, "download_speed"

    .line 615
    invoke-virtual {p0, v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 619
    :catch_0
    :try_start_2
    sget-object v0, Lcom/ss/android/downloadlib/rg;->rg:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "download speed : "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, "MB/s"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 623
    :cond_c
    :try_start_3
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    .line 624
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->isDownloadServiceForeground(I)Z

    move-result v0

    const-string v2, "is_download_service_foreground"

    if-eqz v0, :cond_d

    move v3, v1

    .line 625
    :cond_d
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_a

    :catch_1
    move-exception v0

    .line 627
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 630
    :goto_a
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_e

    const-string v0, "backup_url_count"

    .line 631
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBackUpUrls()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "cur_backup_url_index"

    .line 632
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBackUpUrlIndex()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_e
    const-string v0, "clear_space_restart_times"

    .line 635
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg()Lcom/ss/android/downloadlib/addownload/df/pt;

    move-result-object v2

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/addownload/df/pt;->df(Ljava/lang/String;)I

    move-result v2

    .line 634
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "mime_type"

    .line 636
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "network_available"

    .line 637
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_f

    goto :goto_b

    :cond_f
    const/4 v1, 0x2

    :goto_b
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "status_code"

    .line 638
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getHttpStatusCode()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 639
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/rg;->df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_c

    :catchall_0
    move-exception p1

    .line 641
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_10
    :goto_c
    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 0

    .line 87
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/rg;->q(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/rg;Ljava/util/concurrent/ConcurrentHashMap;I)V
    .locals 0

    .line 87
    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/rg;->rg(Ljava/util/concurrent/ConcurrentHashMap;I)V

    return-void
.end method

.method public static declared-synchronized rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 13

    const-class v0, Lcom/ss/android/downloadlib/rg;

    monitor-enter v0

    if-nez p0, :cond_0

    .line 133
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string p1, "onDownloadFinish info null"

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 134
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    goto/16 :goto_0

    :cond_0
    if-nez p1, :cond_1

    .line 137
    :try_start_1
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string p1, "onDownloadFinish nativeModel null"

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 138
    monitor-exit v0

    return-void

    .line 140
    :cond_1
    :try_start_2
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->lu()I

    move-result v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    .line 141
    monitor-exit v0

    return-void

    .line 143
    :cond_2
    :try_start_3
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/downloadlib/q/ux;->pt(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 145
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/rg;->q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)Ljava/lang/String;

    move-result-object v1

    .line 146
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/ss/android/downloadlib/addownload/model/c;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    .line 148
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {p1, v3, v4}, Lcom/ss/android/downloadad/api/rg/df;->c(J)V

    const/4 v3, 0x2

    .line 149
    invoke-virtual {p1, v3}, Lcom/ss/android/downloadad/api/rg/df;->pp(I)V

    .line 150
    invoke-virtual {p1, v1}, Lcom/ss/android/downloadad/api/rg/df;->df(Ljava/lang/String;)V

    .line 151
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v2, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 152
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v3

    invoke-interface {v2}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-virtual {v3, v2}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Ljava/util/Collection;)V

    .line 155
    invoke-static {p1}, Lcom/ss/android/downloadlib/rg;->df(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 157
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v2

    invoke-virtual {v2, p0, v1}, Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    const-string v2, "application/vnd.android.package-archive"

    .line 159
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 160
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 162
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object v2

    invoke-virtual {v2, p0, p1}, Lcom/ss/android/downloadlib/rg;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V

    .line 164
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->cd()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 165
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/rg;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    int-to-long v3, v3

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v5

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->hq()J

    move-result-wide v7

    .line 166
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTitle()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->pt()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object v12

    move-object v9, v1

    .line 165
    invoke-virtual/range {v2 .. v12}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg(JJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    :cond_3
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->pt()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, v2, v3, p1, v1}, Lcom/ss/android/downloadlib/addownload/pt/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;JLjava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 171
    :cond_4
    monitor-exit v0

    return-void

    :goto_0
    monitor-exit v0

    throw p0
.end method

.method private rg(Ljava/util/concurrent/ConcurrentHashMap;I)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/downloadad/api/rg/df;",
            ">;I)V"
        }
    .end annotation

    .line 879
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 880
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 881
    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/downloadad/api/rg/df;

    .line 882
    iget-object v4, v3, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v4

    const-string v5, "start_event_expire_hours"

    const/16 v6, 0xa8

    if-eqz v4, :cond_1

    .line 883
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->bj()J

    move-result-wide v7

    sub-long v7, v1, v7

    .line 884
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v4

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v4

    invoke-virtual {v4, v5, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v4

    mul-int/lit8 v4, v4, 0x3c

    mul-int/lit8 v4, v4, 0x3c

    mul-int/lit16 v4, v4, 0x3e8

    int-to-long v4, v4

    cmp-long v4, v7, v4

    if-ltz v4, :cond_0

    .line 885
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 887
    :cond_1
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->lu()I

    move-result v4

    const/4 v7, 0x1

    if-ne v4, v7, :cond_2

    .line 888
    invoke-direct {p0, v3}, Lcom/ss/android/downloadlib/rg;->pt(Lcom/ss/android/downloadad/api/rg/df;)I

    move-result v4

    if-gtz v4, :cond_0

    .line 890
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->bj()J

    move-result-wide v7

    sub-long v7, v1, v7

    .line 891
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v4

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v4

    invoke-virtual {v4, v5, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v4

    mul-int/lit8 v4, v4, 0x3c

    mul-int/lit8 v4, v4, 0x3c

    mul-int/lit16 v4, v4, 0x3e8

    int-to-long v4, v4

    cmp-long v4, v7, v4

    if-ltz v4, :cond_0

    .line 893
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 896
    :cond_2
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->lu()I

    move-result v4

    const/4 v5, 0x2

    if-ne v4, v5, :cond_7

    .line 897
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->ka()Z

    move-result v4

    if-eqz v4, :cond_3

    goto/16 :goto_0

    .line 900
    :cond_3
    invoke-static {v3}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 902
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->ev()I

    move-result v4

    const/4 v5, 0x4

    if-ne v4, v5, :cond_4

    .line 903
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->ev()I

    move-result p2

    .line 905
    :cond_4
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v3, v4, p2}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;I)Lorg/json/JSONObject;

    move-result-object v4

    .line 906
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v5

    invoke-virtual {v5, v4, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/df;)V

    .line 907
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 908
    invoke-static {v3}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    goto/16 :goto_0

    .line 909
    :cond_5
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->bj()J

    move-result-wide v4

    sub-long v4, v1, v4

    .line 910
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v7

    invoke-static {v7}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v7

    const-string v8, "finish_event_expire_hours"

    invoke-virtual {v7, v8, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v6

    mul-int/lit8 v6, v6, 0x3c

    mul-int/lit8 v6, v6, 0x3c

    mul-int/lit16 v6, v6, 0x3e8

    int-to-long v6, v6

    cmp-long v4, v4, v6

    if-ltz v4, :cond_6

    .line 912
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    .line 913
    :cond_6
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 914
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    .line 917
    :cond_7
    invoke-virtual {v3}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    .line 920
    :cond_8
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Ljava/util/List;)V

    return-void
.end method


# virtual methods
.method declared-synchronized df()V
    .locals 1

    monitor-enter p0

    .line 849
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg;->q:Lcom/ss/android/downloadlib/rg$df;

    if-eqz v0, :cond_0

    .line 851
    invoke-static {v0}, Lcom/ss/android/downloadlib/rg$df;->rg(Lcom/ss/android/downloadlib/rg$df;)V

    const/4 v0, 0x0

    .line 852
    iput-object v0, p0, Lcom/ss/android/downloadlib/rg;->q:Lcom/ss/android/downloadlib/rg$df;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 854
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    if-eqz p1, :cond_3

    if-nez p2, :cond_0

    goto :goto_0

    .line 676
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "install_finish_check_ttmd5"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 679
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object p1

    .line 680
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 683
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/rg$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/rg$3;-><init>(Lcom/ss/android/downloadlib/rg;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->df(Ljava/lang/Runnable;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public onAppBackground()V
    .locals 2

    .line 844
    sget-object v0, Lcom/ss/android/downloadlib/rg;->rg:Ljava/lang/String;

    const-string v1, "onAppBackground()"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x6

    .line 845
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/rg;->rg(I)V

    return-void
.end method

.method public onAppForeground()V
    .locals 2

    .line 837
    sget-object v0, Lcom/ss/android/downloadlib/rg;->rg:Ljava/lang/String;

    const-string v1, "onAppForeground()"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 838
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/rg;->df()V

    const/4 v0, 0x5

    .line 839
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/rg;->rg(I)V

    return-void
.end method

.method public onOpenInstaller(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    .line 944
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "info is null"

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    return-void

    .line 948
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p2

    const-string v0, "check_applink_mode"

    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p2

    and-int/lit8 p2, p2, 0x2

    if-eqz p2, :cond_1

    .line 949
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p2

    const-string v0, "ah_ext_json"

    invoke-virtual {p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lorg/json/JSONObject;

    .line 950
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/rg$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/rg$4;-><init>(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/df/pp;->df(Lcom/ss/android/downloadlib/df/pt;)V

    :cond_1
    return-void
.end method

.method public rg(I)V
    .locals 8

    .line 867
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 868
    iget-wide v2, p0, Lcom/ss/android/downloadlib/rg;->df:J

    sub-long v2, v0, v2

    const-wide/32 v4, 0x1d4c0

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    return-void

    .line 872
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v2

    new-instance v3, Lcom/ss/android/downloadlib/rg$rg;

    invoke-direct {v3, p0, p1}, Lcom/ss/android/downloadlib/rg$rg;-><init>(Lcom/ss/android/downloadlib/rg;I)V

    iget-wide v4, p0, Lcom/ss/android/downloadlib/rg;->df:J

    const-wide/16 v6, 0x0

    cmp-long p1, v4, v6

    if-lez p1, :cond_1

    const-wide/16 v4, 0x7d0

    goto :goto_0

    :cond_1
    const-wide/16 v4, 0x1f40

    :goto_0
    invoke-virtual {v2, v3, v4, v5}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    .line 874
    iput-wide v0, p0, Lcom/ss/android/downloadlib/rg;->df:J

    return-void
.end method

.method public rg(J)V
    .locals 5

    .line 467
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 468
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result p2

    if-nez p2, :cond_4

    iget-object p2, p1, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p2

    if-eqz p2, :cond_0

    goto :goto_1

    .line 473
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg()Lcom/ss/android/downloadlib/addownload/model/pt;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/ss/android/downloadlib/addownload/model/pt;->df(Lcom/ss/android/downloadad/api/rg/df;)Landroid/util/Pair;

    move-result-object p2

    const/4 v0, -0x1

    if-eqz p2, :cond_1

    .line 477
    iget-object v1, p2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Lcom/ss/android/downloadlib/addownload/model/pt$rg;

    .line 478
    iget-object p2, p2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    goto :goto_0

    .line 482
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg()Lcom/ss/android/downloadlib/addownload/model/pt;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg(Lcom/ss/android/downloadad/api/rg/df;)Lcom/ss/android/downloadlib/addownload/model/pt$rg;

    move-result-object v1

    move p2, v0

    :goto_0
    if-nez v1, :cond_2

    return-void

    .line 490
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg()Lcom/ss/android/downloadlib/addownload/model/pt;

    move-result-object v2

    iget-object v3, v1, Lcom/ss/android/downloadlib/addownload/model/pt$rg;->rg:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/addownload/model/pt;->df(Ljava/lang/String;)V

    .line 492
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "installed_app_name"

    .line 493
    iget-object v4, v1, Lcom/ss/android/downloadlib/addownload/model/pt$rg;->pt:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "installed_pkg_name"

    .line 494
    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pt$rg;->rg:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eq p2, v0, :cond_3

    const-string v0, "error_code"

    .line 496
    invoke-virtual {v2, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 498
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result p2

    invoke-static {v2, p2}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;I)V

    .line 500
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    const-string v0, "install_finish_hijack"

    invoke-virtual {p2, v0, v2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_2

    .line 502
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    const-string v0, "install_finish_may_hijack"

    invoke-virtual {p2, v0, v2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :cond_4
    :goto_1
    return-void

    :catchall_0
    move-exception p1

    .line 505
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p2

    const-string v0, "trySendInstallFinishHijack"

    invoke-virtual {p2, p1, v0}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public rg(JI)V
    .locals 4

    .line 436
    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p3

    const-string v0, "check_install_finish_hijack_delay_time"

    const-wide/32 v1, 0xdbba0

    .line 437
    invoke-virtual {p3, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long p3, v0, v2

    if-gez p3, :cond_0

    return-void

    :cond_0
    const-wide/32 v2, 0x493e0

    .line 442
    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    .line 443
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object p3

    new-instance v2, Lcom/ss/android/downloadlib/rg$2;

    invoke-direct {v2, p0, p1, p2}, Lcom/ss/android/downloadlib/rg$2;-><init>(Lcom/ss/android/downloadlib/rg;J)V

    invoke-virtual {p3, v2, v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 2

    .line 1072
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/rg$q;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/rg$q;-><init>(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;JJJJJZ)V
    .locals 10

    move-object v0, p1

    move-wide v1, p2

    .line 1192
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v3

    if-nez v3, :cond_0

    .line 1194
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const-string v1, "trySendClearSpaceEvent nativeModel null"

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    return-void

    .line 1198
    :cond_0
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "space_before"

    long-to-double v6, v1

    const-wide/high16 v8, 0x4130000000000000L    # 1048576.0

    div-double/2addr v6, v8

    .line 1199
    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "space_cleaned"

    sub-long v1, p4, v1

    long-to-double v1, v1

    div-double/2addr v1, v8

    .line 1200
    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    invoke-virtual {v4, v5, v1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "clean_up_time_cost"

    .line 1201
    invoke-static/range {p8 .. p9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "is_download_restarted"

    if-eqz p12, :cond_1

    const/4 v2, 0x1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    .line 1202
    :goto_0
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "byte_required"

    .line 1203
    invoke-static/range {p6 .. p7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "byte_required_after"

    sub-long v5, p6, p4

    long-to-double v5, v5

    div-double/2addr v5, v8

    .line 1204
    invoke-static {v5, v6}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "clear_sleep_time"

    .line 1205
    invoke-static/range {p10 .. p11}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1206
    invoke-static {p1, v4}, Lcom/ss/android/downloadlib/utils/pp;->q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)V

    .line 1207
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v1, "cleanup"

    invoke-virtual {v0, v1, v4, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1209
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;I)V
    .locals 11

    if-eqz p1, :cond_3

    if-nez p2, :cond_0

    goto :goto_2

    .line 266
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/rg;->df()V

    .line 267
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 268
    invoke-virtual {p2, v4, v5}, Lcom/ss/android/downloadad/api/rg/df;->df(J)V

    .line 269
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v0

    const-wide/16 v1, -0x1

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Ljava/io/File;J)J

    move-result-wide v0

    invoke-virtual {p2, v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->fw(J)V

    const/16 v0, 0x7d0

    if-eq p3, v0, :cond_1

    const-wide/16 v0, 0x7d0

    :goto_0
    move-wide v8, v0

    goto :goto_1

    .line 277
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-wide/32 v1, 0x1d4c0

    const-string v3, "check_install_failed_delay_time"

    invoke-virtual {v0, v3, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-gez v2, :cond_2

    return-void

    :cond_2
    const-wide/16 v2, 0x7530

    .line 283
    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    goto :goto_0

    .line 285
    :goto_1
    new-instance v10, Lcom/ss/android/downloadlib/rg$df;

    invoke-virtual {p2}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    const/4 v7, 0x0

    move-object v0, v10

    move v6, p3

    invoke-direct/range {v0 .. v7}, Lcom/ss/android/downloadlib/rg$df;-><init>(JIJILcom/ss/android/downloadlib/rg$1;)V

    .line 286
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object p1

    invoke-virtual {p1, v10, v8, v9}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    .line 287
    iput-object v10, p0, Lcom/ss/android/downloadlib/rg;->q:Lcom/ss/android/downloadlib/rg$df;

    .line 289
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/rg;)V
    .locals 3

    if-eqz p1, :cond_2

    if-nez p2, :cond_0

    goto :goto_0

    .line 928
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "ah_report_config"

    .line 929
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 930
    iget v1, p2, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-eqz v1, :cond_1

    .line 931
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v1

    const-string v2, "intent"

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    if-eqz v0, :cond_2

    .line 934
    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/rg;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/rg;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 936
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTempCacheData()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p1

    const-string v0, "ah_ext_json"

    invoke-virtual {p1, v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_0
    return-void
.end method

.method public declared-synchronized rg(Ljava/lang/String;)V
    .locals 6

    monitor-enter p0

    .line 175
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 176
    monitor-exit p0

    return-void

    .line 178
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/ss/android/downloadlib/utils/b;->rg()Z

    move-result v0

    if-nez v0, :cond_7

    .line 181
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Ljava/lang/String;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-nez v0, :cond_1

    .line 184
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg()Lcom/ss/android/downloadlib/addownload/model/pt;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/pt;->rg(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 185
    monitor-exit p0

    return-void

    .line 189
    :cond_1
    :try_start_2
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 191
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c()V

    .line 194
    :cond_2
    iget-object v1, v0, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v1, :cond_3

    .line 195
    monitor-exit p0

    return-void

    .line 198
    :cond_3
    :try_start_3
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "notification_opt_2"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_4

    .line 199
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v3

    invoke-virtual {v1, v3}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 202
    :cond_4
    new-instance v1, Lcom/ss/android/downloadlib/df/df;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/df/df;-><init>()V

    .line 205
    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v3

    const-string v4, "try_applink_delay_after_installed"

    const/4 v5, 0x0

    .line 206
    invoke-virtual {v3, v4, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v3

    .line 208
    new-instance v4, Lcom/ss/android/downloadlib/rg$1;

    invoke-direct {v4, p0, v0, p1}, Lcom/ss/android/downloadlib/rg$1;-><init>(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;)V

    invoke-virtual {v1, v0, v4, v3}, Lcom/ss/android/downloadlib/df/df;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/fw;I)V

    .line 242
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ss/android/downloadlib/q/ux;->c(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 245
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/downloadlib/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)V

    .line 247
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/rg;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/rg/rg;->df(Ljava/lang/String;)V

    .line 249
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    const-string v1, "application/vnd.android.package-archive"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 250
    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/rg;->rg(Ljava/util/List;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 252
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v3, "no_hide_notification"

    invoke-virtual {v1, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    if-eq v1, v2, :cond_5

    .line 253
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    .line 255
    :cond_5
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v1

    invoke-virtual {v1, v0, p1}, Lcom/ss/android/downloadlib/fw;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    .line 256
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/df/pt;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    .line 258
    :cond_6
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, p1}, Lcom/ss/android/downloadlib/fw;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 260
    :goto_0
    monitor-exit p0

    return-void

    .line 179
    :cond_7
    :try_start_4
    new-instance p1, Ljava/lang/RuntimeException;

    const-string v0, "handleAppInstalled in main thread."

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    if-nez p2, :cond_0

    return-void

    .line 520
    :cond_0
    invoke-static {p2}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 523
    :cond_1
    iget-object v0, p2, Lcom/ss/android/downloadad/api/rg/df;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 525
    invoke-virtual {p2}, Lcom/ss/android/downloadad/api/rg/df;->ev()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_2

    goto :goto_0

    :cond_2
    const/4 v1, 0x3

    .line 530
    :goto_0
    invoke-direct {p0, p2, p1, v1}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;I)Lorg/json/JSONObject;

    move-result-object p1

    .line 532
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-virtual {p2}, Lcom/ss/android/downloadad/api/rg/df;->bm()Ljava/lang/String;

    move-result-object v1

    const-string v2, "install_finish"

    invoke-virtual {v0, v1, v2, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 533
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_3
    return-void
.end method
