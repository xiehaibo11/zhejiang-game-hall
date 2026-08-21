.class public Lcom/ss/android/downloadlib/addownload/pp;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/c;
.implements Lcom/ss/android/downloadlib/utils/hq$rg;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/pp$df;,
        Lcom/ss/android/downloadlib/addownload/pp$rg;,
        Lcom/ss/android/downloadlib/addownload/pp$q;
    }
.end annotation


# static fields
.field private static final rg:Ljava/lang/String;


# instance fields
.field private b:Z

.field private final bm:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

.field private final c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private final df:Lcom/ss/android/downloadlib/utils/hq;

.field private f:Lcom/ss/android/download/api/download/DownloadModel;

.field private fw:Lcom/ss/android/download/api/model/DownloadShortInfo;

.field private hq:J

.field private n:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Lcom/ss/android/download/api/config/IDownloadButtonClickListener;",
            ">;"
        }
    .end annotation
.end field

.field private oh:J

.field private pp:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private pt:Lcom/ss/android/downloadlib/addownload/pt;

.field private q:Lcom/ss/android/downloadlib/addownload/fw;

.field private final qx:Z

.field private r:Z

.field private rz:Lcom/ss/android/downloadlib/addownload/pp$q;

.field private un:Lcom/ss/android/download/api/download/DownloadController;

.field private ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field private v:Lcom/ss/android/download/api/download/DownloadEventConfig;

