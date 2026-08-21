.class Lcom/ss/android/downloadlib/addownload/pp$q;
.super Landroid/os/AsyncTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/pp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "q"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp;


# direct methods
.method private constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;)V
    .locals 0

    .line 826
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/downloadlib/addownload/pp$1;)V
    .locals 0

    .line 826
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp$q;-><init>(Lcom/ss/android/downloadlib/addownload/pp;)V

    return-void
.end method


# virtual methods
.method protected synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 826
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp$q;->rg([Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method protected synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 826
    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp$q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.method protected varargs rg([Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 829
    array-length v1, p1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lt v1, v2, :cond_0

    aget-object v1, p1, v3

    .line 830
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 833
    :cond_0
    aget-object p1, p1, v3

    .line 836
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 837
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    :cond_1
    if-nez v0, :cond_2

    .line 840
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    :cond_2
    :goto_0
    return-object v0
.end method

.method protected rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 5

    .line 847
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    .line 848
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/pp$q;->isCancelled()Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_4

    .line 852
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v0

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getVersionCode()I

    move-result v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getVersionName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Ljava/lang/String;ILjava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/q;

    move-result-object v0

    .line 853
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/fw;->rg()Lcom/ss/android/downloadlib/addownload/model/fw;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getVersionCode()I

    move-result v2

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/q;->df()I

    move-result v3

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v4

    invoke-virtual {v4, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v4

    invoke-virtual {v1, v2, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/fw;->rg(IILcom/ss/android/downloadad/api/rg/df;)V

    .line 854
    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/q;->rg()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz p1, :cond_4

    .line 855
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    if-eqz v3, :cond_4

    if-nez v0, :cond_1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 856
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->removeTaskMainListener(I)V

    .line 858
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v3, -0x4

    if-ne v0, v3, :cond_2

    .line 859
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    goto :goto_0

    .line 861
    :cond_2
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 862
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->fw(Lcom/ss/android/downloadlib/addownload/pp;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 863
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->ux(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v2

    invoke-virtual {p1, v0, v2, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setMainThreadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)V

    goto :goto_0

    .line 865
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->ux(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setMainThreadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)V

    .line 868
    :goto_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/fw;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->df(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/model/DownloadShortInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;)Ljava/util/Map;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/download/api/model/DownloadShortInfo;Ljava/util/List;)V

    goto/16 :goto_3

    :cond_4
    if-eqz p1, :cond_5

    .line 870
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 871
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v3

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-virtual {v3, p1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 872
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 874
    :cond_5
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 875
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v3}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    invoke-virtual {p1, v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->removeTaskMainListener(I)V

    .line 876
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->fw(Lcom/ss/android/downloadlib/addownload/pp;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 877
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->rz(Lcom/ss/android/downloadlib/addownload/pp;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v3}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v3

    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v4}, Lcom/ss/android/downloadlib/addownload/pp;->ux(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v4

    invoke-virtual {p1, v3, v4, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setMainThreadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)V

    goto :goto_1

    .line 879
    :cond_6
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->rz(Lcom/ss/android/downloadlib/addownload/pp;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v3}, Lcom/ss/android/downloadlib/addownload/pp;->ux(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v3

    invoke-virtual {p1, v1, v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->setMainThreadListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadListener;)V

    :cond_7
    :goto_1
    if-eqz v0, :cond_8

    .line 884
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v1

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 885
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    const/4 v0, -0x3

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 886
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/fw;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pp;->df(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/model/DownloadShortInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;)Ljava/util/Map;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/download/api/model/DownloadShortInfo;Ljava/util/List;)V

    goto :goto_3

    .line 888
    :cond_8
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;)Ljava/util/Map;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_9

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 889
    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onIdle()V

    goto :goto_2

    .line 891
    :cond_9
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 894
    :goto_3
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/fw;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$q;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/fw;->q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    .line 896
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_a
    :goto_4
    return-void
.end method
