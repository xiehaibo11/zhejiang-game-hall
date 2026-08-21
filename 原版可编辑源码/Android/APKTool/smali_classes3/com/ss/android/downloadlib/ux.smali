.class public Lcom/ss/android/downloadlib/ux;
.super Ljava/lang/Object;


# static fields
.field private static volatile rg:Lcom/ss/android/downloadlib/ux;


# instance fields
.field private c:J

.field private final df:Lcom/ss/android/download/api/rg;

.field private pp:Lcom/ss/android/downloadad/api/df;

.field private final pt:Lcom/ss/android/downloadad/api/rg;

.field private final q:Lcom/ss/android/downloadlib/fw;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 86
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadlib/ux;->q:Lcom/ss/android/downloadlib/fw;

    .line 87
    new-instance v0, Lcom/ss/android/downloadlib/pp;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/pp;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/ux;->df:Lcom/ss/android/download/api/rg;

    .line 88
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadlib/ux;->c:J

    .line 89
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/ux;->df(Landroid/content/Context;)V

    .line 91
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/downloadlib/ux;->pt:Lcom/ss/android/downloadad/api/rg;

    return-void
.end method

.method synthetic constructor <init>(Landroid/content/Context;Lcom/ss/android/downloadlib/ux$1;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/ux;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/fw;
    .locals 0

    .line 58
    invoke-direct {p0}, Lcom/ss/android/downloadlib/ux;->ux()Lcom/ss/android/downloadlib/fw;

    move-result-object p0

    return-object p0
.end method

.method private df(Landroid/content/Context;)V
    .locals 7

    .line 98
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Landroid/content/Context;)V

    .line 99
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    .line 100
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/c;->df()V

    .line 102
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    new-instance v4, Lcom/ss/android/downloadlib/q/fw;

    invoke-direct {v4}, Lcom/ss/android/downloadlib/q/fw;-><init>()V

    new-instance v5, Lcom/ss/android/downloadlib/q/c;

    invoke-direct {v5, p1}, Lcom/ss/android/downloadlib/q/c;-><init>(Landroid/content/Context;)V

    new-instance v6, Lcom/ss/android/downloadlib/q;

    invoke-direct {v6}, Lcom/ss/android/downloadlib/q;-><init>()V

    const-string v3, "misc_config"

    invoke-virtual/range {v1 .. v6}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/socialbase/appdownloader/q/q;Lcom/ss/android/socialbase/appdownloader/q/pt;Lcom/ss/android/socialbase/appdownloader/q/ux;)V

    .line 107
    new-instance v0, Lcom/ss/android/downloadlib/q/pt;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/q/pt;-><init>()V

    .line 108
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/q/fw;)V

    .line 109
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->registerDownloadCacheSyncListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadCacheSyncStatusListener;)V

    .line 110
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p1

    new-instance v0, Lcom/ss/android/downloadlib/addownload/b;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/b;-><init>()V

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/downloader/downloader/IReserveWifiStatusListener;)V

    .line 111
    new-instance p1, Lcom/ss/android/downloadlib/q/pp;

    invoke-direct {p1}, Lcom/ss/android/downloadlib/q/pp;-><init>()V

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->setDownloadEventListener(Lcom/ss/android/socialbase/downloader/monitor/InnerEventListener;)V

    .line 112
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p1

    invoke-static {}, Lcom/ss/android/downloadlib/pt/q;->rg()Lcom/ss/android/downloadlib/pt/q;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/q/bm;)V

    return-void
.end method

.method public static rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;
    .locals 2

    .line 70
    sget-object v0, Lcom/ss/android/downloadlib/ux;->rg:Lcom/ss/android/downloadlib/ux;

    if-nez v0, :cond_1

    .line 71
    const-class v0, Lcom/ss/android/downloadlib/ux;

    monitor-enter v0

    .line 72
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/ux;->rg:Lcom/ss/android/downloadlib/ux;

    if-nez v1, :cond_0

    .line 73
    new-instance v1, Lcom/ss/android/downloadlib/ux$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/ux$1;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    .line 80
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 82
    :cond_1
    :goto_0
    sget-object p0, Lcom/ss/android/downloadlib/ux;->rg:Lcom/ss/android/downloadlib/ux;

    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/ux;
    .locals 0

    .line 58
    sput-object p0, Lcom/ss/android/downloadlib/ux;->rg:Lcom/ss/android/downloadlib/ux;

    return-object p0
.end method

.method private ux()Lcom/ss/android/downloadlib/fw;
    .locals 1

    .line 199
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux;->q:Lcom/ss/android/downloadlib/fw;

    return-object v0