.field private z:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Lcom/ss/android/download/api/config/OnItemClickListener;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 87
    const-class v0, Lcom/ss/android/downloadlib/addownload/pp;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 120
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 90
    new-instance v0, Lcom/ss/android/downloadlib/utils/hq;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1, p0}, Lcom/ss/android/downloadlib/utils/hq;-><init>(Landroid/os/Looper;Lcom/ss/android/downloadlib/utils/hq$rg;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    .line 97
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    .line 103
    new-instance v0, Lcom/ss/android/downloadlib/addownload/fw$rg;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/addownload/fw$rg;-><init>(Lcom/ss/android/downloadlib/utils/hq;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->bm:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    const-wide/16 v0, -0x1

    .line 110
    iput-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    const/4 v0, 0x0

    .line 111
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    .line 112
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->v:Lcom/ss/android/download/api/download/DownloadEventConfig;

    .line 113
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->un:Lcom/ss/android/download/api/download/DownloadController;

    .line 121
    new-instance v0, Lcom/ss/android/downloadlib/addownload/fw;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/addownload/fw;-><init>(Lcom/ss/android/downloadlib/addownload/pp;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    .line 122
    new-instance v0, Lcom/ss/android/downloadlib/addownload/pt;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/addownload/pt;-><init>(Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    .line 123
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "ttdownloader_callback_twice"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->qx:Z

    return-void
.end method

.method private b()V
    .locals 5

    .line 479
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->z:Ljava/lang/ref/SoftReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 480
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->z:Ljava/lang/ref/SoftReference;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/config/OnItemClickListener;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v2

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v3

    invoke-interface {v0, v1, v2, v3}, Lcom/ss/android/download/api/config/OnItemClickListener;->onItemClick(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    const/4 v0, 0x0

    .line 482
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->z:Ljava/lang/ref/SoftReference;

    goto :goto_0

    .line 484
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->df()Lcom/ss/android/download/api/config/q;

    move-result-object v0

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v3

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v4

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/ss/android/download/api/config/q;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;)V

    :goto_0
    return-void
.end method

.method static synthetic bm()Ljava/lang/String;
    .locals 1

    .line 85
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic c(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/download/DownloadModel;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    return-object p0
.end method

.method private c(Z)V
    .locals 11

    .line 577
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "pBCD"

    invoke-static {v0, v2, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 578
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->v()Z

    move-result v0

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v0, :cond_3

    .line 579
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    iget-wide v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v0, v4, v5}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object v0

    .line 581
    iget-boolean v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->r:Z

    if-eqz v1, :cond_1

    .line 582
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/pp;->rz()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 584
    invoke-virtual {p0, v2}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Z)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 586
    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    if-eqz v1, :cond_a

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    .line 587
    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadController;->isAutoDownloadOnCardShow()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 588
    invoke-virtual {p0, p1, v3}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V

    goto/16 :goto_1

    .line 591
    :cond_0
    invoke-virtual {p0, p1, v3}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V

    goto/16 :goto_1

    .line 595
    :cond_1
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    .line 597
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadController;->enableShowComplianceDialog()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    if-eqz v1, :cond_2

    .line 599
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg()Lcom/ss/android/downloadlib/addownload/compliance/df;

    move-result-object v1

    iget-object v2, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 600
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg()Lcom/ss/android/downloadlib/addownload/compliance/df;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 603
    :cond_2
    invoke-virtual {p0, p1, v3}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V

    goto/16 :goto_1

    .line 606
    :cond_3
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "pBCD continue download, status:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 607
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_4

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    if-eqz v1, :cond_4

    .line 608
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->isNeedWifi()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setOnlyWifi(Z)V

    .line 610
    :cond_4
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    .line 611
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 612
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v4

    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4, v5}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v10

    const/4 v4, -0x2

    if-eq v0, v4, :cond_8

    const/4 v4, -0x1

    if-ne v0, v4, :cond_5

    goto :goto_0

    .line 634
    :cond_5
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/hq;->rg(I)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 635
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->enablePause()Z

    move-result v2

    if-nez v2, :cond_6

    return-void

    .line 638
    :cond_6
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Z)V

    .line 639
    invoke-static {}, Lcom/ss/android/downloadlib/q/ux;->rg()Lcom/ss/android/downloadlib/q/ux;

    move-result-object v2

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v3

    iget-wide v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v3, v4, v5}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/q/ux;->df(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 641
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q/c;->rg()Lcom/ss/android/downloadlib/addownload/q/c;

    move-result-object v2

    new-instance v3, Lcom/ss/android/downloadlib/addownload/pp$3;

    move-object v4, v3

    move-object v5, p0

    move v6, v1

    move v7, p1

    move-object v8, v10

    move v9, v0

    invoke-direct/range {v4 .. v9}, Lcom/ss/android/downloadlib/addownload/pp$3;-><init>(Lcom/ss/android/downloadlib/addownload/pp;IZLcom/ss/android/downloadad/api/rg/df;I)V

    invoke-virtual {v2, v10, v0, v3}, Lcom/ss/android/downloadlib/addownload/q/c;->rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)V

    goto :goto_1

    .line 660
    :cond_7
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2, v3, p1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    .line 661
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0, v1, v0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_1

    .line 616
    :cond_8
    :goto_0
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v3, v4, p1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    if-eqz v10, :cond_9

    .line 618
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v10, v3, v4}, Lcom/ss/android/downloadad/api/rg/df;->ux(J)V

    .line 619
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v3

    invoke-virtual {v10, v3, v4}, Lcom/ss/android/downloadad/api/rg/df;->rz(J)V

    .line 621
    :cond_9
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setDownloadFromReserveWifi(Z)V

    .line 623
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    new-instance v8, Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    iget-object v5, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v6

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v7

    move-object v2, v8

    invoke-direct/range {v2 .. v7}, Lcom/ss/android/downloadlib/addownload/model/pp;-><init>(JLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    invoke-virtual {p1, v8}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)V

    .line 624
    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v6

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getTotalBytes()J

    move-result-wide v8

    new-instance v10, Lcom/ss/android/downloadlib/addownload/pp$2;

    invoke-direct {v10, p0, v1, v0}, Lcom/ss/android/downloadlib/addownload/pp$2;-><init>(Lcom/ss/android/downloadlib/addownload/pp;II)V

    move v5, v1

    invoke-virtual/range {v4 .. v10}, Lcom/ss/android/downloadlib/addownload/pt;->rg(IJJLcom/ss/android/downloadlib/addownload/pp$rg;)V

    :cond_a
    :goto_1
    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/model/DownloadShortInfo;
    .locals 0

    .line 85
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->z()Lcom/ss/android/download/api/model/DownloadShortInfo;

    move-result-object p0

    return-object p0
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/addownload/pp;Z)V
    .locals 0

    .line 85
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->ux(Z)V

    return-void
