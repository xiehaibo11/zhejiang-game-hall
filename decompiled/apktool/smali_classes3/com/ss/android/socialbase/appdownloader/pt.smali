.class public Lcom/ss/android/socialbase/appdownloader/pt;
.super Ljava/lang/Object;


# static fields
.field private static c:Z

.field private static volatile df:Lcom/ss/android/socialbase/appdownloader/pt;

.field private static fw:Z

.field private static final rg:Ljava/lang/String;


# instance fields
.field private b:Lcom/ss/android/socialbase/appdownloader/q/ux;

.field private bm:Lcom/ss/android/socialbase/appdownloader/q/pt;

.field private f:Lcom/ss/android/socialbase/appdownloader/q/c;

.field private hq:Lcom/ss/android/socialbase/appdownloader/q/fw;

.field private oh:Lcom/ss/android/socialbase/appdownloader/q/oh;

.field private pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

.field private pt:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private rz:Lcom/ss/android/socialbase/appdownloader/q/q;

.field private un:Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;

.field private ux:Z

.field private v:Lcom/ss/android/socialbase/appdownloader/q/bm;

.field private z:Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 65
    const-class v0, Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->rg:Ljava/lang/String;

    const/4 v0, 0x0

    .line 67
    sput-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    const/4 v0, 0x0

    .line 72
    sput-boolean v0, Lcom/ss/android/socialbase/appdownloader/pt;->c:Z

    .line 73
    sput-boolean v0, Lcom/ss/android/socialbase/appdownloader/pt;->fw:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 262
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 74
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->ux:Z

    return-void
.end method

.method public static bm()Lcom/ss/android/socialbase/appdownloader/pt;
    .locals 2

    .line 266
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    if-nez v0, :cond_1

    .line 267
    const-class v0, Lcom/ss/android/socialbase/appdownloader/pt;

    monitor-enter v0

    .line 268
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/appdownloader/pt;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    if-nez v1, :cond_0

    .line 269
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-direct {v1}, Lcom/ss/android/socialbase/appdownloader/pt;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/appdownloader/pt;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    .line 270
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 272
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    return-object v0
.end method

