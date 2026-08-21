.class public Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;
.super Landroid/app/Service;


# static fields
.field private static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method

.method private handleIntent(Landroid/content/Intent;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 39
    :cond_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 40
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    const/4 v1, 0x0

    const-string v2, "extra_download_id"

    .line 44
    invoke-virtual {p1, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    if-nez p1, :cond_2

    return-void

    :cond_2
    const-string v1, "com.ss.android.downloader.action.DOWNLOAD_WAKEUP"

    .line 47
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 48
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 49
    new-instance v1, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService$1;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService$1;-><init>(Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;I)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_3
    const-string v1, "com.ss.android.downloader.action.PROCESS_NOTIFY"

    .line 59
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 60
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->recordTaskProcessIndependent(I)V

    goto :goto_0

    :cond_4
    const-string p1, "com.ss.android.downloader.action.MULTI_PROCESS_NOTIFY"

    .line 61
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 62
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadInMultiProcess()V

    :cond_5
    :goto_0
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()V
    .locals 0

    .line 25
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 26
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setAppContext(Landroid/content/Context;)V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 0

    .line 31
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    .line 32
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/impls/DownloadHandleService;->handleIntent(Landroid/content/Intent;)V

    const/4 p1, 0x2

    return p1
.end method