.end method


# virtual methods
.method public c()Ljava/lang/String;
    .locals 1

    .line 501
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->oh()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public df()J
    .locals 2

    .line 168
    iget-wide v0, p0, Lcom/ss/android/downloadlib/ux;->c:J

    return-wide v0
.end method

.method public df(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 2

    .line 517
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 520
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    return-object p1
.end method

.method public fw()V
    .locals 1

    .line 513
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/pt;->pp()V

    return-void
.end method

.method public pp()Lcom/ss/android/downloadad/api/df;
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux;->pp:Lcom/ss/android/downloadad/api/df;

    if-nez v0, :cond_0

    .line 189
    invoke-static {}, Lcom/ss/android/downloadlib/df;->rg()Lcom/ss/android/downloadlib/df;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/downloadlib/ux;->pp:Lcom/ss/android/downloadad/api/df;

    .line 191
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux;->pp:Lcom/ss/android/downloadad/api/df;

    return-object v0
.end method

.method public pt()Lcom/ss/android/downloadad/api/rg;
    .locals 1

    .line 181
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux;->pt:Lcom/ss/android/downloadad/api/rg;

    return-object v0
.end method

.method public q()V
    .locals 2

    .line 175
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadlib/ux;->c:J

    return-void
.end method

.method public rg()Lcom/ss/android/download/api/rg;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux;->df:Lcom/ss/android/download/api/rg;

    return-object v0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/download/api/rg;
    .locals 2

    .line 126
    invoke-static {}, Lcom/ss/android/downloadlib/c;->rg()Lcom/ss/android/downloadlib/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/c;->df()Lcom/ss/android/download/api/config/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 128
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/c;->rg(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 130
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/c;->df(Ljava/lang/String;)Lcom/ss/android/download/api/rg;

    move-result-object p1

    return-object p1

    .line 132
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/ux;->df:Lcom/ss/android/download/api/rg;

    return-object p1
.end method

.method public rg(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 7

    .line 219
    new-instance v6, Lcom/ss/android/downloadlib/ux$4;

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    move v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/ss/android/downloadlib/ux$4;-><init>(Lcom/ss/android/downloadlib/ux;Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    invoke-static {v6}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/rg/rg;)V
    .locals 1

    .line 412
    invoke-direct {p0}, Lcom/ss/android/downloadlib/ux;->ux()Lcom/ss/android/downloadlib/fw;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/fw;->rg(Lcom/ss/android/download/api/download/rg/rg;)V

    return-void
.end method

.method public rg(Ljava/lang/String;I)V
    .locals 1

    .line 356
    new-instance v0, Lcom/ss/android/downloadlib/ux$2;

    invoke-direct {v0, p0, p1, p2}, Lcom/ss/android/downloadlib/ux$2;-><init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;I)V

    invoke-static {v0}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V
    .locals 9

    .line 280
    new-instance v8, Lcom/ss/android/downloadlib/ux$6;

    move-object v0, v8

    move-object v1, p0

    move-object v2, p1

    move-wide v3, p2

    move v5, p4

    move-object v6, p5

    move-object v7, p6

    invoke-direct/range {v0 .. v7}, Lcom/ss/android/downloadlib/ux$6;-><init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    invoke-static {v8}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 10

    .line 292
    new-instance v9, Lcom/ss/android/downloadlib/ux$7;

    move-object v0, v9

    move-object v1, p0

    move-object v2, p1

    move-wide v3, p2

    move v5, p4

    move-object v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    invoke-direct/range {v0 .. v8}, Lcom/ss/android/downloadlib/ux$7;-><init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    invoke-static {v9}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 11

    .line 268
    new-instance v10, Lcom/ss/android/downloadlib/ux$5;

    move-object v0, v10

    move-object v1, p0

    move-object v2, p1

    move-wide v3, p2

    move v5, p4

    move-object/from16 v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    move-object/from16 v9, p8

    invoke-direct/range {v0 .. v9}, Lcom/ss/android/downloadlib/ux$5;-><init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    invoke-static {v10}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Ljava/lang/String;Z)V
    .locals 1

    .line 372
    new-instance v0, Lcom/ss/android/downloadlib/ux$3;

    invoke-direct {v0, p0, p1, p2}, Lcom/ss/android/downloadlib/ux$3;-><init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;Z)V

    invoke-static {v0}, Lcom/ss/android/downloadlib/exception/df;->rg(Ljava/lang/Runnable;)V

    return-void
.end method
