.class public final Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Handler$Callback;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;,
        Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$Holder;
    }
.end annotation


# static fields
.field private static final MSG_SCHEDULE_WATCH:I


# instance fields
.field private volatile handler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$Holder;->access$000()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->handler:Landroid/os/Handler;

    return-void
.end method

.method public static getThreadLooper()Landroid/os/Looper;
    .locals 1

    .line 28
    invoke-static {}, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$Holder;->access$000()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public addWatcher(Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;J)V
    .locals 3

    .line 40
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->handler:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    .line 45
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/4 v2, 0x0

    .line 46
    iput v2, v1, Landroid/os/Message;->what:I

    .line 47
    iput-object p1, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 48
    invoke-virtual {v0, v1, p2, p3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method public handleMessage(Landroid/os/Message;)Z
    .locals 4

    .line 70
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_0

    goto :goto_0

    .line 73
    :cond_0
    :try_start_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;

    .line 74
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;->onScheduleWatch()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_1

    .line 76
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->addWatcher(Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 79
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public release()V
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->handler:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 64
    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->handler:Landroid/os/Handler;

    .line 65
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method

.method public removeWatcher(Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog$IWatcher;)V
    .locals 2

    .line 52
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/thread/DownloadWatchDog;->handler:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 56
    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->removeMessages(ILjava/lang/Object;)V

    return-void
.end method
