.class public interface abstract Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/ss/android/socialbase/downloader/downloader/DownloadService;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# virtual methods
.method public abstract isServiceAlive()Z
.end method

.method public abstract isServiceForeground()Z
.end method

.method public abstract onBind(Landroid/content/Intent;)Landroid/os/IBinder;
.end method

.method public abstract onDestroy()V
.end method

.method public abstract onStartCommand(Landroid/content/Intent;II)V
.end method

.method public abstract onStartCommandOnMainThread()V
.end method

.method public abstract pendDownloadTask(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
.end method

.method public abstract setDownloadService(Ljava/lang/ref/WeakReference;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ref/WeakReference<",
            "TT;>;)V"
        }
    .end annotation
.end method

.method public abstract setLogLevel(I)V
.end method

.method public abstract setServiceConnectionListener(Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceConnectionListener;)V
.end method

.method public abstract startForeground(ILandroid/app/Notification;)V
.end method

.method public abstract startService()V
.end method

.method public abstract stopForeground(Z)V
.end method

.method public abstract tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
.end method

.method public abstract tryDownloadWithEngine(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
.end method