.end method

.method private f()V
    .locals 3

    .line 562
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "pICD"

    invoke-static {v0, v2, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 563
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0, v2}, Lcom/ss/android/downloadlib/addownload/fw;->pt(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 564
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    const-string v2, "pICD BC"

    invoke-static {v0, v2, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    const/4 v0, 0x0

    .line 565
    invoke-direct {p0, v0}, Lcom/ss/android/downloadlib/addownload/pp;->c(Z)V

    goto :goto_0

    .line 568
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    const-string v2, "pICD IC"

    invoke-static {v0, v2, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 569
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->b()V

    :goto_0
    return-void
.end method

.method private fw(Z)V
    .locals 16

    move-object/from16 v0, p0

    .line 761
    iget-object v1, v0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    new-instance v8, Lcom/ss/android/downloadlib/addownload/model/pp;

    iget-wide v3, v0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    iget-object v5, v0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct/range {p0 .. p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v6

    invoke-direct/range {p0 .. p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v7

    move-object v2, v8

    invoke-direct/range {v2 .. v7}, Lcom/ss/android/downloadlib/addownload/model/pp;-><init>(JLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    invoke-virtual {v1, v8}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)V

    .line 762
    iget-object v9, v0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    new-instance v15, Lcom/ss/android/downloadlib/addownload/pp$5;

    move/from16 v1, p1

    invoke-direct {v15, v0, v1}, Lcom/ss/android/downloadlib/addownload/pp$5;-><init>(Lcom/ss/android/downloadlib/addownload/pp;Z)V

    const/4 v10, 0x0

    const-wide/16 v11, 0x0

    const-wide/16 v13, 0x0

    invoke-virtual/range {v9 .. v15}, Lcom/ss/android/downloadlib/addownload/pt;->rg(IJJLcom/ss/android/downloadlib/addownload/pp$rg;)V

    return-void
.end method

.method static synthetic fw(Lcom/ss/android/downloadlib/addownload/pp;)Z
    .locals 0

    .line 85
    iget-boolean p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->qx:Z

    return p0
.end method

.method private getContext()Landroid/content/Context;
    .locals 1

    .line 537
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->pp:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 538
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->pp:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    return-object v0

    .line 540
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method private hq()Lcom/ss/android/download/api/download/DownloadEventConfig;
    .locals 1

    .line 545
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->v:Lcom/ss/android/download/api/download/DownloadEventConfig;

    if-nez v0, :cond_0

    new-instance v0, Lcom/ss/android/download/api/download/q$rg;

    invoke-direct {v0}, Lcom/ss/android/download/api/download/q$rg;-><init>()V

    invoke-virtual {v0}, Lcom/ss/android/download/api/download/q$rg;->rg()Lcom/ss/android/download/api/download/q;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private oh()Lcom/ss/android/download/api/download/DownloadController;
    .locals 1

    .line 550
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->un:Lcom/ss/android/download/api/download/DownloadController;

    if-nez v0, :cond_0

    .line 551
    new-instance v0, Lcom/ss/android/download/api/download/df;

    invoke-direct {v0}, Lcom/ss/android/download/api/download/df;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->un:Lcom/ss/android/download/api/download/DownloadController;

    .line 553
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->un:Lcom/ss/android/download/api/download/DownloadController;

    return-object v0
.end method

.method static synthetic pp(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/fw;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    return-object p0
.end method

.method private pp(Z)V
    .locals 2

    .line 502
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/pt;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "notification_opt_2"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    .line 504
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 506
    :cond_0
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->c(Z)V

    return-void
.end method

.method static synthetic pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    return-object p0
.end method

.method static synthetic q(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/pt;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->pt:Lcom/ss/android/downloadlib/addownload/pt;

    return-object p0
.end method

.method private q(I)Z
    .locals 5

    .line 417
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/pp;->pp()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, -0x1

    .line 423
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getQuickAppModel()Lcom/ss/android/download/api/model/q;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ss/android/download/api/model/q;->rg()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    if-eq p1, v3, :cond_2

    const/4 v3, 0x2

    if-eq p1, v3, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x4

    goto :goto_0

    :cond_2
    const/4 v0, 0x5

    .line 434
    :goto_0
    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    instance-of v4, v3, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v4, :cond_3

    .line 435
    check-cast v3, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    const/4 v4, 0x3

    .line 436
    invoke-virtual {v3, v4}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setFunnelType(I)Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    .line 439
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/ss/android/downloadlib/utils/ux;->q(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 441
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v1, v3, v4, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    .line 443
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 444
    iput v0, p1, Landroid/os/Message;->what:I

    .line 445
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    iput-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 447
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/q;->rg()Lcom/ss/android/downloadlib/addownload/q;

    move-result-object p1

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-virtual {p1, p0, v0, v1}, Lcom/ss/android/downloadlib/addownload/q;->rg(Lcom/ss/android/downloadlib/addownload/pp;ILcom/ss/android/download/api/download/DownloadModel;)V

    goto :goto_1

    .line 449
    :cond_4
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {p1, v3, v4, v1, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JZI)V

    :goto_1
    return v2
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    return-object p1
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pp;)Ljava/util/Map;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    return-object p0
.end method

.method private rg(IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 748
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p3

    const-string v0, "fix_click_start"

    invoke-virtual {p3, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_1

    const/4 p3, -0x3

    if-eq p2, p3, :cond_0

    .line 749
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->getInstance()Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;

    move-result-object p3

    invoke-virtual {p3, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadProcessDispatcher;->canResume(I)Z

    move-result p3

    if-nez p3, :cond_0

    const/4 p1, 0x0

    .line 751
    invoke-virtual {p0, p1, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V

    goto :goto_0

    .line 753
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p3

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p3, v0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;II)V

    goto :goto_0

    .line 756
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p3

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p3, v0, p1, p2}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;II)V

    :goto_0
    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pp;IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 85
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/pp;->rg(IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/pp;Z)V
    .locals 0

    .line 85
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->fw(Z)V

    return-void
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2

    .line 903
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x3

    .line 904
    iput v1, v0, Landroid/os/Message;->what:I

    .line 905
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 906
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/utils/hq;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method static synthetic rz(Lcom/ss/android/downloadlib/addownload/pp;)Landroid/content/Context;
    .locals 0

    .line 85
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private un()V
    .locals 5

    .line 910
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->rz:Lcom/ss/android/downloadlib/addownload/pp$q;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/pp$q;->getStatus()Landroid/os/AsyncTask$Status;

    move-result-object v0

    sget-object v2, Landroid/os/AsyncTask$Status;->FINISHED:Landroid/os/AsyncTask$Status;

    if-eq v0, v2, :cond_0

    .line 911
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->rz:Lcom/ss/android/downloadlib/addownload/pp$q;

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/addownload/pp$q;->cancel(Z)Z

    .line 913
    :cond_0
    new-instance v0, Lcom/ss/android/downloadlib/addownload/pp$q;

    const/4 v2, 0x0

    invoke-direct {v0, p0, v2}, Lcom/ss/android/downloadlib/addownload/pp$q;-><init>(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/downloadlib/addownload/pp$1;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->rz:Lcom/ss/android/downloadlib/addownload/pp$q;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    .line 914
    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v4}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v3

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    invoke-static {v0, v2}, Lcom/ss/android/downloadlib/utils/df;->rg(Landroid/os/AsyncTask;[Ljava/lang/Object;)V

    return-void
.end method

.method static synthetic ux(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
    .locals 0

    .line 85
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/pp;->bm:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    return-object p0
.end method

.method private ux(Z)V
    .locals 7

    .line 774
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 775
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onDownloadStart(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;)V

    goto :goto_0

    .line 778
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->bm:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)I

    move-result v0

    .line 780
    sget-object v1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "beginDown id:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v1, v2, v3}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    if-eqz v0, :cond_3

    .line 782
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v1, :cond_2

    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "fix_click_start"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    .line 787
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    goto :goto_2

    :cond_2
    :goto_1
    if-eqz p1, :cond_4

    .line 784
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/fw;->rg()V

    goto :goto_2

    .line 790
    :cond_3
    new-instance p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    const/4 v1, -0x1

    .line 791
    invoke-virtual {p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    .line 792
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 793
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    new-instance v4, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/4 v5, 0x2

    const-string v6, "start download failed, id=0"

    invoke-direct {v4, v5, v6}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    invoke-virtual {p1, v1, v2, v4}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JLcom/ss/android/socialbase/downloader/exception/BaseException;)V

    .line 794
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string v1, "beginDown"

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    .line 797
    :cond_4
    :goto_2
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/pp;->q()Z

    move-result v1

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Z)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 798
    sget-object p1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "beginDown IC id:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0, v3}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 799
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->b()V

    :cond_5
    return-void
.end method

.method private v()Z
    .locals 8

    .line 698
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "fix_click_start"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, -0x3

    const/4 v3, 0x1

    if-eqz v0, :cond_5

    .line 699
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v0, :cond_0

    return v3

    .line 703
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-ne v0, v2, :cond_1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getCurBytes()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v0, v4, v6

    if-gtz v0, :cond_1

    return v3

    .line 707
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 708
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    const/4 v2, -0x4

    if-ne v0, v2, :cond_2

    goto :goto_0

    .line 712
    :cond_2
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 713
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v2

    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getName()Ljava/lang/String;

    move-result-object v4

    .line 712
    invoke-static {v0, v2, v4}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isDownloadSuccessAndFileNotExist(ILjava/lang/String;Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_3

    return v3

    :catch_0
    :cond_3
    return v1

    :cond_4
    :goto_0
    return v3

    .line 731
    :cond_5
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v0, :cond_6

    return v3

    .line 735
    :cond_6
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-eq v0, v2, :cond_7

    .line 736
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->canResume(I)Z

    move-result v0

    if-nez v0, :cond_7

    return v3

    .line 740
    :cond_7
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-nez v0, :cond_8

    return v3

    :cond_8
    return v1
.end method

.method private z()Lcom/ss/android/download/api/model/DownloadShortInfo;
    .locals 1

    .line 918
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->fw:Lcom/ss/android/download/api/model/DownloadShortInfo;

    if-nez v0, :cond_0

    .line 919
    new-instance v0, Lcom/ss/android/download/api/model/DownloadShortInfo;

    invoke-direct {v0}, Lcom/ss/android/download/api/model/DownloadShortInfo;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->fw:Lcom/ss/android/download/api/model/DownloadShortInfo;

    .line 921
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->fw:Lcom/ss/android/download/api/model/DownloadShortInfo;

    return-object v0
.end method


# virtual methods
.method public c()V
    .locals 2

    .line 510
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    new-instance v1, Lcom/ss/android/downloadlib/addownload/pp$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/addownload/pp$1;-><init>(Lcom/ss/android/downloadlib/addownload/pp;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/utils/hq;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public synthetic df(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 0

    .line 85
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object p1

    return-object p1
.end method

.method public synthetic df(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 0

    .line 85
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object p1

    return-object p1
.end method

.method public synthetic df(Lcom/ss/android/download/api/download/DownloadController;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 0

    .line 85
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/download/api/download/DownloadController;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object p1

    return-object p1
.end method

.method public synthetic df(Lcom/ss/android/download/api/download/DownloadEventConfig;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 0

    .line 85
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/download/api/download/DownloadEventConfig;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object p1

    return-object p1
.end method

.method public synthetic df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 0

    .line 85
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object p1

    return-object p1
.end method

.method public df(I)V
    .locals 6

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    if-ne p1, v0, :cond_0

    goto :goto_0

    .line 362
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "error actionType"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 365
    :cond_1
    :goto_0
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v2, v3, v4}, Lcom/ss/android/downloadlib/addownload/fw;->rg(J)V

    .line 366
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v2

    iget-wide v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v2, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/pp;->l()Z

    move-result v2

    if-nez v2, :cond_2

    .line 367
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v2

    const-string v3, "handleDownload ModelBox !isStrictValid"

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    .line 369
    :cond_2
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-boolean v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->r:Z

    invoke-virtual {v2, v3, p1, v4}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Landroid/content/Context;IZ)Z

    move-result v2

    if-nez v2, :cond_5

    .line 370
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->q(I)Z

    move-result v2

    const/4 v3, 0x0

    const-string v4, "handleDownload id:"

    if-eq p1, v1, :cond_4

    if-eq p1, v0, :cond_3

    goto :goto_1

    :cond_3
    if-nez v2, :cond_5

    .line 374
    sget-object p1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ",pBC:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0, v3}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 375
    invoke-virtual {p0, v1}, Lcom/ss/android/downloadlib/addownload/pp;->df(Z)V

    goto :goto_1

    :cond_4
    if-nez v2, :cond_5

    .line 380
    sget-object p1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v4, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ",pIC:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0, v3}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 381
    invoke-virtual {p0, v1}, Lcom/ss/android/downloadlib/addownload/pp;->q(Z)V

    :cond_5
    :goto_1
    return-void
.end method

.method public df(Z)V
    .locals 0

    .line 472
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp(Z)V

    return-void
.end method

.method public df()Z
    .locals 1

    .line 312
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->b:Z

    return v0
.end method

.method public fw()V
    .locals 2

    .line 809
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 812
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 813
    invoke-interface {v1}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onIdle()V

    goto :goto_0

    .line 816
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_2

    const/4 v1, -0x4

    .line 817
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setStatus(I)V

    :cond_2
    return-void
.end method

.method public pp()Z
    .locals 5

    .line 401
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "quick_app_enable_switch"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-eqz v0, :cond_0

    return v1

    .line 404
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getQuickAppModel()Lcom/ss/android/download/api/model/q;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    .line 405
    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getQuickAppModel()Lcom/ss/android/download/api/model/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/download/api/model/q;->rg()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 406
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 407
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v2, Landroid/content/Intent;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getQuickAppModel()Lcom/ss/android/download/api/model/q;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ss/android/download/api/model/q;->rg()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    const-string v4, "android.intent.action.VIEW"

    invoke-direct {v2, v4, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-static {v0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method public pt()J
    .locals 2

    .line 328
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->hq:J

    return-wide v0
.end method

.method public pt(Z)Z
    .locals 3

    .line 964
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    const/4 v1, 0x0

    const-string v2, "mDownloadButtonClickListener has recycled"

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 967
    :try_start_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    invoke-virtual {p1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-interface {p1, v0}, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;->handleComplianceDialog(Z)V

    goto :goto_0

    .line 969
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    invoke-virtual {p1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-interface {p1}, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;->handleMarketFailedComplianceDialog()V

    :goto_0
    const/4 p1, 0x0

    .line 972
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 975
    :catch_0
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    return v1

    .line 980
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    return v1
.end method

.method public q(Z)V
    .locals 3

    if-eqz p1, :cond_0

    .line 493
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    .line 495
    :cond_0
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->f()V

    return-void
.end method

.method public q()Z
    .locals 1

    .line 320
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public rg(J)Lcom/ss/android/downloadlib/addownload/c;
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    .line 342
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(J)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 344
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    .line 345
    iput-wide p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    .line 346
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(J)V

    goto :goto_0

    .line 349
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const/4 p2, 0x0

    const-string v0, "setModelId"

    invoke-virtual {p1, p2, v0}, Lcom/ss/android/downloadlib/exception/q;->rg(ZLjava/lang/String;)V

    :cond_1
    :goto_0
    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    .line 943
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    goto :goto_0

    .line 945
    :cond_0
    new-instance v0, Ljava/lang/ref/SoftReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    :goto_0
    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/OnItemClickListener;)Lcom/ss/android/downloadlib/addownload/c;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    .line 216
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->z:Ljava/lang/ref/SoftReference;

    goto :goto_0

    .line 218
    :cond_0
    new-instance v0, Ljava/lang/ref/SoftReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->z:Ljava/lang/ref/SoftReference;

    :goto_0
    return-object p0
.end method

.method public rg(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 2

    if-eqz p2, :cond_1

    .line 141
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "back_use_softref_listener"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 142
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 144
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    new-instance v1, Ljava/lang/ref/SoftReference;

    invoke-direct {v1, p2}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-object p0
.end method

.method public rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 1

    if-eqz p1, :cond_0

    .line 129
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->pp:Ljava/lang/ref/WeakReference;

    .line 131
    :cond_0
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->df(Landroid/content/Context;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadController;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 3

    .line 187
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->un:Lcom/ss/android/download/api/download/DownloadController;

    .line 188
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/pt;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "force_auto_open"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 189
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object p1

    invoke-interface {p1, v0}, Lcom/ss/android/download/api/download/DownloadController;->setLinkMode(I)V

    .line 191
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "fix_show_dialog"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 192
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getExtra()Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v0, "subprocess"

    .line 194
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_1

    .line 195
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/ss/android/download/api/download/DownloadController;->setEnableNewActivity(Z)V

    .line 198
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(JLcom/ss/android/download/api/download/DownloadController;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadEventConfig;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 3

    .line 207
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->v:Lcom/ss/android/download/api/download/DownloadEventConfig;

    .line 208
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object p1

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadEventConfig;->getDownloadScene()I

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->r:Z

    .line 209
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(JLcom/ss/android/download/api/download/DownloadEventConfig;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 5

    if-eqz p1, :cond_3

    .line 156
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_1

    .line 157
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v3

    cmp-long v0, v3, v1

    if-lez v0, :cond_0

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 158
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const-string v1, "setDownloadModel ad error"

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    goto :goto_0

    .line 160
    :cond_1
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v3

    cmp-long v0, v3, v1

    if-nez v0, :cond_2

    instance-of v0, p1, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v0, :cond_2

    .line 161
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "setDownloadModel id=0"

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/exception/q;->rg(ZLjava/lang/String;)V

    .line 162
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "fix_model_id"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 163
    move-object v0, p1

    check-cast v0, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setId(J)Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    .line 167
    :cond_2
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/download/api/download/DownloadModel;)V

    .line 168
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    .line 169
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    .line 170
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 171
    check-cast p1, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    const-wide/16 v0, 0x3

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setExtraValue(J)V

    .line 172
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {p1, v2, v3}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 173
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->hq()J

    move-result-wide v2

    cmp-long v2, v2, v0

    if-eqz v2, :cond_3

    .line 174
    invoke-virtual {p1, v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->pp(J)V

    .line 175
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg()Lcom/ss/android/downloadlib/addownload/model/ux;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_3
    return-object p0
.end method

.method public rg()V
    .locals 5

    const/4 v0, 0x1

    .line 228
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->b:Z

    .line 230
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v1

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->hq()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v4

    invoke-virtual {v1, v2, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(JLcom/ss/android/download/api/download/DownloadEventConfig;)V

    .line 231
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v1

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v4

    invoke-virtual {v1, v2, v3, v4}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(JLcom/ss/android/download/api/download/DownloadController;)V

    .line 232
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/fw;->rg(J)V

    .line 233
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->un()V

    .line 235
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "enable_empty_listener"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    const/high16 v1, -0x80000000

    .line 236
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_0

    .line 237
    new-instance v0, Lcom/ss/android/download/api/config/rg;

    invoke-direct {v0}, Lcom/ss/android/download/api/config/rg;-><init>()V

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/pp;

    :cond_0
    return-void
.end method

.method public rg(Landroid/os/Message;)V
    .locals 3

    if-eqz p1, :cond_2

    .line 523
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->b:Z

    if-nez v0, :cond_0

    goto :goto_0

    .line 526
    :cond_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    goto :goto_0

    .line 528
    :cond_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 529
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->z()Lcom/ss/android/download/api/model/DownloadShortInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-virtual {v0, p1, v1, v2}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Landroid/os/Message;Lcom/ss/android/download/api/model/DownloadShortInfo;Ljava/util/Map;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public rg(Z)V
    .locals 2

    .line 283
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_1

    .line 285
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/appdownloader/pt;->df()Lcom/ss/android/socialbase/appdownloader/q/pt;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 287
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/appdownloader/q/pt;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 289
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->cancel(IZ)V

    goto :goto_0

    .line 291
    :cond_1
    new-instance p1, Landroid/content/Intent;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    const-class v1, Lcom/ss/android/socialbase/appdownloader/DownloadHandlerService;

    invoke-direct {p1, v0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v0, "android.ss.intent.action.DOWNLOAD_DELETE"

    .line 292
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 293
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    const-string v1, "extra_click_download_ids"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 294
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    :cond_2
    :goto_0
    return-void
.end method

.method public rg(ZZ)V
    .locals 3

    if-eqz p1, :cond_0

    .line 669
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    const/4 v2, 0x2

    invoke-virtual {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    :cond_0
    const-string p1, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 671
    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/rz;->df(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 672
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/pp;->oh()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object p1

    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadController;->enableNewActivity()Z

    move-result p1

    if-nez p1, :cond_1

    .line 674
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/fw;->df()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/ss/android/download/api/download/DownloadModel;->setFilePath(Ljava/lang/String;)Lcom/ss/android/download/api/download/DownloadModel;

    .line 677
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-static {p1}, Lcom/ss/android/downloadlib/utils/pt;->q(Lcom/ss/android/download/api/download/DownloadModel;)I

    move-result p1

    if-nez p1, :cond_2

    .line 678
    sget-object p1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    const/4 v0, 0x0

    const-string v1, "pBCD not start"

    invoke-static {p1, v1, v0}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 679
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    new-instance v0, Lcom/ss/android/downloadlib/addownload/pp$4;

    invoke-direct {v0, p0, p2}, Lcom/ss/android/downloadlib/addownload/pp$4;-><init>(Lcom/ss/android/downloadlib/addownload/pp;Z)V

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/download/api/config/n;)V

    goto :goto_0

    .line 693
    :cond_2
    invoke-direct {p0, p2}, Lcom/ss/android/downloadlib/addownload/pp;->fw(Z)V

    :goto_0
    return-void
.end method

.method public rg(I)Z
    .locals 4

    if-nez p1, :cond_0

    .line 252
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->clear()V

    goto :goto_0

    .line 254
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 256
    :goto_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result p1

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_4

    .line 257
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->b:Z

    .line 258
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->hq:J

    .line 259
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz p1, :cond_1

    .line 260
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->removeTaskMainListener(I)V

    .line 262
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->rz:Lcom/ss/android/downloadlib/addownload/pp$q;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/pp$q;->getStatus()Landroid/os/AsyncTask$Status;

    move-result-object p1

    sget-object v0, Landroid/os/AsyncTask$Status;->FINISHED:Landroid/os/AsyncTask$Status;

    if-eq p1, v0, :cond_2

    .line 263
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->rz:Lcom/ss/android/downloadlib/addownload/pp$q;

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/addownload/pp$q;->cancel(Z)Z

    .line 265
    :cond_2
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 266
    sget-object p1, Lcom/ss/android/downloadlib/addownload/pp;->rg:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onUnbind removeCallbacksAndMessages, downloadUrl:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-nez v2, :cond_3

    const-string v2, ""

    goto :goto_1

    :cond_3
    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v2

    :goto_1
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-static {p1, v0, v2}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 267
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->df:Lcom/ss/android/downloadlib/utils/hq;

    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/utils/hq;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 268
    iput-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->fw:Lcom/ss/android/download/api/model/DownloadShortInfo;

    .line 269
    iput-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    return v1

    .line 271
    :cond_4
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-ne p1, v1, :cond_5

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->c:Ljava/util/Map;

    const/high16 v1, -0x80000000

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 273
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp;->q:Lcom/ss/android/downloadlib/addownload/fw;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->ux:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p1, v1}, Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_5
    return v0
.end method

.method public rz()Z
    .locals 2

    .line 954
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp;->n:Ljava/lang/ref/SoftReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 957
    :cond_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->f:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-static {v1, v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z

    move-result v0

    return v0
.end method

.method public ux()V
    .locals 3

    .line 932
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/pp;->oh:J

    invoke-virtual {v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/model/c;->c(J)V

    return-void
.end method
