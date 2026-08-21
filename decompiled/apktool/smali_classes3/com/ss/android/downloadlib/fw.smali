.class public Lcom/ss/android/downloadlib/fw;
.super Ljava/lang/Object;


# static fields
.field private static volatile rg:Lcom/ss/android/downloadlib/fw;


# instance fields
.field private c:J

.field private final df:Landroid/os/Handler;

.field private final pp:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private final pt:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ss/android/downloadlib/addownload/c;",
            ">;"
        }
    .end annotation
.end field

.field private final q:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/downloadlib/addownload/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    .line 44
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    .line 45
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/fw;->pp:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 46
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    return-void
.end method

.method private declared-synchronized df(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 2

    monitor-enter p0

    .line 111
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_0

    .line 112
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/fw;->q(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    goto :goto_0

    .line 114
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/downloadlib/addownload/c;

    .line 115
    invoke-interface {v0, p1}, Lcom/ss/android/downloadlib/addownload/c;->df(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 116
    invoke-interface {p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/c;->df(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 117
    invoke-interface {p1, p4}, Lcom/ss/android/downloadlib/addownload/c;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 118
    invoke-interface {p1}, Lcom/ss/android/downloadlib/addownload/c;->rg()V

    .line 119
    iget-object p1, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {p4}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 121
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private pt()V
    .locals 9

    .line 259
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 260
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 261
    iget-object v3, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ss/android/downloadlib/addownload/c;

    .line 262
    invoke-interface {v4}, Lcom/ss/android/downloadlib/addownload/c;->df()Z

    move-result v5

    if-eqz v5, :cond_1

    goto :goto_0

    .line 265
    :cond_1
    invoke-interface {v4}, Lcom/ss/android/downloadlib/addownload/c;->pt()J

    move-result-wide v5

    sub-long v5, v0, v5

    const-wide/32 v7, 0x493e0

    cmp-long v5, v5, v7

    if-lez v5, :cond_0

    .line 266
    invoke-interface {v4}, Lcom/ss/android/downloadlib/addownload/c;->ux()V

    .line 267
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 270
    :cond_2
    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_3

    .line 271
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    :cond_3
    return-void
.end method

.method private q()V
    .locals 6

    .line 247
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 248
    iget-wide v2, p0, Lcom/ss/android/downloadlib/fw;->c:J

    sub-long v2, v0, v2

    const-wide/32 v4, 0x493e0

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    return-void

    .line 251
    :cond_0
    iput-wide v0, p0, Lcom/ss/android/downloadlib/fw;->c:J

    .line 253
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 254
    invoke-direct {p0}, Lcom/ss/android/downloadlib/fw;->pt()V

    :cond_1
    return-void
.end method

.method private q(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 1

    if-nez p4, :cond_0

    return-void

    .line 132
    :cond_0
    new-instance v0, Lcom/ss/android/downloadlib/addownload/pp;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/pp;-><init>()V

    .line 133
    invoke-interface {v0, p1}, Lcom/ss/android/downloadlib/addownload/c;->df(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 134
    invoke-interface {p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/c;->df(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 135
    invoke-interface {p1, p4}, Lcom/ss/android/downloadlib/addownload/c;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 136
    invoke-interface {p1}, Lcom/ss/android/downloadlib/addownload/c;->rg()V

    .line 137
    iget-object p1, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {p4}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/fw;
    .locals 2

    .line 50
    sget-object v0, Lcom/ss/android/downloadlib/fw;->rg:Lcom/ss/android/downloadlib/fw;

    if-nez v0, :cond_1

    .line 51
    const-class v0, Lcom/ss/android/downloadlib/fw;

    monitor-enter v0

    .line 52
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/fw;->rg:Lcom/ss/android/downloadlib/fw;

    if-nez v1, :cond_0

    .line 53
    new-instance v1, Lcom/ss/android/downloadlib/fw;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/fw;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/fw;->rg:Lcom/ss/android/downloadlib/fw;

    .line 55
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 57
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/fw;->rg:Lcom/ss/android/downloadlib/fw;

    return-object v0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/fw;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/ss/android/downloadlib/fw;->pp:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method


# virtual methods
.method public df()Landroid/os/Handler;
    .locals 1

    .line 353
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    return-object v0
.end method

.method public df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 2

    .line 323
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/fw$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/fw$4;-><init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/pp;
    .locals 2

    .line 96
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 99
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadlib/addownload/c;

    .line 100
    instance-of v0, p1, Lcom/ss/android/downloadlib/addownload/pp;

    if-eqz v0, :cond_1

    .line 101
    check-cast p1, Lcom/ss/android/downloadlib/addownload/pp;

    return-object p1

    :cond_1
    :goto_0
    return-object v1
.end method

.method public rg(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 2

    if-eqz p4, :cond_3

    .line 71
    invoke-interface {p4}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 74
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {p4}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/downloadlib/addownload/c;

    if-eqz v0, :cond_1

    .line 77
    invoke-interface {v0, p1}, Lcom/ss/android/downloadlib/addownload/c;->df(Landroid/content/Context;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    invoke-interface {p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/c;->df(ILcom/ss/android/download/api/download/DownloadStatusChangeListener;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    invoke-interface {p1, p4}, Lcom/ss/android/downloadlib/addownload/c;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/ss/android/downloadlib/addownload/c;->rg()V

    return-void

    .line 80
    :cond_1
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 82
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/fw;->df(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    goto :goto_0

    .line 85
    :cond_2
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/fw;->q(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;)V
    .locals 2

    .line 278
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/fw$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/ss/android/downloadlib/fw$1;-><init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/rg/rg;)V
    .locals 3

    if-eqz p1, :cond_1

    .line 217
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "fix_listener_oom"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 218
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pp:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v1, Ljava/lang/ref/SoftReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 220
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pp:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    :goto_0
    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2

    .line 338
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/fw$5;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/fw$5;-><init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;Ljava/lang/String;)V
    .locals 2

    .line 293
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/fw$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/ss/android/downloadlib/fw$2;-><init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 2

    .line 308
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->df:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/downloadlib/fw$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/fw$3;-><init>(Lcom/ss/android/downloadlib/fw;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public rg(Ljava/lang/String;I)V
    .locals 1

    .line 141
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 144
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/downloadlib/addownload/c;

    if-eqz v0, :cond_2

    .line 147
    invoke-interface {v0, p2}, Lcom/ss/android/downloadlib/addownload/c;->rg(I)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 152
    iget-object p2, p0, Lcom/ss/android/downloadlib/fw;->q:Ljava/util/List;

    invoke-interface {p2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 153
    iget-object p2, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 155
    :cond_1
    invoke-direct {p0}, Lcom/ss/android/downloadlib/fw;->q()V

    :cond_2
    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V
    .locals 10

    const/4 v0, 0x0

    .line 178
    move-object v8, v0

    check-cast v8, Lcom/ss/android/download/api/config/OnItemClickListener;

    const/4 v9, 0x0

    move-object v1, p0

    move-object v2, p1

    move-wide v3, p2

    move v5, p4

    move-object v6, p5

    move-object/from16 v7, p6

    invoke-virtual/range {v1 .. v9}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 10

    const/4 v0, 0x0

    .line 183
    move-object v8, v0

    check-cast v8, Lcom/ss/android/download/api/config/OnItemClickListener;

    move-object v1, p0

    move-object v2, p1

    move-wide v3, p2

    move v5, p4

    move-object v6, p5

    move-object/from16 v7, p6

    move-object/from16 v9, p7

    invoke-virtual/range {v1 .. v9}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    return-void
.end method

.method public rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 1

    .line 189
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 192
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadlib/addownload/c;

    if-eqz p1, :cond_1

    .line 195
    invoke-interface {p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/c;->rg(J)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 196
    invoke-interface {p1, p5}, Lcom/ss/android/downloadlib/addownload/c;->df(Lcom/ss/android/download/api/download/DownloadEventConfig;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 197
    invoke-interface {p1, p6}, Lcom/ss/android/downloadlib/addownload/c;->df(Lcom/ss/android/download/api/download/DownloadController;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 198
    invoke-interface {p1, p7}, Lcom/ss/android/downloadlib/addownload/c;->rg(Lcom/ss/android/download/api/config/OnItemClickListener;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 199
    invoke-interface {p1, p8}, Lcom/ss/android/downloadlib/addownload/c;->rg(Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Lcom/ss/android/downloadlib/addownload/c;

    move-result-object p1

    .line 200
    invoke-interface {p1, p4}, Lcom/ss/android/downloadlib/addownload/c;->df(I)V

    :cond_1
    return-void
.end method

.method public rg(Ljava/lang/String;Z)V
    .locals 1

    .line 163
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 166
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/fw;->pt:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadlib/addownload/c;

    if-eqz p1, :cond_1

    .line 168
    invoke-interface {p1, p2}, Lcom/ss/android/downloadlib/addownload/c;->rg(Z)V

    :cond_1
    return-void
.end method
