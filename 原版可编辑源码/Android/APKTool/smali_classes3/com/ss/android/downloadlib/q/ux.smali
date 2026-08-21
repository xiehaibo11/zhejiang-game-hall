.class public Lcom/ss/android/downloadlib/q/ux;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/q/ux$rg;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/q/ux$1;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/ss/android/downloadlib/q/ux;-><init>()V

    return-void
.end method

.method private df(Lcom/ss/android/downloadad/api/rg/df;J)V
    .locals 5

    .line 74
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    .line 75
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "notification_opt_2"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    return-void

    .line 78
    :cond_0
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/q/ux;->rg(I)V

    .line 79
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v1

    new-instance v2, Lcom/ss/android/downloadlib/q/ux$1;

    invoke-direct {v2, p0, v0, p1}, Lcom/ss/android/downloadlib/q/ux$1;-><init>(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;)V

    const-wide/16 v3, 0x3e8

    mul-long/2addr p2, v3

    invoke-virtual {v1, v2, p2, p3}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private q(Lcom/ss/android/downloadad/api/rg/df;J)V
    .locals 5

    .line 107
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    .line 108
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "notification_opt_2"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    return-void

    .line 111
    :cond_0
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/q/ux;->rg(I)V

    .line 112
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v1

    new-instance v2, Lcom/ss/android/downloadlib/q/ux$2;

    invoke-direct {v2, p0, v0, p1}, Lcom/ss/android/downloadlib/q/ux$2;-><init>(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;)V

    const-wide/16 v3, 0x3e8

    mul-long/2addr p2, v3

    invoke-virtual {v1, v2, p2, p3}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/q/ux;
    .locals 1

    .line 53
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux$rg;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v0

    return-object v0
.end method

.method private rg(ILcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V
    .locals 9

    .line 162
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg()Z

    move-result v0

    const-string v1, "error_code"

    if-nez v0, :cond_0

    const/16 p1, 0x3ec

    .line 163
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {p3, v1, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void

    .line 166
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-nez v0, :cond_1

    const/16 p1, 0x3ed

    .line 168
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {p3, v1, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void

    .line 171
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getNotificationItem(I)Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 173
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 175
    :cond_2
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/pp/rg;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTitle()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtra()Ljava/lang/String;

    move-result-object v8

    move-object v2, v1

    move v4, p1

    invoke-direct/range {v2 .. v8}, Lcom/ss/android/socialbase/appdownloader/pp/rg;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->setCurBytes(J)V

    .line 177
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->setTotalBytes(J)V

    .line 178
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    const/4 v0, 0x0

    const/4 v2, 0x0

    invoke-virtual {v1, p1, v0, v2, v2}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->refreshStatus(ILcom/ss/android/socialbase/downloader/exception/BaseException;ZZ)V

    .line 179
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->addNotification(Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;)V

    .line 180
    invoke-virtual {v1, v0, v2}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->updateNotification(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V

    .line 181
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    const-string v0, "download_notification_show"

    invoke-virtual {p1, v0, p3, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/downloadlib/q/ux;->rg(ILcom/ss/android/downloadad/api/rg/df;Lorg/json/JSONObject;)V

    return-void
.end method


# virtual methods
.method public c(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    .line 134
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "noti_open_delay_secs"

    const/4 v2, 0x5

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    int-to-long v0, v0

    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public df(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 70
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x5

    const-string v2, "noti_continue_delay_secs"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    int-to-long v0, v0

    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->df(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public pp(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 2

    const-wide/16 v0, 0x5

    .line 130
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public pt(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    .line 103
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "noti_install_delay_secs"

    const/4 v2, 0x5

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    int-to-long v0, v0

    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->q(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public q(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 2

    const-wide/16 v0, 0x5

    .line 99
    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->q(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public rg(I)V
    .locals 2

    .line 185
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg()Lcom/ss/android/socialbase/appdownloader/pp/q;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg(I)Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_0

    .line 186
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 188
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg()Lcom/ss/android/socialbase/appdownloader/pp/q;

    move-result-object v1

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, p1, v0}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 2

    const-wide/16 v0, 0x5

    .line 63
    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/q/ux;->df(Lcom/ss/android/downloadad/api/rg/df;J)V

    return-void
.end method

.method public rg(Lcom/ss/android/downloadad/api/rg/df;J)V
    .locals 5

    .line 138
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    .line 139
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "notification_opt_2"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    return-void

    .line 142
    :cond_0
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/q/ux;->rg(I)V

    .line 143
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v1

    new-instance v2, Lcom/ss/android/downloadlib/q/ux$3;

    invoke-direct {v2, p0, v0, p1}, Lcom/ss/android/downloadlib/q/ux$3;-><init>(Lcom/ss/android/downloadlib/q/ux;ILcom/ss/android/downloadad/api/rg/df;)V

    const-wide/16 v3, 0x3e8

    mul-long/2addr p2, v3

    invoke-virtual {v1, v2, p2, p3}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method
