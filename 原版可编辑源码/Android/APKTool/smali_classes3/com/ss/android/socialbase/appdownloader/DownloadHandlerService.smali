.class public Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;
.super Landroid/app/Service;


# static fields
.field private static final rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    const-class v0, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method

.method private df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 7

    .line 217
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 219
    new-instance v0, Landroid/content/Intent;

    const-class v2, Lcom/ss/android/socialbase/appdownloader/view/DownloadTaskDeleteActivity;

    invoke-direct {v0, p0, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "extra_click_download_ids"

    .line 220
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const/high16 v2, 0x10000000

    .line 221
    invoke-virtual {v0, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 222
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->startActivity(Landroid/content/Intent;)V

    .line 223
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    .line 225
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateDownloadTime()V

    if-eqz p2, :cond_0

    const/4 v2, 0x7

    .line 228
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadTime()J

    move-result-wide v5

    const-string v3, ""

    move-object v0, p2

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/appdownloader/q/pt;->rg(IILjava/lang/String;IJ)V

    :cond_0
    if-eqz p3, :cond_1

    const/4 p2, 0x7

    const-string v0, ""

    .line 231
    invoke-interface {p3, p2, p1, v0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static rg(Landroid/content/Context;IZ)V
    .locals 2

    const/4 v0, 0x0

    if-eqz p2, :cond_0

    .line 241
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 245
    :try_start_0
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 247
    invoke-interface {p2, v1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 250
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    move p2, v0

    :goto_0
    if-eqz p2, :cond_1

    return-void

    :cond_1
    const/4 p2, 0x1

    .line 258
    invoke-static {p0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;IZ)I

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "Open Fail!"

    .line 259
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_2
    return-void
.end method

.method private static rg(Landroid/content/Context;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    .line 149
    :cond_0
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p0

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object p0

    if-nez p1, :cond_1

    if-nez p0, :cond_1

    return-void

    .line 152
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 153
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService$2;

    invoke-direct {v1, p2, p1, p0}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService$2;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 140
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 141
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 142
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->stopPauseReserveOnWifi()V

    :cond_0
    return-void
.end method

.method public static rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 8

    .line 269
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 270
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    .line 271
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getMimeType()Ljava/lang/String;

    move-result-object v2

    const-string v3, "application/vnd.android.package-archive"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    if-eqz v0, :cond_0

    .line 272
    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 274
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 278
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const-string v7, ""

    const/4 v2, 0x0

    const/4 v3, 0x1

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_2

    .line 306
    :pswitch_1
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->pause(I)V

    .line 307
    invoke-static {p0, p1}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    if-eqz p2, :cond_1

    const/4 v2, 0x5

    .line 309
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadTime()J

    move-result-wide v5

    const-string v3, ""

    move-object v0, p2

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/appdownloader/q/pt;->rg(IILjava/lang/String;IJ)V

    :cond_1
    if-eqz p3, :cond_6

    const/4 p0, 0x5

    .line 311
    invoke-interface {p3, p0, p1, v7, v7}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 289
    :pswitch_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->canResume(I)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 290
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->resume(I)V

    goto :goto_0

    .line 293
    :cond_2
    invoke-static {p1, v3, v2}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZZ)V

    :goto_0
    if-eqz p2, :cond_3

    const/4 v2, 0x6

    .line 296
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadTime()J

    move-result-wide v5

    const-string v3, ""

    move-object v0, p2

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/appdownloader/q/pt;->rg(IILjava/lang/String;IJ)V

    :cond_3
    if-eqz p3, :cond_6

    const/4 p0, 0x6

    .line 298
    invoke-interface {p3, p0, p1, v7, v7}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 315
    :pswitch_3
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3, v1, v3}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Context;IZ)V

    .line 316
    invoke-static {p0, p2, p1}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 319
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string p1, "notification_click_install_auto_cancel"

    invoke-virtual {p0, p1, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-nez p0, :cond_4

    .line 320
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getNotificationItem(I)Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

    move-result-object p0

    if-eqz p0, :cond_4

    .line 322
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->recordClickInstall()V

    const/4 p1, -0x3

    const/4 p2, 0x0

    .line 323
    invoke-virtual {p0, p1, p2, v2, v3}, Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;->refreshStatus(ILcom/ss/android/socialbase/downloader/exception/BaseException;ZZ)V

    goto :goto_1

    :cond_4
    move v2, v3

    :goto_1
    if-eqz v2, :cond_6

    .line 328
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    goto :goto_2

    .line 282
    :pswitch_4
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p2

    const-string p3, "enable_notification_ui"

    invoke-virtual {p2, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p2

    const/4 p3, 0x2

    if-lt p2, p3, :cond_5

    .line 283
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isOnlyWifi()Z

    move-result p2

    if-eqz p2, :cond_5

    .line 284
    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setOnlyWifi(Z)V

    .line 286
    :cond_5
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->restart(I)V

    :cond_6
    :goto_2
    return-void

    :pswitch_data_0
    .packed-switch -0x4
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_4
        :pswitch_0
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 7

    .line 184
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 186
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 192
    :try_start_0
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 194
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_2

    .line 199
    new-instance v0, Landroid/content/Intent;

    const-class v2, Lcom/ss/android/socialbase/appdownloader/view/DownloadTaskDeleteActivity;

    invoke-direct {v0, p0, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "extra_click_download_ids"

    .line 200
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const/high16 v2, 0x10000000

    .line 201
    invoke-virtual {v0, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 202
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->startActivity(Landroid/content/Intent;)V

    .line 203
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    .line 205
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->updateDownloadTime()V

    if-eqz p2, :cond_1

    const/4 v2, 0x7

    .line 208
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v4

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadTime()J

    move-result-wide v5

    const-string v3, ""

    move-object v0, p2

    invoke-interface/range {v0 .. v6}, Lcom/ss/android/socialbase/appdownloader/q/pt;->rg(IILjava/lang/String;IJ)V

    :cond_1
    if-eqz p3, :cond_2

    const/4 p2, 0x7

    const-string v0, ""

    .line 211
    invoke-interface {p3, p2, p1, v0, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private rg(Landroid/content/Intent;)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 63
    :cond_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    .line 64
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    :cond_1
    const-string v2, "extra_click_download_ids"

    .line 69
    invoke-virtual {p1, v2, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    const-string v3, "extra_click_download_type"

    .line 70
    invoke-virtual {p1, v3, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    .line 72
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ss/android/socialbase/appdownloader/pt;->df()Lcom/ss/android/socialbase/appdownloader/q/pt;

    move-result-object v3

    .line 73
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object v4

    const-string v5, "extra_from_notification"

    .line 75
    invoke-virtual {p1, v5, v0}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p1

    const/4 v5, 0x1

    if-eqz p1, :cond_2

    .line 76
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v6, "notification_opt_2"

    invoke-virtual {p1, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    if-ne p1, v5, :cond_2

    .line 78
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 81
    :cond_2
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-nez p1, :cond_3

    return v0

    :cond_3
    const-string v6, "android.ss.intent.action.DOWNLOAD_CLICK_CONTENT"

    .line 86
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 88
    invoke-direct {p0, p1, v3, v4}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    goto/16 :goto_1

    :cond_4
    const-string v6, "android.ss.intent.action.DOWNLOAD_OPEN"

    .line 89
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 91
    invoke-static {p0, p1, v3, v4}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    goto/16 :goto_1

    :cond_5
    const-string v6, "android.ss.intent.action.DOWNLOAD_CLICK_BTN"

    .line 92
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_8

    .line 94
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v1

    if-nez v1, :cond_6

    return v0

    .line 99
    :cond_6
    invoke-static {p0, p1, v3, v4}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    .line 101
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadOverStatus()Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v3, "no_hide_notification"

    invoke-virtual {v1, v3, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-nez v1, :cond_b

    .line 103
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v3, "enable_notification_ui"

    invoke-virtual {v1, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v3, 0x2

    if-lt v1, v3, :cond_7

    .line 104
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    const/4 v1, -0x1

    if-ne p1, v1, :cond_7

    goto :goto_0

    :cond_7
    move v5, v0

    :goto_0
    if-nez v5, :cond_b

    .line 106
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    .line 107
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    goto :goto_1

    :cond_8
    const-string v6, "android.ss.intent.action.DOWNLOAD_DELETE"

    .line 110
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_9

    .line 111
    invoke-direct {p0, p1, v3, v4}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V

    goto :goto_1

    :cond_9
    const-string p1, "android.ss.intent.action.DOWNLOAD_HIDE"

    .line 112
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_a

    .line 113
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->hideNotification(I)V

    goto :goto_1

    :cond_a
    const-string p1, "android.intent.action.BOOT_COMPLETED"

    .line 114
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_c

    const-string p1, "android.intent.action.MEDIA_MOUNTED"

    .line 115
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_b

    goto :goto_2

    :cond_b
    :goto_1
    return v0

    .line 117
    :cond_c
    :goto_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    .line 118
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService$1;-><init>(Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return v5
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()V
    .locals 0

    .line 45
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 46
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setAppContext(Landroid/content/Context;)V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 0

    .line 51
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    .line 52
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 53
    sget-object p2, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg:Ljava/lang/String;

    const-string p3, "onStartCommand"

    invoke-static {p2, p3}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    :cond_0
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->rg(Landroid/content/Intent;)Z

    .line 56
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;->stopSelf()V

    const/4 p1, 0x2

    return p1
.end method
