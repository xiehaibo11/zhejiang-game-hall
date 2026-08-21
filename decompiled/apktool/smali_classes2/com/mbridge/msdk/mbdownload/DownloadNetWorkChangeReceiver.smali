.class public Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;
.super Landroid/content/BroadcastReceiver;
.source "DownloadNetWorkChangeReceiver.java"


# instance fields
.field a:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 13
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    const/4 v0, 0x1

    .line 14
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;->a:Z

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    .line 17
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;->a:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 18
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;->a:Z

    return-void

    .line 21
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "FAILOVER_CONNECTION"

    .line 22
    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    const-string v2, "EXTRA_NO_CONNECTIVITY"

    .line 23
    invoke-virtual {p2, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p2

    .line 24
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=======reConn:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v0, "--noConn:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "DownloadNetWorkChangeReceiver"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 25
    sget-boolean p2, Lcom/mbridge/msdk/foundation/same/a;->h:Z

    if-nez p2, :cond_1

    return-void

    :cond_1
    const-string p2, "connectivity"

    .line 28
    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/net/ConnectivityManager;

    .line 29
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object p2

    if-eqz p1, :cond_3

    .line 31
    invoke-virtual {p1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 32
    invoke-virtual {p1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "=======networkInfo:Connected"

    .line 33
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 34
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->reStartAllTask()V

    goto :goto_0

    :cond_2
    const-string p1, "=======networkInfo:not Connected"

    .line 36
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->cancelAllTask()V

    goto :goto_0

    .line 40
    :cond_3
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->cancelAllTask()V

    :cond_4
    :goto_0
    return-void
.end method
