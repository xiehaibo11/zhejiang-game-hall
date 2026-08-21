.class public Lcom/ss/android/downloadlib/addownload/fw;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/utils/hq$rg;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/fw$df;,
        Lcom/ss/android/downloadlib/addownload/fw$rg;
    }
.end annotation


# instance fields
.field private df:Lcom/ss/android/downloadlib/addownload/model/pp;

.field private pp:Lcom/ss/android/downloadlib/addownload/fw$df;

.field private pt:Lcom/ss/android/downloadlib/addownload/pp;

.field private q:Z

.field private rg:J


# direct methods
.method public constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;)V
    .locals 1

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 79
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->q:Z

    .line 85
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pt:Lcom/ss/android/downloadlib/addownload/pp;

    return-void
.end method

.method private c()Z
    .locals 1

    .line 386
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->getLinkMode()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(I)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private c(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 2

    if-eqz p1, :cond_0

    .line 394
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    .line 395
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isFileExist(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/fw;)J
    .locals 2

    .line 73
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    return-wide v0
.end method

.method public static df(Ljava/util/Map;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ss/android/download/api/download/rg;",
            ">;"
        }
    .end annotation

    .line 847
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p0, :cond_3

    .line 848
    invoke-interface {p0}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 851
    :cond_0
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    .line 852
    instance-of v2, v1, Lcom/ss/android/download/api/download/rg;

    if-eqz v2, :cond_2

    .line 853
    check-cast v1, Lcom/ss/android/download/api/download/rg;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 854
    :cond_2
    instance-of v2, v1, Ljava/lang/ref/SoftReference;

    if-eqz v2, :cond_1

    check-cast v1, Ljava/lang/ref/SoftReference;

    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Lcom/ss/android/download/api/download/rg;

    if-eqz v2, :cond_1

    .line 855
    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/rg;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    :goto_1
    return-object v0
.end method

.method private df(Lcom/ss/android/download/api/config/n;)V
    .locals 2

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 230
    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/rz;->df(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    if-eqz p1, :cond_0

    .line 232
    invoke-interface {p1}, Lcom/ss/android/download/api/config/n;->rg()V

    :cond_0
    return-void

    .line 236
    :cond_1
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/addownload/fw$2;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/addownload/fw$2;-><init>(Lcom/ss/android/downloadlib/addownload/fw;Lcom/ss/android/download/api/config/n;)V

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/utils/rz;->rg([Ljava/lang/String;Lcom/ss/android/downloadlib/utils/rz$rg;)V

    return-void
.end method

.method private pp()Z
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->isAddToDownloadManage()Z

    move-result v0

    return v0
.end method

.method private pp(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 378
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/fw;->c(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private pt()Z
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 188
    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 189
    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private q()Z
    .locals 1

    .line 183
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/fw;->pt()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/fw;->pp()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/fw;)Lcom/ss/android/downloadlib/addownload/model/pp;
    .locals 0

    .line 73
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    return-object p0
.end method

.method private rg(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/HttpHeader;
    .locals 2

    const-string v0, "clickid"

    .line 863
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 864
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 865
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 866
    new-instance v1, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    invoke-direct {v1, v0, p1}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p1

    .line 869
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v0

    const-string v1, "parseLogExtra Error"

    invoke-interface {v0, p1, v1}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Ljava/lang/String;
    .locals 8

    .line 524
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 525
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 528
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    const-string v1, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 529
    invoke-static {v1}, Lcom/ss/android/downloadlib/utils/rz;->df(Ljava/lang/String;)Z

    move-result v1

    .line 531
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/fw;->df()Ljava/lang/String;

    move-result-object v2

    if-eqz v0, :cond_4

    .line 532
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 534
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    if-eqz v1, :cond_1

    return-object v3

    .line 538
    :cond_1
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    return-object v3

    .line 542
    :cond_2
    :try_start_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    invoke-virtual {v3, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v4, :cond_3

    return-object v3

    :catch_0
    move-exception v3

    .line 546
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 549
    :cond_3
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v3

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->cancel(I)V

    .line 552
    :cond_4
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const/4 v3, 0x1

    const/4 v4, 0x2

    :try_start_1
    const-string v5, "ttdownloader_code"

    if-eqz v1, :cond_5

    move v6, v3

    goto :goto_0

    :cond_5
    move v6, v4

    .line 554
    :goto_0
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v5

    .line 556
    invoke-virtual {v5}, Lorg/json/JSONException;->printStackTrace()V

    .line 558
    :goto_1
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v5

    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    const-string v7, "label_external_permission"

    invoke-virtual {v5, v7, v0, v6}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    const/4 v0, 0x0

    .line 563
    :try_start_2
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/q;->df()Ljava/lang/String;

    move-result-object v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 568
    :catch_2
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)I

    move-result p1

    if-eqz p1, :cond_a

    const/4 v5, 0x4

    if-eq p1, v5, :cond_8

    if-nez v1, :cond_6

    if-ne p1, v4, :cond_6

    goto :goto_2

    :cond_6
    const/4 v4, 0x3

    if-eq p1, v4, :cond_7

    if-nez v1, :cond_a

    if-ne p1, v3, :cond_a

    .line 582
    :cond_7
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_a

    goto :goto_3

    .line 573
    :cond_8
    :goto_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    .line 574
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_9

    .line 575
    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    .line 577
    :cond_9
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_a

    .line 578
    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    move-object v2, p1

    goto :goto_3

    :cond_a
    move-object v2, v0

    :goto_3
    return-object v2
.end method

.method public static rg(Ljava/util/Map;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ss/android/download/api/download/DownloadStatusChangeListener;",
            ">;"
        }
    .end annotation

    .line 829
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p0, :cond_3

    .line 830
    invoke-interface {p0}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 833
    :cond_0
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    .line 834
    instance-of v2, v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    if-eqz v2, :cond_2

    .line 835
    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 836
    :cond_2
    instance-of v2, v1, Ljava/lang/ref/SoftReference;

    if-eqz v2, :cond_1

    check-cast v1, Ljava/lang/ref/SoftReference;

    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    if-eqz v2, :cond_1

    .line 837
    invoke-virtual {v1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    :goto_1
    return-object v0
.end method

.method private rg(I)Z
    .locals 4

    .line 144
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->getDownloadMode()I

    move-result v0

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-ne v0, v1, :cond_0

    if-ne p1, v1, :cond_0

    return v2

    .line 148
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->getDownloadMode()I

    move-result v0

    const/4 v3, 0x0

    if-ne v0, v1, :cond_1

    if-ne p1, v2, :cond_1

    .line 150
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "disable_lp_if_market"

    invoke-virtual {p1, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-ne p1, v2, :cond_1

    return v2

    :cond_1
    return v3
.end method


# virtual methods
.method public df()Ljava/lang/String;
    .locals 2

    .line 592
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    sget-object v1, Landroid/os/Environment;->DIRECTORY_DOWNLOADS:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 594
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 595
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 597
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 598
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    if-eqz v0, :cond_0

    .line 103
    invoke-interface {v0, p1}, Lcom/ss/android/downloadlib/addownload/fw$df;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    const/4 p1, 0x0

    .line 104
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    :cond_0
    return-void
.end method

.method pt(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 370
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/fw;->c()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/fw;->pp(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method

.method q(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 4

    .line 333
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 334
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->q:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    .line 335
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTargetFilePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/b;->df(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 336
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    const-string v3, "file_status"

    invoke-virtual {v1, v3, p1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;ILcom/ss/android/downloadlib/addownload/model/pp;)V

    .line 337
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->q:Z

    :cond_1
    return-void
.end method

.method rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)I
    .locals 11

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 410
    :cond_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getHeaders()Ljava/util/Map;

    move-result-object v1

    .line 411
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 412
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v3

    const/4 v4, 0x1

    const-string v5, "enable_send_click_id_in_apk"

    invoke-virtual {v3, v5, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    if-ne v3, v4, :cond_1

    .line 413
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 414
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 416
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    if-eqz v1, :cond_3

    .line 421
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    if-eqz v3, :cond_2

    .line 423
    new-instance v5, Lcom/ss/android/socialbase/downloader/model/HttpHeader;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-direct {v5, v6, v3}, Lcom/ss/android/socialbase/downloader/model/HttpHeader;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 428
    :cond_3
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 429
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v5

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 430
    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getNotificationJumpUrl()Ljava/lang/String;

    move-result-object v3

    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v5, v5, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 431
    invoke-interface {v5}, Lcom/ss/android/download/api/download/DownloadModel;->isShowToast()Z

    move-result v5

    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v6, v6, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 432
    invoke-interface {v6}, Lcom/ss/android/download/api/download/DownloadModel;->getModelType()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    .line 428
    invoke-static {v1, v3, v5, v6}, Lcom/ss/android/downloadlib/utils/q;->rg(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 434
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v3}, Lcom/ss/android/downloadlib/utils/pt;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v3

    .line 435
    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v5, v5, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v5}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Lorg/json/JSONObject;

    move-result-object v5

    .line 437
    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v6, v6, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {v6}, Lcom/ss/android/download/api/download/DownloadController;->enableAH()Z

    move-result v6

    if-nez v6, :cond_4

    .line 439
    invoke-static {v5}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v5

    .line 440
    new-instance v6, Lorg/json/JSONArray;

    invoke-direct {v6}, Lorg/json/JSONArray;-><init>()V

    const-string v7, "ah_plans"

    invoke-static {v5, v7, v6}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 443
    :cond_4
    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v6, v6, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v6}, Lcom/ss/android/download/api/download/DownloadModel;->getExecutorGroup()I

    move-result v6

    .line 445
    iget-object v7, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v7, v7, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v7}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v7

    if-nez v7, :cond_5

    iget-object v7, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v7, v7, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v7}, Lcom/ss/android/downloadlib/addownload/ux;->df(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v7

    if-eqz v7, :cond_6

    :cond_5
    const/4 v6, 0x4

    .line 449
    :cond_6
    invoke-direct {p0, v3}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Ljava/lang/String;

    move-result-object v7

    .line 450
    iget-object v8, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v8, v8, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v8}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8, v7}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    .line 451
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v9

    invoke-virtual {v9, v8}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v8

    if-eqz v8, :cond_7

    const/4 v9, 0x3

    .line 452
    iget-object v10, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v10, v10, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v10}, Lcom/ss/android/download/api/download/DownloadModel;->getModelType()I

    move-result v10

    if-ne v9, v10, :cond_7

    .line 453
    invoke-virtual {v8, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setFirstDownload(Z)V

    .line 457
    :cond_7
    new-instance v8, Lcom/ss/android/socialbase/appdownloader/c;

    iget-object v9, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v9, v9, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v9}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v9

    invoke-direct {v8, p1, v9}, Lcom/ss/android/socialbase/appdownloader/c;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 458
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getBackupUrls()Ljava/util/List;

    move-result-object p1

    invoke-virtual {v8, p1}, Lcom/ss/android/socialbase/appdownloader/c;->df(Ljava/util/List;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v8, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v8, v8, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 459
    invoke-interface {v8}, Lcom/ss/android/download/api/download/DownloadModel;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p1, v8}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 460
    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->pt(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 461
    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Ljava/util/List;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 462
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->isShowNotification()Z

    move-result v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 463
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->isNeedWifi()Z

    move-result v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->q(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 464
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getFileName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 465
    invoke-virtual {p1, v7}, Lcom/ss/android/socialbase/appdownloader/c;->q(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 466
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getAppIcon()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->bm(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 467
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->fw(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 468
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getSdkMonitorScene()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/appdownloader/c;->rz(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 469
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getExpectFileLength()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Lcom/ss/android/socialbase/appdownloader/c;->rg(J)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 470
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 471
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->needIndependentProcess()Z

    move-result p2

    if-nez p2, :cond_9

    const-string p2, "need_independent_process"

    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_8

    goto :goto_1

    :cond_8
    move p2, v0

    goto :goto_2

    :cond_9
    :goto_1
    move p2, v4

    :goto_2
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->hq(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 472
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadFileUriProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 473
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->autoInstallWithoutNotification()Z

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->df(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 474
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->c(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const/16 p2, 0x3e8

    .line 475
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->pt(I)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const/16 p2, 0x64

    .line 476
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->pp(I)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 477
    invoke-virtual {p1, v5}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 478
    invoke-virtual {p1, v4}, Lcom/ss/android/socialbase/appdownloader/c;->rz(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 479
    invoke-virtual {p1, v4}, Lcom/ss/android/socialbase/appdownloader/c;->bm(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const/4 p2, 0x5

    const-string v1, "retry_count"

    .line 480
    invoke-virtual {v3, v1, p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->df(I)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "backup_url_retry_count"

    .line 481
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->q(I)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 482
    invoke-virtual {p1, v4}, Lcom/ss/android/socialbase/appdownloader/c;->bm(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "need_head_connection"

    .line 483
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_a

    move p2, v4

    goto :goto_3

    :cond_a
    move p2, v0

    :goto_3
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->oh(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "need_https_to_http_retry"

    .line 484
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_b

    move p2, v4

    goto :goto_4

    :cond_b
    move p2, v0

    :goto_4
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->pt(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "need_chunk_downgrade_retry"

    .line 485
    invoke-virtual {v3, p2, v4}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_c

    move p2, v4

    goto :goto_5

    :cond_c
    move p2, v0

    :goto_5
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->ux(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "need_retry_delay"

    .line 486
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_d

    move p2, v4

    goto :goto_6

    :cond_d
    move p2, v0

    :goto_6
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->fw(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "retry_delay_time_array"

    .line 487
    invoke-virtual {v3, p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->ux(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    const-string p2, "need_reuse_runnable"

    .line 488
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_e

    move p2, v4

    goto :goto_7

    :cond_e
    move p2, v0

    :goto_7
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->b(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 491
    invoke-virtual {p1, v6}, Lcom/ss/android/socialbase/appdownloader/c;->c(I)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 492
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->isAutoInstall()Z

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->un(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 493
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->distinctDir()Z

    move-result p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->v(Z)Lcom/ss/android/socialbase/appdownloader/c;

    move-result-object p1

    .line 495
    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getMimeType()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_f

    .line 496
    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getMimeType()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->pp(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    goto :goto_8

    :cond_f
    const-string p2, "application/vnd.android.package-archive"

    .line 498
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->pp(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    :goto_8
    const-string p2, "notification_opt_2"

    .line 501
    invoke-virtual {v3, p2, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v4, :cond_10

    .line 502
    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Z)Lcom/ss/android/socialbase/appdownloader/c;

    .line 503
    invoke-virtual {p1, v4}, Lcom/ss/android/socialbase/appdownloader/c;->df(Z)Lcom/ss/android/socialbase/appdownloader/c;

    :cond_10
    const/4 p2, 0x0

    const-string v1, "clear_space_use_disk_handler"

    .line 509
    invoke-virtual {v3, v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v4, :cond_11

    .line 510
    new-instance p2, Lcom/ss/android/downloadlib/addownload/df/rg;

    invoke-direct {p2}, Lcom/ss/android/downloadlib/addownload/df/rg;-><init>()V

    .line 511
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/appdownloader/c;

    .line 514
    :cond_11
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/fw;->q()Z

    move-result v1

    invoke-static {v0, v1, p1}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;ZLcom/ss/android/socialbase/appdownloader/c;)I

    move-result p1

    if-eqz p2, :cond_12

    .line 516
    invoke-virtual {p2, p1}, Lcom/ss/android/downloadlib/addownload/df/rg;->rg(I)V

    :cond_12
    return p1
.end method

.method rg()V
    .locals 1

    .line 347
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    if-nez v0, :cond_0

    .line 348
    new-instance v0, Lcom/ss/android/downloadlib/addownload/fw$3;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/addownload/fw$3;-><init>(Lcom/ss/android/downloadlib/addownload/fw;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    :cond_0
    return-void
.end method

.method public rg(J)V
    .locals 1

    .line 89
    iput-wide p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    .line 90
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    .line 91
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/pp;->re()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 92
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "setAdId ModelBox notValid"

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public rg(Landroid/os/Message;)V
    .locals 0

    return-void
.end method

.method rg(Landroid/os/Message;Lcom/ss/android/download/api/model/DownloadShortInfo;Ljava/util/Map;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Message;",
            "Lcom/ss/android/download/api/model/DownloadShortInfo;",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_10

    .line 259
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto/16 :goto_3

    .line 262
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 263
    iget v2, p1, Landroid/os/Message;->arg1:I

    const/4 v3, 0x0

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-ne v2, v5, :cond_1

    goto :goto_0

    .line 265
    :cond_1
    iget v2, p1, Landroid/os/Message;->arg1:I

    const/4 v6, 0x6

    if-ne v2, v6, :cond_2

    goto :goto_0

    .line 267
    :cond_2
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-ne p1, v4, :cond_4

    .line 268
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getIsFirstDownload()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 271
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object p1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v6, v6, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    iget-object v7, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v7, v7, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    invoke-virtual {p1, v2, v6, v7}, Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;)V

    .line 273
    invoke-virtual {v0, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setFirstDownload(Z)V

    .line 275
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 277
    :cond_4
    :goto_0
    invoke-virtual {p2, v0}, Lcom/ss/android/download/api/model/DownloadShortInfo;->updateFromNewDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 278
    invoke-static {p2}, Lcom/ss/android/downloadlib/addownload/rz;->rg(Lcom/ss/android/download/api/model/DownloadShortInfo;)Lcom/ss/android/download/api/model/DownloadShortInfo;

    .line 280
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p1

    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(I)I

    move-result p1

    .line 282
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v6

    const-wide/16 v8, 0x0

    cmp-long v2, v6, v8

    if-lez v2, :cond_5

    .line 284
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v8

    const-wide/16 v10, 0x64

    mul-long/2addr v8, v10

    div-long/2addr v8, v6

    long-to-int v3, v8

    :cond_5
    if-gtz v2, :cond_6

    .line 287
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v2

    const-string v6, "fix_click_start"

    invoke-virtual {v2, v6}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 288
    :cond_6
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    if-eqz v2, :cond_7

    .line 289
    invoke-interface {v2, v0}, Lcom/ss/android/downloadlib/addownload/fw$df;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    const/4 v2, 0x0

    .line 290
    iput-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->pp:Lcom/ss/android/downloadlib/addownload/fw$df;

    .line 293
    :cond_7
    invoke-static {p3}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v2

    .line 294
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_8
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_10

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    if-eq p1, v5, :cond_e

    if-eq p1, v4, :cond_d

    if-eq p1, v1, :cond_9

    goto :goto_1

    .line 310
    :cond_9
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v7

    const/4 v8, -0x4

    if-ne v7, v8, :cond_a

    .line 311
    invoke-interface {v6}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onIdle()V

    goto :goto_1

    .line 312
    :cond_a
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v7

    const/4 v8, -0x1

    if-ne v7, v8, :cond_b

    .line 313
    invoke-interface {v6, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadFailed(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_1

    .line 314
    :cond_b
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v7

    const/4 v8, -0x3

    if-ne v7, v8, :cond_8

    .line 315
    iget-object v7, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v7, v7, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v7}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v7

    if-eqz v7, :cond_c

    .line 316
    invoke-interface {v6, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onInstalled(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_1

    .line 318
    :cond_c
    invoke-interface {v6, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadFinished(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_1

    .line 307
    :cond_d
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v7

    invoke-static {v7, v3}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v7

    invoke-interface {v6, p2, v7}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadPaused(Lcom/ss/android/download/api/model/DownloadShortInfo;I)V

    goto :goto_1

    .line 297
    :cond_e
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v7

    const/16 v8, 0xb

    if-eq v7, v8, :cond_f

    .line 298
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v7

    invoke-static {v7, v3}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v7

    invoke-interface {v6, p2, v7}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadActive(Lcom/ss/android/download/api/model/DownloadShortInfo;I)V

    goto :goto_1

    .line 300
    :cond_f
    invoke-static {p3}, Lcom/ss/android/downloadlib/addownload/fw;->df(Ljava/util/Map;)Ljava/util/List;

    move-result-object v6

    .line 301
    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_2
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_8

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ss/android/download/api/download/rg;

    .line 302
    invoke-interface {v7, v0}, Lcom/ss/android/download/api/download/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_2

    :cond_10
    :goto_3
    return-void
.end method

.method rg(Lcom/ss/android/download/api/config/n;)V
    .locals 2

    .line 197
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 198
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getFilePath()Ljava/lang/String;

    move-result-object v0

    .line 200
    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 201
    invoke-interface {p1}, Lcom/ss/android/download/api/config/n;->rg()V

    return-void

    .line 205
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 206
    invoke-interface {p1}, Lcom/ss/android/download/api/config/n;->rg()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 212
    :catch_0
    :cond_1
    new-instance v0, Lcom/ss/android/downloadlib/addownload/fw$1;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/downloadlib/addownload/fw$1;-><init>(Lcom/ss/android/downloadlib/addownload/fw;Lcom/ss/android/download/api/config/n;)V

    invoke-direct {p0, v0}, Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/download/api/config/n;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, 0x0

    .line 97
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->q:Z

    .line 98
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.method rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/download/api/model/DownloadShortInfo;Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            "Lcom/ss/android/download/api/model/DownloadShortInfo;",
            "Ljava/util/List<",
            "Lcom/ss/android/download/api/download/DownloadStatusChangeListener;",
            ">;)V"
        }
    .end annotation

    .line 672
    invoke-interface {p3}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_8

    if-nez p2, :cond_1

    goto/16 :goto_3

    :cond_1
    const/4 v0, 0x0

    .line 683
    :try_start_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_2

    .line 684
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v1

    const-wide/16 v3, 0x64

    mul-long/2addr v1, v3

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v3

    div-long/2addr v1, v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    long-to-int v1, v1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 687
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    move v1, v0

    :goto_0
    if-gez v1, :cond_3

    goto :goto_1

    :cond_3
    move v0, v1

    .line 692
    :goto_1
    invoke-virtual {p2, p1}, Lcom/ss/android/download/api/model/DownloadShortInfo;->updateFromNewDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 693
    invoke-static {p2}, Lcom/ss/android/downloadlib/addownload/rz;->rg(Lcom/ss/android/download/api/model/DownloadShortInfo;)Lcom/ss/android/download/api/model/DownloadShortInfo;

    .line 695
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_2
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 696
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v2

    packed-switch v2, :pswitch_data_0

    :pswitch_0
    goto :goto_2

    .line 722
    :pswitch_1
    instance-of v2, v1, Lcom/ss/android/download/api/download/rg;

    if-eqz v2, :cond_4

    .line 723
    check-cast v1, Lcom/ss/android/download/api/download/rg;

    invoke-interface {v1, p1}, Lcom/ss/android/download/api/download/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_2

    .line 725
    :cond_4
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-static {v2, v0}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v2

    invoke-interface {v1, p2, v2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadActive(Lcom/ss/android/download/api/model/DownloadShortInfo;I)V

    goto :goto_2

    .line 719
    :pswitch_2
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-static {v2, v0}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v2

    invoke-interface {v1, p2, v2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadActive(Lcom/ss/android/download/api/model/DownloadShortInfo;I)V

    goto :goto_2

    .line 707
    :pswitch_3
    invoke-interface {v1, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadFailed(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_2

    .line 710
    :pswitch_4
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-static {v2, v0}, Lcom/ss/android/downloadlib/addownload/rz;->rg(II)I

    move-result v2

    invoke-interface {v1, p2, v2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadPaused(Lcom/ss/android/download/api/model/DownloadShortInfo;I)V

    goto :goto_2

    .line 729
    :pswitch_5
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 730
    invoke-interface {v1, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onInstalled(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_2

    .line 732
    :cond_5
    invoke-interface {v1, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadFinished(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_2

    .line 699
    :pswitch_6
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v2

    if-eqz v2, :cond_6

    const/4 v2, -0x3

    .line 700
    iput v2, p2, Lcom/ss/android/download/api/model/DownloadShortInfo;->status:I

    .line 701
    invoke-interface {v1, p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onInstalled(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_2

    .line 703
    :cond_6
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onIdle()V

    goto :goto_2

    :cond_7
    return-void

    .line 676
    :cond_8
    :goto_3
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_4
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_9

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 677
    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onIdle()V

    goto :goto_4

    :cond_9
    return-void

    :pswitch_data_0
    .packed-switch -0x4
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_6
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_0
        :pswitch_2
        :pswitch_2
        :pswitch_0
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V
    .locals 5

    .line 608
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    if-eqz v0, :cond_7

    if-eqz p1, :cond_7

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 611
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v1, -0x1

    const/4 v2, 0x2

    if-eq v0, v1, :cond_4

    const/4 v1, -0x4

    if-ne v0, v1, :cond_1

    goto :goto_0

    .line 614
    :cond_1
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 615
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    invoke-virtual {v1, v3, v4, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    goto :goto_1

    :cond_2
    if-eqz p2, :cond_5

    .line 618
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/event/df;->q()Z

    move-result v1

    if-eqz v1, :cond_5

    const/4 v1, -0x2

    if-eq v0, v1, :cond_3

    const/4 v1, -0x3

    if-ne v0, v1, :cond_5

    .line 620
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    invoke-virtual {v1, v3, v4, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    goto :goto_1

    .line 613
    :cond_4
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    invoke-virtual {v1, v3, v4, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    :cond_5
    :goto_1
    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_2

    .line 648
    :pswitch_1
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p2

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    const/4 v2, 0x3

    invoke-virtual {p2, v0, v1, v2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto/16 :goto_2

    .line 632
    :pswitch_2
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    const/4 v1, 0x4

    invoke-virtual {v0, v3, v4, v1, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    if-eqz p2, :cond_7

    .line 635
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/event/df;->df()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 636
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v0, v1, p2}, Lcom/ss/android/downloadlib/event/df;->df(JLjava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 637
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    goto :goto_2

    .line 651
    :pswitch_3
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 652
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "SUCCESSED isInstalledApp"

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    goto :goto_2

    .line 655
    :cond_6
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    const/4 v1, 0x5

    invoke-virtual {v0, v3, v4, v1, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    if-eqz p2, :cond_7

    .line 659
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/event/df;->df()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 660
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p2}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v0, v1, p2}, Lcom/ss/android/downloadlib/event/df;->df(JLjava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 661
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/fw;->rg:J

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    goto :goto_2

    .line 628
    :pswitch_4
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/fw;->rg()V

    .line 629
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p2

    new-instance v0, Lcom/ss/android/downloadad/api/rg/df;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v1, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v2, v2, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object v3, v3, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    invoke-direct {v0, v1, v2, v3, p1}, Lcom/ss/android/downloadad/api/rg/df;-><init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;I)V

    invoke-virtual {p2, v0}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_7
    :goto_2
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

.method rg(Landroid/content/Context;IZ)Z
    .locals 3

    .line 115
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 116
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-wide p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-virtual {p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 118
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p2

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 121
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Z

    move-result p1

    return p1

    .line 122
    :cond_1
    invoke-direct {p0, p2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(I)Z

    move-result p1

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 123
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 124
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object p1

    const-string v2, "disable_market"

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    if-eq p1, v1, :cond_4

    .line 125
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    invoke-static {p1, p2}, Lcom/ss/android/downloadlib/df/rg;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;I)Z

    move-result p1

    if-eqz p1, :cond_2

    return v1

    .line 128
    :cond_2
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pt:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/pp;->rz()Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pt:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Z)Z

    move-result p1

    if-eqz p1, :cond_3

    move v0, v1

    :cond_3
    return v0

    :cond_4
    if-eqz p3, :cond_5

    .line 130
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadController;->getDownloadMode()I

    move-result p1

    const/4 p2, 0x4

    if-ne p1, p2, :cond_5

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pt:Lcom/ss/android/downloadlib/addownload/pp;

    .line 131
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp()Z

    move-result p1

    if-nez p1, :cond_5

    .line 133
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->pt:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/addownload/pp;->q(Z)V

    return v1

    :cond_5
    return v0
.end method

.method rg(Z)Z
    .locals 1

    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 176
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw;->df:Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-object p1, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadController;->getDownloadMode()I

    move-result p1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
