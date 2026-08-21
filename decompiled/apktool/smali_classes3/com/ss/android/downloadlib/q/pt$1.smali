.class Lcom/ss/android/downloadlib/q/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q/pt;->onSuccess()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/q/pt;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q/pt;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/ss/android/downloadlib/q/pt$1;->rg:Lcom/ss/android/downloadlib/q/pt;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    .line 104
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/c;->df()V

    .line 105
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/c;->q()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    .line 106
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/downloadad/api/rg/df;

    .line 107
    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v2

    if-nez v2, :cond_1

    goto :goto_0

    .line 111
    :cond_1
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v3

    const-string v4, "notification_opt_2"

    .line 112
    invoke-virtual {v3, v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v4

    const/4 v5, 0x1

    if-eq v4, v5, :cond_2

    goto :goto_0

    .line 115
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    if-nez v2, :cond_3

    goto :goto_0

    .line 119
    :cond_3
    invoke-static {v1}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-virtual {v1}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/ss/android/downloadlib/utils/b;->q(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_4

    const-string v4, "restart_notify_open_app_count"

    .line 120
    invoke-virtual {v2, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSpIntVal(Ljava/lang/String;)I

    move-result v6

    const-string v7, "noti_open_restart_times"

    .line 121
    invoke-virtual {v3, v7, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v3

    if-ge v6, v3, :cond_0

    .line 122
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/ss/android/downloadlib/q/ux;->pp(Lcom/ss/android/downloadad/api/rg/df;)V

    add-int/lit8 v6, v6, 0x1

    .line 123
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v4, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setSpValue(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 125
    :cond_4
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v4

    const/4 v6, -0x2

    if-ne v4, v6, :cond_5

    const-string v4, "restart_notify_continue_count"

    .line 126
    invoke-virtual {v2, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSpIntVal(Ljava/lang/String;)I

    move-result v6

    const-string v7, "noti_continue_restart_times"

    .line 127
    invoke-virtual {v3, v7, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v3

    if-ge v6, v3, :cond_0

    .line 128
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/ss/android/downloadlib/q/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    add-int/lit8 v6, v6, 0x1

    .line 129
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v4, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setSpValue(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 131
    :cond_5
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getRealStatus()I

    move-result v4

    const/4 v6, -0x3

    if-ne v4, v6, :cond_0

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isFileDownloaded(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-static {v1}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v4

    if-nez v4, :cond_0

    const-string v4, "restart_notify_install_count"

    .line 132
    invoke-virtual {v2, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSpIntVal(Ljava/lang/String;)I

    move-result v6

    const-string v7, "noti_install_restart_times"

    .line 133
    invoke-virtual {v3, v7, v5}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v3

    if-ge v6, v3, :cond_0

    .line 134
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/ss/android/downloadlib/q/ux;->q(Lcom/ss/android/downloadad/api/rg/df;)V

    add-int/lit8 v6, v6, 0x1

    .line 135
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v4, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setSpValue(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_6
    return-void
.end method
