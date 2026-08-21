.class Lcom/ss/android/socialbase/appdownloader/pt/df$2;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pt/df;->rg(Ljava/util/List;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/socialbase/appdownloader/pt/df;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/pt/df;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt/df$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt/df;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 104
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 105
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result p2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const-string p2, "LaunchResume"

    const-string v0, "onReceive : wifi connected !!!"

    .line 108
    invoke-static {p2, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getCPUThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    .line 110
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/pt/df$2$1;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/appdownloader/pt/df$2$1;-><init>(Lcom/ss/android/socialbase/appdownloader/pt/df$2;Landroid/content/Context;)V

    invoke-interface {p2, v0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    .line 135
    :try_start_0
    iget-object p2, p0, Lcom/ss/android/socialbase/appdownloader/pt/df$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt/df;

    invoke-static {p2}, Lcom/ss/android/socialbase/appdownloader/pt/df;->df(Lcom/ss/android/socialbase/appdownloader/pt/df;)Landroid/content/BroadcastReceiver;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 137
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 139
    :goto_0
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt/df$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt/df;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/appdownloader/pt/df;->rg(Lcom/ss/android/socialbase/appdownloader/pt/df;Landroid/content/BroadcastReceiver;)Landroid/content/BroadcastReceiver;

    return-void
.end method
