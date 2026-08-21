.class public Lcom/ss/android/downloadlib/addownload/q;
.super Ljava/lang/Object;


# static fields
.field private static volatile df:Lcom/ss/android/downloadlib/addownload/q;

.field private static rg:Ljava/lang/String;


# instance fields
.field private q:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Long;",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/ss/android/downloadlib/addownload/q;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/addownload/q;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/q;->q:Ljava/util/concurrent/ConcurrentHashMap;

    .line 43
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/q;->q:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/q;
    .locals 2

    .line 47
    sget-object v0, Lcom/ss/android/downloadlib/addownload/q;->df:Lcom/ss/android/downloadlib/addownload/q;

    if-nez v0, :cond_1

    .line 48
    const-class v0, Lcom/ss/android/downloadlib/addownload/q;

    monitor-enter v0

    .line 49
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/addownload/q;->df:Lcom/ss/android/downloadlib/addownload/q;

    if-nez v1, :cond_0

    .line 50
    new-instance v1, Lcom/ss/android/downloadlib/addownload/q;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/q;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/addownload/q;->df:Lcom/ss/android/downloadlib/addownload/q;

    .line 52
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 55
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/q;->df:Lcom/ss/android/downloadlib/addownload/q;

    return-object v0
.end method

.method private rg(JZI)V
    .locals 8

    .line 103
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JZI)V

    if-eqz p3, :cond_0

    .line 105
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->n()Lcom/ss/android/download/api/config/qx;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x3

    invoke-interface/range {v1 .. v7}, Lcom/ss/android/download/api/config/qx;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method public static rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    if-eqz p0, :cond_1

    .line 166
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result p0

    const/4 v0, -0x4

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method public df()J
    .locals 4

    .line 156
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "quick_app_check_internal"

    const-wide/16 v2, 0x4b0

    .line 157
    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public rg(Lcom/ss/android/downloadlib/addownload/pp;ILcom/ss/android/download/api/download/DownloadModel;)V
    .locals 2

    .line 111
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/addownload/q$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/ss/android/downloadlib/addownload/q$1;-><init>(Lcom/ss/android/downloadlib/addownload/q;Lcom/ss/android/downloadlib/addownload/pp;ILcom/ss/android/download/api/download/DownloadModel;)V

    .line 116
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/q;->df()J

    move-result-wide p1

    .line 111
    invoke-virtual {v0, v1, p1, p2}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;J)V

    return-void
.end method

.method public rg(Lcom/ss/android/downloadlib/addownload/pp;ZILcom/ss/android/download/api/download/DownloadModel;)V
    .locals 4

    .line 60
    instance-of v0, p4, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v0, :cond_0

    .line 61
    move-object v0, p4

    check-cast v0, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setFunnelType(I)Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    .line 63
    :cond_0
    invoke-interface {p4}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v0

    const/4 p4, 0x4

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eq p3, p4, :cond_6

    const/4 p4, 0x5

    if-eq p3, p4, :cond_4

    const/4 p1, 0x7

    if-eq p3, p1, :cond_1

    goto :goto_0

    .line 85
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/q;->q:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Runnable;

    if-eqz p2, :cond_2

    .line 88
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    invoke-virtual {p1, v0, v1, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    .line 89
    invoke-direct {p0, v0, v1, v3, v3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    goto :goto_0

    :cond_2
    if-eqz p1, :cond_3

    .line 93
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object p2

    invoke-virtual {p2}, Lcom/ss/android/downloadlib/fw;->df()Landroid/os/Handler;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 95
    :cond_3
    invoke-direct {p0, v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    goto :goto_0

    :cond_4
    if-nez p2, :cond_5

    .line 77
    invoke-direct {p0, v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    .line 79
    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->q(Z)V

    goto :goto_0

    .line 81
    :cond_5
    invoke-direct {p0, v0, v1, v3, v3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    goto :goto_0

    :cond_6
    const/4 p3, 0x2

    if-nez p2, :cond_7

    .line 68
    invoke-direct {p0, v0, v1, v2, p3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    .line 70
    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->df(Z)V

    goto :goto_0

    .line 72
    :cond_7
    invoke-direct {p0, v0, v1, v3, p3}, Lcom/ss/android/downloadlib/addownload/q;->rg(JZI)V

    :goto_0
    return-void
.end method
