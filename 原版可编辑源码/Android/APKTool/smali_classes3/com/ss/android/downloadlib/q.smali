.class public Lcom/ss/android/downloadlib/q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/ux;


# static fields
.field private static rg:Ljava/lang/String;


# instance fields
.field private df:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 46
    const-class v0, Lcom/ss/android/downloadlib/q;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/q;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/q;->df:Landroid/os/Handler;

    return-void
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2

    .line 190
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/pt;->c(I)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 194
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/addownload/df/df;

    invoke-direct {v1, p1}, Lcom/ss/android/downloadlib/addownload/df/df;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->df(Ljava/lang/Runnable;)V

    return-void
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 14

    .line 143
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v0

    const-wide/16 v1, -0x1

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Ljava/io/File;J)J

    move-result-wide v6

    .line 144
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Ljava/io/File;)J

    move-result-wide v3

    const-wide/16 v8, 0xa

    .line 145
    div-long/2addr v3, v8

    const-wide/32 v8, 0x1f400000

    invoke-static {v8, v9, v3, v4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v3

    .line 146
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v8

    long-to-double v3, v3

    long-to-double v10, v8

    const-wide/high16 v12, 0x4004000000000000L    # 2.5

    mul-double/2addr v10, v12

    add-double/2addr v10, v3

    cmp-long v0, v6, v1

    if-lez v0, :cond_0

    cmp-long v0, v8, v1

    if-lez v0, :cond_0

    long-to-double v0, v6

    cmpg-double v2, v0, v10

    if-gez v2, :cond_0

    sub-double v0, v10, v0

    .line 153
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pt;->df()J

    move-result-wide v2

    long-to-double v2, v2

    cmpl-double v0, v0, v2

    if-lez v0, :cond_0

    .line 154
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg(I)V

    .line 158
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/q$3;

    move-object v3, v1

    move-object v4, p0

    move-object/from16 v5, p2

    move-object v12, p1

    invoke-direct/range {v3 .. v12}, Lcom/ss/android/downloadlib/q$3;-><init>(Lcom/ss/android/downloadlib/q;Lcom/ss/android/downloadad/api/rg/df;JJDLcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, -0x1

    if-ne p3, v0, :cond_1

    if-eqz p2, :cond_1

    .line 60
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 61
    invoke-static {p1, v1}, Lcom/ss/android/downloadlib/utils/pp;->q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lorg/json/JSONObject;)V

    .line 62
    invoke-static {v1, p1}, Lcom/ss/android/downloadlib/rg;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lorg/json/JSONObject;

    .line 63
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "download_failed"

    invoke-static {v2, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v1

    if-nez v1, :cond_2

    return-void

    :cond_2
    if-ne p3, v0, :cond_9

    const/4 p3, 0x0

    if-eqz p2, :cond_8

    .line 75
    :try_start_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p3

    invoke-static {p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p3

    const-string v0, "toast_without_network"

    const/4 v2, 0x0

    invoke-virtual {p3, v0, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p3

    const/4 v0, 0x1

    if-ne p3, v0, :cond_3

    .line 76
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result p3

    const/16 v3, 0x419

    if-ne p3, v3, :cond_3

    .line 77
    iget-object p3, p0, Lcom/ss/android/downloadlib/q;->df:Landroid/os/Handler;

    new-instance v3, Lcom/ss/android/downloadlib/q$1;

    invoke-direct {v3, p0}, Lcom/ss/android/downloadlib/q$1;-><init>(Lcom/ss/android/downloadlib/q;)V

    invoke-virtual {p3, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 89
    :cond_3
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result p3

    if-eqz p3, :cond_7

    .line 90
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p3

    if-eqz p3, :cond_4

    .line 91
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p3

    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-interface {p3, v3, v4}, Lcom/ss/android/download/api/config/f;->rg(J)V

    .line 93
    :cond_4
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string v3, "download_failed_for_space"

    invoke-virtual {p3, v3, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 94
    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->mc()Z

    move-result p3

    if-nez p3, :cond_5

    .line 95
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string v3, "download_can_restart"

    invoke-virtual {p3, v3, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 96
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 98
    :cond_5
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p3

    if-eqz p3, :cond_6

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->hq()Lcom/ss/android/download/api/config/f;

    move-result-object p3

    invoke-interface {p3}, Lcom/ss/android/download/api/config/f;->pt()Z

    move-result p3

    if-nez p3, :cond_7

    .line 100
    :cond_6
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p3

    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->df()J

    move-result-wide v3

    invoke-virtual {p3, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(J)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object p3

    if-eqz p3, :cond_7

    .line 101
    invoke-interface {p3}, Lcom/ss/android/download/api/download/DownloadModel;->isShowToast()Z

    move-result v1

    if-eqz v1, :cond_7

    .line 102
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v3, "show_no_enough_space_toast"

    .line 103
    invoke-virtual {v1, v3, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-ne v2, v0, :cond_7

    .line 104
    iget-object v0, p0, Lcom/ss/android/downloadlib/q;->df:Landroid/os/Handler;

    new-instance v2, Lcom/ss/android/downloadlib/q$2;

    invoke-direct {v2, p0, v1, p3}, Lcom/ss/android/downloadlib/q$2;-><init>(Lcom/ss/android/downloadlib/q;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/download/api/download/DownloadModel;)V

    invoke-virtual {v0, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 117
    :cond_7
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object p3

    const-string v0, "exception_msg_length"

    const/16 v1, 0x1f4

    invoke-virtual {p3, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p3

    .line 118
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p3}, Lcom/ss/android/downloadlib/utils/b;->rg(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p3

    .line 119
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v1

    invoke-direct {v0, v1, p3}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    move-object p3, v0

    .line 121
    :cond_8
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-virtual {v0, p1, p3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 122
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object p3

    const-string v0, ""

    invoke-virtual {p3, p1, p2, v0}, Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;Ljava/lang/String;)V

    goto :goto_1

    :cond_9
    const/4 p2, -0x3

    if-ne p3, p2, :cond_a

    .line 124
    invoke-static {p1, v1}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V

    goto :goto_1

    :catch_0
    move-exception p1

    goto :goto_0

    :cond_a
    const/16 p2, 0x7d1

    if-ne p3, p2, :cond_b

    .line 127
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object p3

    invoke-virtual {p3, p1, v1, p2}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;I)V

    goto :goto_1

    :cond_b
    const/16 p2, 0xb

    if-ne p3, p2, :cond_c

    .line 130
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object p2

    const/16 p3, 0x7d0

    invoke-virtual {p2, p1, v1, p3}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;I)V

    .line 131
    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->gk()Z

    move-result p2

    if-nez p2, :cond_c

    .line 132
    invoke-direct {p0, p1, v1}, Lcom/ss/android/downloadlib/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 136
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object p2

    const-string p3, "onAppDownloadMonitorSend"

    invoke-interface {p2, p1, p3}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :cond_c
    :goto_1
    return-void
.end method
