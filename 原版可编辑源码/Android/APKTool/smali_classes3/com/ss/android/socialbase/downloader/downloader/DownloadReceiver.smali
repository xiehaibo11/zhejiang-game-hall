.class public Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;
.super Landroid/content/BroadcastReceiver;


# static fields
.field private static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 20
    const-class v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private autoRefreshUnsuccessDownloadTask(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 46
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 49
    :cond_0
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 50
    new-instance v1, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver$1;-><init>(Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;Landroid/content/Context;Ljava/lang/String;)V

    const-wide/16 p1, 0x7d0

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private forceStopAllDownloadTask(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 67
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationService;

    invoke-direct {v0, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 68
    invoke-virtual {v0, p2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 69
    invoke-virtual {p1, v0}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 71
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    if-eqz p1, :cond_5

    if-nez p2, :cond_0

    goto :goto_0

    .line 26
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    .line 27
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const-string v0, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 31
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 32
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 33
    sget-object v0, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;->TAG:Ljava/lang/String;

    const-string v1, "Received broadcast intent for android.net.conn.CONNECTIVITY_CHANGE"

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    :cond_2
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;->autoRefreshUnsuccessDownloadTask(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string v0, "android.intent.action.MEDIA_UNMOUNTED"

    .line 37
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "android.intent.action.MEDIA_REMOVED"

    .line 38
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "android.intent.action.MEDIA_BAD_REMOVAL"

    .line 39
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "android.intent.action.MEDIA_EJECT"

    .line 40
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 41
    :cond_4
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/DownloadReceiver;->forceStopAllDownloadTask(Landroid/content/Context;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method