.method private df(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    .line 816
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 818
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz p2, :cond_0

    .line 819
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSavePathRedirected()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p2

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private q(Landroid/content/Context;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 290
    sget-boolean v0, Lcom/ss/android/socialbase/appdownloader/pt;->c:Z

    if-nez v0, :cond_0

    const-string v0, "application/vnd.android.package-archive"

    .line 291
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->setMimeApk(Ljava/lang/String;)V

    .line 292
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setAppContext(Landroid/content/Context;)V

    .line 293
    new-instance p1, Lcom/ss/android/socialbase/appdownloader/pt/df;

    invoke-direct {p1}, Lcom/ss/android/socialbase/appdownloader/pt/df;-><init>()V

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadLaunchHandler(Lcom/ss/android/socialbase/downloader/downloader/IDownloadLaunchHandler;)V

    .line 294
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/pt;->z()V

    .line 295
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/pt;->r()V

    const/4 p1, 0x1

    .line 296
    sput-boolean p1, Lcom/ss/android/socialbase/appdownloader/pt;->c:Z

    :cond_0
    return-void
.end method

.method private r()V
    .locals 2

    .line 364
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 365
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/pt$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/appdownloader/pt$1;-><init>(Lcom/ss/android/socialbase/appdownloader/pt;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->setRetryScheduleHandler(Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;)V

    :cond_0
    return-void
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/pt;)Lcom/ss/android/socialbase/appdownloader/q/ux;
    .locals 0

    .line 63
    iget-object p0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    return-object p0
.end method

.method private rg(Lcom/ss/android/socialbase/appdownloader/q/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 695
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/pt$4;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/appdownloader/pt$4;-><init>(Lcom/ss/android/socialbase/appdownloader/pt;Lcom/ss/android/socialbase/appdownloader/q/pp;)V

    return-object v0
.end method

.method private rg(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1

    if-eqz p1, :cond_1

    .line 809
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p3, :cond_0

    goto :goto_0

    .line 812
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private rg(Ljava/util/List;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    .line 655
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "User-Agent"

    const/4 v2, 0x0

    if-eqz p1, :cond_2

    .line 658
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 659
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    if-eqz v3, :cond_0

    .line 661
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->getValue()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 662
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v2, 0x1

    .line 664
    :cond_1
    new-instance v4, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;->getValue()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v4, v5, v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 665
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    if-nez v2, :cond_3

    .line 672
    new-instance p1, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    sget-object v2, Lcom/ss/android/socialbase/appdownloader/df/rg;->rg:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 673
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    return-object v0
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/pt;Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V
    .locals 0

    .line 63
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V

    return-void
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    .line 643
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->download()I

    .line 644
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 646
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setAntiHijackErrorCode(I)V

    :cond_1
    if-eqz p1, :cond_2

    if-eqz p3, :cond_2

    .line 649
    invoke-virtual {p1, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setSavePathRedirected(Z)V

    :cond_2
    return-void
.end method

.method public static rg(Landroid/content/Context;I)Z
    .locals 1

    const/4 v0, 0x1

    .line 380
    invoke-static {p0, p1, v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;IZ)I

    move-result p0

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method static synthetic un()Ljava/lang/String;
    .locals 1

    .line 63
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->rg:Ljava/lang/String;

    return-object v0
.end method

.method private z()V
    .locals 5

    .line 324
    sget-boolean v0, Lcom/ss/android/socialbase/appdownloader/pt;->fw:Z

    if-eqz v0, :cond_0

    return-void

    .line 326
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    if-nez v0, :cond_1

    .line 327
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    invoke-direct {v0}, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    .line 330
    :cond_1
    :try_start_0
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 331
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.BOOT_COMPLETED"

    .line 332
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.ss.intent.action.DOWNLOAD_COMPLETE"

    .line 333
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 335
    new-instance v1, Landroid/content/IntentFilter;

    invoke-direct {v1}, Landroid/content/IntentFilter;-><init>()V

    const-string v2, "android.intent.action.PACKAGE_ADDED"

    .line 336
    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "android.intent.action.PACKAGE_REPLACED"

    .line 337
    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "package"

    .line 338
    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 340
    new-instance v2, Landroid/content/IntentFilter;

    invoke-direct {v2}, Landroid/content/IntentFilter;-><init>()V

    const-string v3, "android.intent.action.MEDIA_MOUNTED"

    .line 341
    invoke-virtual {v2, v3}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v3, "file"

    .line 342
    invoke-virtual {v2, v3}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 344
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    invoke-virtual {v3, v4, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 345
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    invoke-virtual {v0, v3, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 346
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pp:Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/4 v0, 0x1

    .line 347
    sput-boolean v0, Lcom/ss/android/socialbase/appdownloader/pt;->fw:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 349
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public b()Lcom/ss/android/socialbase/appdownloader/q/oh;
    .locals 1

    .line 836
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->oh:Lcom/ss/android/socialbase/appdownloader/q/oh;

    return-object v0
.end method

.method public c()Z
    .locals 3

    .line 135
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "package_flag_config"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public df()Lcom/ss/android/socialbase/appdownloader/q/pt;
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->bm:Lcom/ss/android/socialbase/appdownloader/q/pt;

    return-object v0
.end method

.method public df(Landroid/content/Context;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 832
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    const-string v0, "application/vnd.android.package-archive"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public df(Ljava/lang/String;)V
    .locals 1

    .line 306
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setDefaultSavePath(Ljava/lang/String;)V

    return-void
.end method

.method public f()Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;
    .locals 1

    .line 873
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->un:Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;

    return-object v0
.end method

.method public fw()Lcom/ss/android/socialbase/appdownloader/q/bm;
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->v:Lcom/ss/android/socialbase/appdownloader/q/bm;

    return-object v0
.end method

.method public hq()Lcom/ss/android/socialbase/appdownloader/q/fw;
    .locals 1

    .line 844
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->hq:Lcom/ss/android/socialbase/appdownloader/q/fw;

    return-object v0
.end method

.method public oh()Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;
    .locals 1

    .line 861
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getReserveWifiStatusListener()Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;

    move-result-object v0

    return-object v0
.end method

.method public pp()Lcom/ss/android/socialbase/appdownloader/q/c;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->f:Lcom/ss/android/socialbase/appdownloader/q/c;

    return-object v0
.end method

.method public pt()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pt:Ljava/lang/String;

    return-object v0
.end method

.method public q()Lcom/ss/android/socialbase/appdownloader/q/ux;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    return-object v0
.end method

.method public rg(Lcom/ss/android/socialbase/appdownloader/c;)I
    .locals 22

    move-object/from16 v7, p0

    move-object/from16 v8, p1

    const/4 v9, 0x0

    if-eqz v8, :cond_18

    .line 436
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_a

    :cond_0
    const/4 v11, 0x1

    .line 440
    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->pt()Ljava/util/List;

    move-result-object v0

    invoke-direct {v7, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 442
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->rg()Ljava/lang/String;

    move-result-object v1

    .line 444
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v9

    .line 448
    :cond_1
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->qx()I

    move-result v5

    if-nez v5, :cond_2

    move v6, v11

    goto :goto_0

    :cond_2
    move v6, v9

    .line 452
    :goto_0
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->cd()Ljava/lang/String;

    move-result-object v2

    .line 454
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->df()Ljava/lang/String;

    move-result-object v3

    .line 456
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 457
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->hq()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v3, v2, v6}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v2

    .line 460
    :cond_3
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v4

    const/16 v12, 0xff

    if-le v4, v12, :cond_4

    .line 461
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v4

    sub-int/2addr v4, v12

    invoke-virtual {v2, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    .line 464
    :cond_4
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_5

    move-object v3, v2

    .line 467
    :cond_5
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->hq()Ljava/lang/String;

    move-result-object v4

    const-string v12, ".apk"

    .line 468
    invoke-virtual {v2, v12}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_6

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->hq()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Lcom/ss/android/socialbase/appdownloader/q;->q(Ljava/lang/String;)Z

    move-result v12

    if-nez v12, :cond_6

    const-string v4, "application/vnd.android.package-archive"

    .line 472
    :cond_6
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->q()Ljava/lang/String;

    move-result-object v12

    .line 473
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->q()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-eqz v13, :cond_7

    .line 474
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/q;->df()Ljava/lang/String;

    move-result-object v12

    :cond_7
    move-object v15, v12

    .line 477
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_17

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_8

    goto/16 :goto_9

    .line 480
    :cond_8
    invoke-static {v1, v15}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result v14

    .line 482
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->vd()Lorg/json/JSONObject;

    move-result-object v12

    invoke-static {v12}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v12

    const-string v13, "resume_task_override_settings"

    invoke-virtual {v12, v13}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_9

    .line 483
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v12

    invoke-virtual {v12, v14}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v12
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz v12, :cond_9

    .line 487
    :try_start_1
    new-instance v13, Lorg/json/JSONObject;

    invoke-virtual {v12}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadSettingString()Ljava/lang/String;

    move-result-object v12

    invoke-direct {v13, v12}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8, v13}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/appdownloader/c;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 492
    :catchall_0
    :cond_9
    :try_start_2
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->vd()Lorg/json/JSONObject;

    move-result-object v12

    invoke-static {v14, v12}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->addTaskDownloadSetting(ILorg/json/JSONObject;)V

    .line 494
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ev()Z

    move-result v12

    .line 495
    invoke-static {v14}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v13

    const-string v10, "modify_force"

    invoke-virtual {v13, v10, v11}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v10

    if-ne v10, v11, :cond_a

    if-nez v12, :cond_a

    .line 496
    invoke-static {v15, v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isFileExist(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_a

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v10

    invoke-virtual {v10, v14}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v10

    if-nez v10, :cond_a

    move v10, v11

    goto :goto_1

    :cond_a
    move v10, v12

    .line 499
    :goto_1
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->bm()Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v12

    if-nez v12, :cond_c

    .line 501
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->pp()Z

    move-result v13

    if-nez v13, :cond_b

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->c()Z

    move-result v13

    if-eqz v13, :cond_c

    .line 502
    :cond_b
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->f()Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

    move-result-object v12

    if-eqz v12, :cond_d

    .line 503
    new-instance v12, Lcom/ss/android/socialbase/appdownloader/pp/df;

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->f()Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;

    move-result-object v13

    invoke-direct {v12, v13}, Lcom/ss/android/socialbase/appdownloader/pp/df;-><init>(Lcom/ss/android/socialbase/downloader/notification/AbsNotificationItem;)V

    :cond_c
    move/from16 v20, v14

    move-object/from16 v21, v15

    goto :goto_2

    .line 505
    :cond_d
    new-instance v19, Lcom/ss/android/socialbase/appdownloader/pp/df;

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v13

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->b()Ljava/lang/String;

    move-result-object v18

    move-object/from16 v12, v19

    move/from16 v20, v14

    move-object/from16 v21, v15

    move-object v15, v3

    move-object/from16 v16, v21

    move-object/from16 v17, v2

    invoke-direct/range {v12 .. v18}, Lcom/ss/android/socialbase/appdownloader/pp/df;-><init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v12, v19

    .line 509
    :goto_2
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ms()Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    move-result-object v13

    if-nez v13, :cond_e

    .line 512
    new-instance v13, Lcom/ss/android/socialbase/appdownloader/pt$2;

    invoke-direct {v13, v7}, Lcom/ss/android/socialbase/appdownloader/pt$2;-><init>(Lcom/ss/android/socialbase/appdownloader/pt;)V

    .line 521
    :cond_e
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCompleteHandlers()Ljava/util/List;

    move-result-object v14

    .line 522
    invoke-interface {v14}, Ljava/util/List;->isEmpty()Z

    move-result v15

    if-nez v15, :cond_f

    .line 524
    invoke-interface {v14}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v14

    :goto_3
    invoke-interface {v14}, Ljava/util/Iterator;->hasNext()Z

    move-result v15

    if-eqz v15, :cond_f

    invoke-interface {v14}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;

    .line 525
    invoke-virtual {v8, v15}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/appdownloader/c;

    goto :goto_3

    .line 529
    :cond_f
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->b()Ljava/lang/String;

    move-result-object v14
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 532
    :try_start_3
    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v15

    if-nez v15, :cond_10

    .line 533
    new-instance v15, Lorg/json/JSONObject;

    invoke-direct {v15, v14}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    goto :goto_4

    .line 535
    :cond_10
    new-instance v15, Lorg/json/JSONObject;

    invoke-direct {v15}, Lorg/json/JSONObject;-><init>()V

    :goto_4
    const-string v9, "auto_install_with_notification"

    .line 538
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->fw()Z

    move-result v11

    invoke-virtual {v15, v9, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v9, "auto_install_without_notification"

    .line 539
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->c()Z

    move-result v11

    invoke-virtual {v15, v9, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 541
    invoke-virtual {v15}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v14
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 545
    :catchall_1
    :try_start_4
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->pp()Z

    move-result v9

    if-nez v9, :cond_12

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->c()Z

    move-result v9

    if-eqz v9, :cond_11

    goto :goto_5

    :cond_11
    const/4 v9, 0x0

    goto :goto_6

    :cond_12
    :goto_5
    const/4 v9, 0x1

    :goto_6
    if-eqz v9, :cond_13

    .line 546
    invoke-static/range {v20 .. v20}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v11

    const-string v15, "enable_notification_ui"

    invoke-virtual {v11, v15}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v11

    const/4 v15, 0x1

    if-lt v11, v15, :cond_13

    .line 547
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg()Lcom/ss/android/socialbase/appdownloader/pp/q;

    move-result-object v11

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->fg()Ljava/lang/String;

    move-result-object v15

    move/from16 v8, v20

    invoke-virtual {v11, v8, v15}, Lcom/ss/android/socialbase/appdownloader/pp/q;->rg(ILjava/lang/String;)V

    goto :goto_7

    :cond_13
    move/from16 v8, v20

    .line 550
    :goto_7
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->with(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v11

    .line 551
    invoke-virtual {v11, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->url(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    .line 552
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->xv()Ljava/util/List;

    move-result-object v11

    invoke-virtual {v1, v11}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->backUpUrls(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    .line 553
    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->name(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    .line 554
    invoke-virtual {v1, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->title(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    move-object/from16 v2, v21

    .line 555
    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->savePath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    .line 556
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ux()Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->onlyWifi(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v1

    .line 557
    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->extraHeaders(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 558
    invoke-virtual {v0, v13}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->depend(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 559
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->fo()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 560
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->re()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->backUpUrlRetryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 561
    invoke-virtual {v0, v9}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->showNotification(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 562
    invoke-virtual {v0, v14}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->extra(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 563
    invoke-virtual {v0, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mimeType(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 564
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->dj()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->minProgressTimeMsInterval(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 565
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->go()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->maxProgressCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 566
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->rz()Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->mainThreadListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 567
    invoke-virtual {v0, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 568
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->om()Lcom/ss/android/socialbase/appdownloader/q/pp;

    move-result-object v1

    invoke-direct {v7, v1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/q/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationEventListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 569
    invoke-virtual {v0, v10}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->force(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 570
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->z()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->autoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 571
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->r()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->showNotificationForAutoResumed(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 572
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->v()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkStategy(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 573
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->un()Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->chunkAdjustCalculator(Lcom/ss/android/socialbase/downloader/downloader/IChunkAdjustCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 574
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->oh()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needHttpsToHttpRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 575
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->n()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->packageName(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 576
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ou()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->md5(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 577
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->y()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->expectFileLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 578
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->l()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needRetryDelay(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 579
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeArray(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 580
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->i()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needDefaultHttpServiceBackUp(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 581
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->lc()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needReuseFirstConnection(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 582
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->k()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needReuseChunkRunnable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 583
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->lu()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needIndependentProcess(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 584
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->oy()Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->enqueueType(Lcom/ss/android/socialbase/downloader/constants/EnqueueType;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 585
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ax()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorDepend(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 586
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->d()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryDelayTimeCalculator(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 587
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->bj()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->headConnectionAvailable(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 588
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->m()Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->fileUriProvider(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 589
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->t()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->diskSpaceHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 590
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->g()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needChunkDowngradeRetry(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 591
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->mc()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->notificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 592
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->vd()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->downloadSetting(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 593
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->fg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->iconUrl(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 594
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->fl()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needSDKMonitor(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 595
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->monitorScene(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 596
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->j()[I

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->extraMonitorStatus([I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 597
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->s()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->executorGroup(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 598
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->su()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->throttleNetSpeed(J)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 599
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ka()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->distinctDirectory(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 600
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ey()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->setAutoInstall(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v4

    if-eqz v4, :cond_14

    .line 602
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->bl()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_14

    .line 603
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->bl()Ljava/util/List;

    move-result-object v0

    invoke-virtual {v4, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->setDownloadCompleteHandlers(Ljava/util/List;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    :cond_14
    if-eqz v4, :cond_16

    if-eqz v9, :cond_15

    .line 606
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->gk()Z

    move-result v0

    if-eqz v0, :cond_15

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_15

    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_15

    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg()Z

    move-result v0

    if-nez v0, :cond_15

    .line 610
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v9, Lcom/ss/android/socialbase/appdownloader/pt$3;

    move-object v1, v9

    move-object/from16 v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/ss/android/socialbase/appdownloader/pt$3;-><init>(Lcom/ss/android/socialbase/appdownloader/pt;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V

    invoke-static {v0, v9}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg(Landroid/app/Activity;Lcom/ss/android/socialbase/appdownloader/q/f;)V

    goto :goto_8

    .line 624
    :cond_15
    sget-object v0, Lcom/ss/android/socialbase/appdownloader/pt;->rg:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "notification permission need not request, start download :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 625
    invoke-direct {v7, v4, v5, v6}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V

    .line 626
    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :cond_16
    :goto_8
    return v8

    :cond_17
    :goto_9
    move v1, v9

    return v1

    :catchall_2
    move-exception v0

    .line 633
    invoke-virtual/range {p1 .. p1}, Lcom/ss/android/socialbase/appdownloader/c;->ax()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v1

    new-instance v2, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v3, 0x3eb

    const-string v4, "addDownloadTask"

    invoke-static {v0, v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getErrorMsgWithTagPrefix(Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    const/4 v3, 0x0

    const/4 v4, 0x0

    invoke-static {v1, v3, v2, v4}, Lcom/ss/android/socialbase/downloader/monitor/DownloadMonitorHelper;->monitorSendWithTaskMonitor(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    .line 634
    sget-object v1, Lcom/ss/android/socialbase/appdownloader/pt;->rg:Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object v0, v2, v4

    const-string v0, "add download task error:%s"

    invoke-static {v0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v4

    :cond_18
    :goto_a
    move v4, v9

    return v4
.end method

.method public rg()Lcom/ss/android/socialbase/appdownloader/q/q;
    .locals 1

    .line 91
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->rz:Lcom/ss/android/socialbase/appdownloader/q/q;

    return-object v0
.end method

.method public rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 4

    .line 773
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_5

    if-nez p1, :cond_0

    goto :goto_0

    .line 777
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/pt;->ux()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-nez v0, :cond_1

    .line 780
    sget-object v0, Landroid/os/Environment;->DIRECTORY_DOWNLOADS:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    :cond_1
    if-nez v0, :cond_2

    .line 784
    sget-object v0, Landroid/os/Environment;->DIRECTORY_DOWNLOADS:Ljava/lang/String;

    invoke-static {v0}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    :cond_2
    if-nez v0, :cond_3

    .line 788
    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    .line 796
    :cond_3
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v2

    const-string v3, "get_download_info_by_list"

    invoke-virtual {v2, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v2

    if-nez v0, :cond_4

    if-eqz v2, :cond_4

    .line 799
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/pt;->df(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_4
    return-object v0

    :catchall_0
    move-exception p1

    .line 803
    sget-object p2, Lcom/ss/android/socialbase/appdownloader/pt;->rg:Ljava/lang/String;

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, v2

    const-string p1, "getAppDownloadInfo error:%s"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-object v1
.end method

.method public rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 680
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ".apk"

    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {p2}, Lcom/ss/android/socialbase/appdownloader/q;->q(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p2, "application/vnd.android.package-archive"

    :cond_0
    return-object p2
.end method

.method public rg(Landroid/content/Context;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 828
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    const-string v0, "application/vnd.android.package-archive"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public rg(Landroid/content/Context;II)V
    .locals 0

    packed-switch p3, :pswitch_data_0

    :pswitch_0
    goto :goto_0

    .line 401
    :pswitch_1
    :try_start_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->pause(I)V

    goto :goto_0

    .line 392
    :pswitch_2
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->resume(I)V

    goto :goto_0

    :pswitch_3
    const/4 p3, 0x1

    .line 404
    invoke-static {p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;IZ)I

    goto :goto_0

    .line 389
    :pswitch_4
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->restart(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 410
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
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
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/socialbase/appdownloader/q/q;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/appdownloader/q/ux;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    if-eqz p3, :cond_0

    .line 278
    iput-object p3, p0, Lcom/ss/android/socialbase/appdownloader/pt;->rz:Lcom/ss/android/socialbase/appdownloader/q/q;

    :cond_0
    if-eqz p4, :cond_1

    .line 281
    iput-object p4, p0, Lcom/ss/android/socialbase/appdownloader/pt;->bm:Lcom/ss/android/socialbase/appdownloader/q/pt;

    :cond_1
    if-eqz p5, :cond_2

    .line 284
    iput-object p5, p0, Lcom/ss/android/socialbase/appdownloader/pt;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    .line 286
    :cond_2
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/pt;->q(Landroid/content/Context;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/appdownloader/q/bm;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->v:Lcom/ss/android/socialbase/appdownloader/q/bm;

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/appdownloader/q/fw;)V
    .locals 0

    .line 848
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->hq:Lcom/ss/android/socialbase/appdownloader/q/fw;

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;)V
    .locals 0

    .line 869
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->un:Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;)V
    .locals 0

    .line 877
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->z:Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;)V
    .locals 1

    .line 865
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setReserveWifiStatusListener(Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;)V

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 1

    .line 103
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 105
    :cond_0
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt;->pt:Ljava/lang/String;

    return-void
.end method

.method public rz()Ljava/lang/String;
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->q:Ljava/lang/String;

    return-object v0
.end method

.method public ux()Ljava/io/File;
    .locals 1

    .line 147
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getGlobalSaveDir()Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public v()Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;
    .locals 1

    .line 881
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt;->z:Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;

    return-object v0
.end method
