.class public Lcom/ss/android/socialbase/appdownloader/pp/rg;
.super Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;


# instance fields
.field private final df:Landroid/content/res/Resources;

.field private pp:Ljava/lang/String;

.field private pt:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private final rg:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 53
    invoke-direct {p0, p2, p3}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;-><init>(ILjava/lang/String;)V

    .line 55
    iput-object p4, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pt:Ljava/lang/String;

    .line 56
    iput-object p5, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->q:Ljava/lang/String;

    .line 57
    iput-object p6, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pp:Ljava/lang/String;

    .line 58
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    .line 59
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df:Landroid/content/res/Resources;

    return-void
.end method

.method private df()Landroid/support/v4/app/NotificationCompat$Builder;
    .locals 3

    .line 530
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rz()Ljava/lang/String;

    move-result-object v0

    .line 531
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-ge v1, v2, :cond_0

    .line 532
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    goto :goto_0

    .line 534
    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 535
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/q;->df(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 538
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/pt;->b()Lcom/ss/android/socialbase/appdownloader/q/oh;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 540
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/pt;->b()Lcom/ss/android/socialbase/appdownloader/q/oh;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-interface {v1, v2, v0}, Lcom/ss/android/socialbase/appdownloader/q/oh;->rg(Landroid/content/Context;Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v0

    goto :goto_0

    .line 542
    :cond_2
    new-instance v1, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-direct {v1, v2, v0}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/NoSuchMethodError; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    goto :goto_0

    .line 545
    :catch_0
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;)V

    :goto_0
    return-object v0
.end method

.method private rg(I)I
    .locals 1

    .line 569
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "enable_notification_ui"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-lt p1, v0, :cond_0

    .line 570
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->ux()I

    move-result p1

    return p1

    .line 572
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->fw()I

    move-result p1

    return p1
.end method

.method private rg(II)I
    .locals 1

    .line 502
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p2

    const-string v0, "notification_opt_2"

    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    .line 503
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->y()I

    move-result p1

    return p1

    :cond_0
    const/4 p2, 0x0

    if-eq p1, v0, :cond_3

    const/4 v0, 0x4

    if-ne p1, v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 510
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->ou()I

    move-result p2

    goto :goto_1

    :cond_2
    const/4 v0, 0x3

    if-ne p1, v0, :cond_4

    .line 512
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->y()I

    move-result p2

    goto :goto_1

    .line 508
    :cond_3
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->n()I

    move-result p2

    :cond_4
    :goto_1
    return p2
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)Landroid/app/Notification;
    .locals 25

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 86
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v2

    .line 87
    invoke-static {v2}, Lcom/ss/android/socialbase/appdownloader/q;->rg(I)I

    move-result v3

    if-nez v3, :cond_0

    const/4 v1, 0x0

    return-object v1

    .line 92
    :cond_0
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df()Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v4

    .line 93
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getFirstShowTime()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Landroid/support/v4/app/NotificationCompat$Builder;->setWhen(J)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 95
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getId()I

    move-result v5

    .line 96
    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v6

    .line 99
    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v8, 0x18

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-lt v7, v8, :cond_1

    const-string v7, "set_notification_group"

    .line 100
    invoke-virtual {v6, v7, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v7

    if-ne v7, v9, :cond_1

    const-string v7, "com.ss.android.socialbase.APP_DOWNLOADER"

    .line 101
    invoke-virtual {v4, v7}, Landroid/support/v4/app/NotificationCompat$Builder;->setGroup(Ljava/lang/String;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 102
    invoke-virtual {v4, v10}, Landroid/support/v4/app/NotificationCompat$Builder;->setGroupSummary(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 105
    :cond_1
    invoke-direct {v0, v3, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(II)I

    move-result v7

    if-eqz v7, :cond_2

    .line 107
    invoke-virtual {v4, v7}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    :cond_2
    const/4 v11, -0x4

    const/4 v12, 0x3

    const-string v13, "android.ss.intent.action.DOWNLOAD_CLICK_CONTENT"

    const/4 v14, 0x4

    const/4 v15, -0x1

    const/4 v8, 0x2

    if-eq v3, v9, :cond_8

    if-eq v3, v14, :cond_8

    if-ne v3, v8, :cond_3

    goto :goto_2

    :cond_3
    if-ne v3, v12, :cond_b

    .line 117
    invoke-virtual {v4, v10}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 118
    invoke-virtual {v4, v9}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v17, "android.ss.intent.action.DOWNLOAD_OPEN"

    if-eq v2, v15, :cond_7

    if-ne v2, v11, :cond_4

    goto :goto_1

    :cond_4
    const/4 v11, -0x3

    if-ne v2, v11, :cond_6

    const-string v2, "notification_click_install_auto_cancel"

    .line 126
    invoke-virtual {v6, v2, v9}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-nez v2, :cond_6

    .line 127
    invoke-virtual {v4, v10}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 128
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getClickInstallTimes()I

    move-result v2

    if-lez v2, :cond_5

    .line 129
    invoke-virtual {v4, v10}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_0

    .line 132
    :cond_5
    invoke-virtual {v4, v9}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    :cond_6
    :goto_0
    move-object/from16 v13, v17

    .line 138
    :cond_7
    :goto_1
    invoke-direct {v0, v13, v3, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Ljava/lang/String;II)Landroid/app/PendingIntent;

    move-result-object v2

    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v2, "android.ss.intent.action.DOWNLOAD_HIDE"

    .line 139
    invoke-direct {v0, v2, v3, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Ljava/lang/String;II)Landroid/app/PendingIntent;

    move-result-object v2

    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_5

    .line 113
    :cond_8
    :goto_2
    invoke-direct {v0, v13, v3, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Ljava/lang/String;II)Landroid/app/PendingIntent;

    move-result-object v2

    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    if-eq v3, v9, :cond_a

    if-ne v3, v14, :cond_9

    goto :goto_3

    :cond_9
    move v2, v10

    goto :goto_4

    :cond_a
    :goto_3
    move v2, v9

    .line 114
    :goto_4
    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 115
    invoke-virtual {v4, v10}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 145
    :cond_b
    :goto_5
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v18

    .line 146
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v20

    const-wide/16 v22, 0x0

    cmp-long v2, v20, v22

    if-lez v2, :cond_c

    const-wide/16 v22, 0x64

    mul-long v18, v18, v22

    .line 148
    div-long v12, v18, v20

    long-to-int v11, v12

    goto :goto_6

    :cond_c
    move v11, v10

    .line 153
    :goto_6
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTitle()Ljava/lang/String;

    move-result-object v12

    .line 154
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-eqz v13, :cond_d

    const-string v12, "tt_appdownloader_download_unknown_title"

    .line 155
    invoke-static {v12}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v12

    .line 156
    iget-object v13, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df:Landroid/content/res/Resources;

    invoke-virtual {v13, v12}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v12

    .line 159
    :cond_d
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg()Landroid/widget/RemoteViews;

    move-result-object v13

    .line 161
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v2

    .line 162
    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v8

    const-string v14, "notification_opt_2"

    invoke-virtual {v8, v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v8

    if-eq v8, v9, :cond_e

    const-string v8, "android.ss.intent.action.DOWNLOAD_CLICK_BTN"

    .line 164
    invoke-direct {v0, v8, v3, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Ljava/lang/String;II)Landroid/app/PendingIntent;

    move-result-object v8

    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setOnClickPendingIntent(ILandroid/app/PendingIntent;)V

    .line 166
    :cond_e
    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v8

    const-string v10, "enable_notification_ui"

    invoke-virtual {v8, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v8

    const-string v15, "setBackgroundResource"

    if-lt v8, v9, :cond_f

    .line 167
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->qx()I

    move-result v8

    .line 168
    invoke-virtual {v13, v2, v15, v8}, Landroid/widget/RemoteViews;->setInt(ILjava/lang/String;I)V

    const/4 v8, -0x1

    .line 169
    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setTextColor(II)V

    .line 172
    :cond_f
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->oh()I

    move-result v2

    .line 173
    invoke-virtual {v13, v2, v12}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 175
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v2

    const/4 v8, 0x0

    .line 176
    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    const/16 v8, 0x64

    move/from16 v12, p2

    .line 177
    invoke-virtual {v13, v2, v8, v11, v12}, Landroid/widget/RemoteViews;->setProgressBar(IIIZ)V

    .line 179
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->hq()I

    move-result v2

    if-eqz v7, :cond_10

    .line 181
    invoke-virtual {v13, v2, v7}, Landroid/widget/RemoteViews;->setImageViewResource(II)V

    .line 183
    :cond_10
    invoke-static {v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v7

    invoke-virtual {v7, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v7

    if-lt v7, v9, :cond_12

    .line 184
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg()Lcom/ss/android/socialbase/appdownloader/pp/q;

    move-result-object v7

    invoke-virtual {v7, v5}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg(I)Landroid/graphics/Bitmap;

    move-result-object v7

    if-eqz v7, :cond_11

    const-string v8, "setBackgroundColor"

    const/4 v12, 0x0

    .line 187
    invoke-virtual {v13, v2, v8, v12}, Landroid/widget/RemoteViews;->setInt(ILjava/lang/String;I)V

    .line 188
    invoke-virtual {v13, v2, v7}, Landroid/widget/RemoteViews;->setImageViewBitmap(ILandroid/graphics/Bitmap;)V

    goto :goto_7

    .line 191
    :cond_11
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->qx()I

    move-result v7

    .line 192
    invoke-virtual {v13, v2, v15, v7}, Landroid/widget/RemoteViews;->setInt(ILjava/lang/String;I)V

    :cond_12
    :goto_7
    const-string v2, ""

    const-string v7, "/"

    const/16 v8, 0x8

    if-eq v3, v9, :cond_2f

    const/4 v12, 0x4

    if-ne v3, v12, :cond_13

    goto/16 :goto_14

    :cond_13
    const-string v12, "tt_appdownloader_notification_download_resume"

    const/4 v15, 0x2

    if-ne v3, v15, :cond_19

    .line 238
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 239
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tt_appdownloader_notification_pausing"

    .line 241
    invoke-static {v2}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v2

    .line 242
    iget-object v3, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 244
    invoke-static {v12}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v3

    .line 245
    iget-object v12, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v12}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v12

    invoke-virtual {v12, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 247
    invoke-virtual {v6, v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v12

    if-ne v12, v9, :cond_15

    const/16 v12, 0x46

    const-string v15, "noti_progress_show_th"

    .line 248
    invoke-virtual {v6, v15, v12}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v12

    if-lt v11, v12, :cond_14

    .line 250
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v5

    const/4 v11, 0x0

    .line 251
    invoke-virtual {v13, v5, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 253
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v5

    .line 254
    invoke-virtual {v13, v5, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 256
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v5

    .line 257
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_9

    :cond_14
    const/4 v11, 0x0

    .line 259
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v2

    .line 260
    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 262
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v2

    .line 263
    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 265
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v2

    .line 266
    invoke-virtual {v13, v2, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 268
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->v()I

    move-result v2

    .line 269
    invoke-virtual {v13, v2, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    const-string v2, "tt_appdownloader_notification_download_continue"

    .line 271
    invoke-static {v2}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v2

    .line 272
    iget-object v5, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df:Landroid/content/res/Resources;

    invoke-virtual {v5, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_9

    :cond_15
    const/4 v11, 0x0

    .line 275
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v12

    .line 276
    invoke-virtual {v13, v12, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 278
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v5

    .line 279
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v12

    const/4 v15, 0x2

    if-lt v12, v15, :cond_16

    .line 281
    invoke-virtual {v13, v5, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_8

    .line 283
    :cond_16
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 286
    :goto_8
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v5

    .line 287
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 290
    :goto_9
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v5

    .line 291
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pp:Ljava/lang/String;

    invoke-static {v11}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_17

    .line 292
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_a

    :cond_17
    const/4 v11, 0x0

    .line 294
    invoke-virtual {v13, v5, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 295
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v5

    const/4 v10, 0x2

    if-lt v5, v10, :cond_18

    .line 296
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v8

    invoke-static {v8, v9, v11}, Lcom/ss/android/socialbase/appdownloader/q;->rg(JZ)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 297
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v7

    invoke-static {v7, v8, v11}, Lcom/ss/android/socialbase/appdownloader/q;->rg(JZ)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_18
    :goto_a
    move-object v8, v2

    move-object v2, v1

    goto/16 :goto_17

    :cond_19
    const/4 v8, 0x3

    if-ne v3, v8, :cond_2e

    .line 301
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v3

    invoke-virtual {v3, v5}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    .line 302
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_22

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v8

    const/4 v9, -0x4

    if-ne v8, v9, :cond_1a

    goto/16 :goto_e

    .line 352
    :cond_1a
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v8

    const/4 v9, -0x3

    if-ne v8, v9, :cond_20

    .line 353
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v8

    invoke-static {v8, v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v8

    if-eqz v3, :cond_1c

    .line 356
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_1c

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v9

    const-string v11, "application/vnd.android.package-archive"

    invoke-virtual {v9, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_1c

    const-string v9, "fix_ui_thread_parser_apk_file"

    const/4 v11, 0x1

    .line 357
    invoke-virtual {v6, v9, v11}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result v9

    xor-int/2addr v9, v11

    .line 358
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-static {v11, v3, v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)Z

    move-result v9

    if-eqz v9, :cond_1b

    const-string v9, "tt_appdownloader_notification_install_finished_open"

    .line 360
    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    const-string v11, "tt_appdownloader_notification_download_open"

    .line 361
    invoke-static {v11}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v11

    goto :goto_b

    :cond_1b
    const-string v9, "tt_appdownloader_notification_download_complete_with_install"

    .line 364
    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    const-string v11, "tt_appdownloader_notification_download_install"

    .line 365
    invoke-static {v11}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v11

    goto :goto_b

    :cond_1c
    const-string v9, "tt_appdownloader_notification_download_complete_without_install"

    .line 369
    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    .line 370
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v11

    invoke-virtual {v11, v5}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v11

    if-eqz v11, :cond_1d

    const-string v9, "tt_appdownloader_notification_download_complete_open"

    .line 372
    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    :cond_1d
    const/4 v11, 0x0

    .line 375
    :goto_b
    iget-object v12, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df:Landroid/content/res/Resources;

    invoke-virtual {v12, v9}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v9

    .line 376
    invoke-virtual {v4, v9}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    if-eqz v11, :cond_1e

    .line 378
    iget-object v2, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->df:Landroid/content/res/Resources;

    invoke-virtual {v2, v11}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 381
    :cond_1e
    invoke-virtual {v6, v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v11

    const/4 v12, 0x1

    if-ne v11, v12, :cond_1f

    .line 382
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v11

    .line 383
    invoke-virtual {v13, v11, v2}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 385
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->v()I

    move-result v11

    const/16 v12, 0x8

    .line 386
    invoke-virtual {v13, v11, v12}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_c

    :cond_1f
    const/16 v12, 0x8

    .line 388
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v11

    .line 389
    invoke-virtual {v13, v11, v12}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    :goto_c
    const/4 v15, 0x0

    move-object/from16 v24, v9

    move-object v9, v2

    move-object v2, v8

    move-object/from16 v8, v24

    goto/16 :goto_12

    :cond_20
    move-object v8, v2

    move-object v9, v8

    :cond_21
    :goto_d
    const/4 v15, 0x0

    goto/16 :goto_12

    .line 305
    :cond_22
    :goto_e
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v8

    const/4 v9, 0x2

    if-lt v8, v9, :cond_24

    .line 306
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v8

    const/4 v9, -0x1

    if-ne v8, v9, :cond_24

    .line 307
    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkError(Ljava/lang/Throwable;)Z

    move-result v8

    if-nez v8, :cond_23

    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v8

    if-eqz v8, :cond_24

    .line 308
    :cond_23
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v8

    invoke-static {v8, v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 309
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v8

    invoke-static {v8, v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 312
    :cond_24
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->v()I

    move-result v8

    const/16 v9, 0x8

    .line 313
    invoke-virtual {v13, v8, v9}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    if-eqz v1, :cond_25

    .line 314
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v8

    const/16 v9, 0x3ee

    if-ne v8, v9, :cond_25

    const-string v8, "tt_appdownloader_notification_download_space_failed"

    .line 315
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 316
    iget-object v9, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9, v8}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v8

    goto :goto_11

    .line 317
    :cond_25
    invoke-direct {v0, v1, v6, v3}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Lcom/ss/android/socialbase/downloader/exception/BaseException;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v8

    if-eqz v8, :cond_28

    if-eqz v3, :cond_26

    .line 318
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result v8

    if-eqz v8, :cond_26

    const/4 v8, 0x1

    goto :goto_f

    :cond_26
    const/4 v8, 0x0

    :goto_f
    if-eqz v8, :cond_27

    const-string v8, "tt_appdownloader_notification_download_waiting_wifi"

    .line 320
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    goto :goto_10

    :cond_27
    const-string v8, "tt_appdownloader_notification_download_waiting_net"

    .line 321
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 322
    :goto_10
    iget-object v9, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9, v8}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v8

    goto :goto_11

    :cond_28
    const-string v8, "tt_appdownloader_notification_download_failed"

    .line 324
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 325
    iget-object v9, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9, v8}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v8

    :goto_11
    const-string v9, "tt_appdownloader_notification_download_restart"

    .line 327
    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    .line 328
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v11}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    invoke-virtual {v11, v9}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v9

    .line 330
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v11

    const/16 v15, 0x8

    .line 331
    invoke-virtual {v13, v11, v15}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 334
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v11

    const/4 v15, 0x2

    if-lt v11, v15, :cond_21

    .line 335
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v11

    const/4 v15, -0x1

    if-ne v11, v15, :cond_21

    .line 336
    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkError(Ljava/lang/Throwable;)Z

    move-result v11

    if-eqz v11, :cond_2a

    .line 338
    invoke-static {v1, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWaitWifiAndInNet(Lcom/ss/android/socialbase/downloader/exception/BaseException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v8

    if-eqz v8, :cond_29

    const-string v8, "tt_appdownloader_notification_no_wifi_and_in_net"

    .line 339
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 340
    iget-object v9, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9, v8}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v8

    .line 341
    invoke-static {v12}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v9

    .line 342
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v11}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    invoke-virtual {v11, v9}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v9

    goto/16 :goto_d

    :cond_29
    const-string v8, "tt_appdownloader_notification_no_internet_error"

    .line 344
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 345
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v11}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    invoke-virtual {v11, v8}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v8

    goto/16 :goto_d

    .line 347
    :cond_2a
    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v11

    if-eqz v11, :cond_21

    const-string v8, "tt_appdownloader_notification_insufficient_space_error"

    .line 348
    invoke-static {v8}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v8

    .line 349
    iget-object v11, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v11}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    const/4 v12, 0x1

    new-array v15, v12, [Ljava/lang/Object;

    move-object v12, v15

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v16

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v22

    sub-long v16, v16, v22

    invoke-static/range {v16 .. v17}, Lcom/ss/android/socialbase/appdownloader/q;->df(J)Ljava/lang/String;

    move-result-object v16

    const/4 v15, 0x0

    aput-object v16, v12, v15

    invoke-virtual {v11, v8, v12}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    .line 393
    :goto_12
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v11

    const/16 v12, 0x8

    .line 394
    invoke-virtual {v13, v11, v12}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 396
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v11

    .line 397
    invoke-virtual {v13, v11, v15}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 399
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v11

    .line 400
    invoke-virtual {v13, v11, v12}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 403
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v10

    const/4 v11, 0x2

    if-lt v10, v11, :cond_2d

    .line 404
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v10

    const/4 v11, -0x1

    if-ne v10, v11, :cond_2d

    .line 405
    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isNetworkError(Ljava/lang/Throwable;)Z

    move-result v10

    if-nez v10, :cond_2b

    invoke-static/range {p1 .. p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isInsufficientSpaceError(Ljava/lang/Throwable;)Z

    move-result v10

    if-eqz v10, :cond_2d

    .line 406
    :cond_2b
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v5

    const/4 v10, 0x0

    .line 407
    invoke-virtual {v13, v5, v10}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 409
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v5

    const/16 v11, 0x8

    .line 410
    invoke-virtual {v13, v5, v11}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 412
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v5

    .line 413
    invoke-virtual {v13, v5, v10}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 415
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v5

    .line 418
    invoke-static {v1, v3}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWaitWifiAndInNet(Lcom/ss/android/socialbase/downloader/exception/BaseException;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v1

    if-eqz v1, :cond_2c

    .line 419
    invoke-virtual {v13, v5, v10}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 420
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v2

    invoke-static {v2, v3, v10}, Lcom/ss/android/socialbase/appdownloader/q;->rg(JZ)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 421
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v2

    invoke-static {v2, v3, v10}, Lcom/ss/android/socialbase/appdownloader/q;->rg(JZ)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_13

    :cond_2c
    const/16 v1, 0x8

    .line 423
    invoke-virtual {v13, v5, v1}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    :cond_2d
    :goto_13
    move-object v3, v9

    goto/16 :goto_17

    :cond_2e
    move-object v3, v2

    move-object v8, v3

    goto/16 :goto_17

    .line 199
    :cond_2f
    :goto_14
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getCurBytes()J

    move-result-wide v8

    invoke-static {v8, v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 200
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getTotalBytes()J

    move-result-wide v7

    invoke-static {v7, v8}, Lcom/ss/android/socialbase/appdownloader/q;->rg(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v1, 0x1

    if-ne v3, v1, :cond_31

    .line 203
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->getStatus()I

    move-result v1

    const/16 v3, 0xb

    if-ne v1, v3, :cond_30

    const-string v1, "tt_appdownloader_notification_waiting_download_complete_handler"

    .line 204
    invoke-static {v1}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v1

    goto :goto_15

    :cond_30
    const-string v1, "tt_appdownloader_notification_downloading"

    .line 206
    invoke-static {v1}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v1

    goto :goto_15

    :cond_31
    const-string v1, "tt_appdownloader_notification_prepare"

    .line 209
    invoke-static {v1}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v1

    .line 212
    :goto_15
    iget-object v3, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-string v3, "tt_appdownloader_notification_download_pause"

    .line 214
    invoke-static {v3}, Lcom/ss/android/socialbase/appdownloader/rz;->df(Ljava/lang/String;)I

    move-result v3

    .line 215
    iget-object v7, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v7}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v7

    invoke-virtual {v7, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v3

    .line 217
    invoke-direct {v0, v5}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(I)I

    move-result v5

    const/4 v7, 0x0

    .line 218
    invoke-virtual {v13, v5, v7}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 220
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rz()I

    move-result v5

    const/16 v8, 0x8

    .line 221
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 223
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->bm()I

    move-result v5

    .line 224
    invoke-virtual {v13, v5, v7}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 226
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v5

    .line 227
    iget-object v9, v0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pp:Ljava/lang/String;

    invoke-static {v9}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_32

    .line 228
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_16

    .line 230
    :cond_32
    invoke-virtual {v13, v5, v7}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    .line 234
    :goto_16
    invoke-virtual {v6, v10}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v7

    const/4 v9, 0x2

    if-lt v7, v9, :cond_33

    .line 235
    invoke-virtual {v13, v5, v8}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    :cond_33
    move-object v8, v1

    .line 428
    :goto_17
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->f()I

    move-result v1

    .line 429
    invoke-virtual {v13, v1, v2}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 431
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->un()I

    move-result v1

    .line 432
    invoke-virtual {v13, v1, v8}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 434
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->v()I

    move-result v1

    .line 435
    invoke-virtual {v13, v1, v2}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 437
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->z()I

    move-result v1

    .line 438
    invoke-virtual {v13, v1, v8}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 440
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->b()I

    move-result v1

    .line 441
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_34

    const/16 v2, 0x8

    .line 443
    invoke-virtual {v13, v1, v2}, Landroid/widget/RemoteViews;->setViewVisibility(II)V

    goto :goto_18

    .line 445
    :cond_34
    invoke-virtual {v13, v1, v3}, Landroid/widget/RemoteViews;->setTextViewText(ILjava/lang/CharSequence;)V

    .line 448
    :goto_18
    invoke-virtual {v6, v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_36

    .line 449
    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setAutoCancel(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    const-string v1, "notification_ongoing"

    const/4 v8, 0x0

    .line 450
    invoke-virtual {v6, v1, v8}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v2, :cond_35

    .line 451
    invoke-virtual {v4, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    move v1, v2

    goto :goto_1a

    .line 454
    :cond_35
    invoke-virtual {v4, v8}, Landroid/support/v4/app/NotificationCompat$Builder;->setOngoing(Z)Landroid/support/v4/app/NotificationCompat$Builder;

    goto :goto_19

    :cond_36
    const/4 v8, 0x0

    :goto_19
    move v1, v8

    .line 459
    :goto_1a
    invoke-virtual {v4}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    if-eqz v1, :cond_37

    .line 461
    iget v1, v3, Landroid/app/Notification;->flags:I

    const/4 v4, 0x2

    or-int/2addr v1, v4

    iput v1, v3, Landroid/app/Notification;->flags:I

    .line 462
    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->setOngoing(Z)V

    goto :goto_1b

    .line 464
    :cond_37
    invoke-virtual {v0, v8}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->setOngoing(Z)V

    .line 467
    :goto_1b
    iput-object v13, v3, Landroid/app/Notification;->contentView:Landroid/widget/RemoteViews;

    return-object v3
.end method

.method private rg(Ljava/lang/String;II)Landroid/app/PendingIntent;
    .locals 3

    .line 518
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    const-class v2, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 519
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "extra_click_download_ids"

    .line 520
    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p1, "extra_click_download_type"

    .line 521
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string p1, "extra_from_notification"

    const/4 p2, 0x1

    .line 522
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 524
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    const/high16 p2, 0xc000000

    invoke-static {p1, p3, v0, p2}, Landroid/app/PendingIntent;->getService(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1
.end method

.method private rg()Landroid/widget/RemoteViews;
    .locals 5

    .line 483
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->rg()I

    move-result v0

    .line 484
    new-instance v1, Landroid/widget/RemoteViews;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2, v0}, Landroid/widget/RemoteViews;-><init>(Ljava/lang/String;I)V

    .line 485
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x14

    if-le v0, v2, :cond_0

    .line 487
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 488
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->c()I

    move-result v0

    .line 489
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp;->r()I

    move-result v2

    const-string v3, "setBackgroundColor"

    .line 491
    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    .line 492
    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v2}, Landroid/content/res/Resources;->getColor(I)I

    move-result v2

    .line 491
    invoke-virtual {v1, v0, v3, v2}, Landroid/widget/RemoteViews;->setInt(ILjava/lang/String;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-object v1
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/exception/BaseException;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    .line 475
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result v2

    const/16 v3, 0x3f5

    if-eq v2, v3, :cond_0

    .line 476
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/exception/BaseException;->getErrorCode()I

    move-result p1

    const/16 v2, 0x419

    if-ne p1, v2, :cond_1

    :cond_0
    if-eqz p3, :cond_1

    .line 478
    invoke-virtual {p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object p1

    const-string p3, "application/vnd.android.package-archive"

    invoke-virtual {p3, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "notification_text_opt"

    .line 479
    invoke-virtual {p2, p1, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-ne p1, v0, :cond_1

    goto :goto_0

    :cond_1
    move v0, v1

    :goto_0
    return v0
.end method


# virtual methods
.method public updateNotification(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 75
    :cond_0
    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->rg(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)Landroid/app/Notification;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->notification:Landroid/app/Notification;

    .line 76
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->notification:Landroid/app/Notification;

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/appdownloader/pp/rg;->notify(Landroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 78
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public updateNotificationItem(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 64
    invoke-super {p0, p1}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->updateNotificationItem(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 65
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pt:Ljava/lang/String;

    .line 66
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->q:Ljava/lang/String;

    .line 67
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtra()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/rg;->pp:Ljava/lang/String;

    return-void
.end method
