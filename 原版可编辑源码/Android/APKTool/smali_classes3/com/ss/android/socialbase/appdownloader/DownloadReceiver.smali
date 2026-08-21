.class public Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;
.super Landroid/content/BroadcastReceiver;


# static fields
.field private static final rg:Ljava/lang/String;


# instance fields
.field private df:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 37
    const-class v0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 41
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 42
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->df:Landroid/os/Handler;

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;)Landroid/os/Handler;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->df:Landroid/os/Handler;

    return-object p0
.end method

.method private rg(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 134
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->needAutoRefreshUnSuccessTask()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 138
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver$2;-><init>(Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;Landroid/content/Context;Ljava/lang/String;)V

    const-wide/16 p1, 0x7d0

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    if-eqz p1, :cond_8

    if-nez p2, :cond_0

    goto :goto_0

    .line 49
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 50
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    .line 54
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg()Lcom/ss/android/socialbase/appdownloader/q/q;

    move-result-object v1

    const-string v2, "android.intent.action.BOOT_COMPLETED"

    .line 55
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    if-eqz v1, :cond_2

    invoke-interface {v1}, Lcom/ss/android/socialbase/appdownloader/q/q;->rg()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 56
    :cond_2
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 57
    sget-object p2, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->rg:Ljava/lang/String;

    const-string v1, "Received broadcast intent for android.intent.action.BOOT_COMPLETED"

    invoke-static {p2, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    :cond_3
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->rg(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const-string v1, "android.intent.action.MEDIA_MOUNTED"

    .line 61
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 62
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result p2

    if-eqz p2, :cond_5

    .line 63
    sget-object p2, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->rg:Ljava/lang/String;

    const-string v1, "Received broadcast intent for android.intent.action.MEDIA_MOUNTED"

    invoke-static {p2, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    :cond_5
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;->rg(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_6
    const-string v1, "android.intent.action.PACKAGE_ADDED"

    .line 67
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_7

    const-string v1, "android.intent.action.PACKAGE_REPLACED"

    .line 68
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 70
    :cond_7
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 71
    new-instance v1, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver$1;

    invoke-direct {v1, p0, p2, p1}, Lcom/ss/android/socialbase/appdownloader/DownloadReceiver$1;-><init>(Lcom/ss/android/socialbase/appdownloader/DownloadReceiver;Landroid/content/Intent;Landroid/content/Context;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V

    :cond_8
    :goto_0
    return-void
.end method
