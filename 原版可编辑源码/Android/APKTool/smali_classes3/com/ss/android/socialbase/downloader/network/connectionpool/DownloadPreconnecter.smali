.class public Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$CancelRunnable;
    }
.end annotation


# static fields
.field private static final DEFAULT_CONNECTION_OUTDATE_TIME:J = 0x493e0L

.field private static final DEFAULT_HEAD_INFO_OUTDATE_TIME:J = 0x493e0L

.field private static sCancelRunnable:Ljava/lang/Runnable;

.field static sConnectionOutdatedTime:J

.field private static final sHandler:Landroid/os/Handler;

.field static sHeadInfoOutdatedTime:J

.field private static final sPreconnectThread:Landroid/os/HandlerThread;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 32
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "Downloader-preconnecter"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sPreconnectThread:Landroid/os/HandlerThread;

    .line 43
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->init()V

    .line 44
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sPreconnectThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 45
    new-instance v0, Landroid/os/Handler;

    sget-object v1, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sPreconnectThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sHandler:Landroid/os/Handler;

    .line 46
    new-instance v1, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$1;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$1;-><init>()V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(JLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/util/List;)Ljava/util/List;
    .locals 0

    .line 26
    invoke-static {p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->getExtraHeaders(JLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Ljava/lang/String;Ljava/util/List;J)V
    .locals 0

    .line 26
    invoke-static {p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->fetchHeadInfo(Ljava/lang/String;Ljava/util/List;J)V

    return-void
.end method

.method static synthetic access$200(ILjava/lang/String;Ljava/util/List;J)V
    .locals 0

    .line 26
    invoke-static {p0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->createConnection(ILjava/lang/String;Ljava/util/List;J)V

    return-void
.end method

.method static synthetic access$300()Ljava/lang/Runnable;
    .locals 1

    .line 26
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sCancelRunnable:Ljava/lang/Runnable;

    return-object v0
.end method

.method static synthetic access$302(Ljava/lang/Runnable;)Ljava/lang/Runnable;
    .locals 0

    .line 26
    sput-object p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sCancelRunnable:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic access$400()Landroid/os/Handler;
    .locals 1

    .line 26
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sHandler:Landroid/os/Handler;

    return-object v0
.end method

.method public static asyncFetchHttpHeadInfo(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IFetchHttpHeadInfoListener;)V
    .locals 2

    .line 81
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sHandler:Landroid/os/Handler;

    new-instance v1, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$2;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$2;-><init>(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IFetchHttpHeadInfoListener;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private static asyncPreconnect(ILjava/lang/String;Ljava/util/List;JZZ)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;JZZ)V"
        }
    .end annotation

    .line 137
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sHandler:Landroid/os/Handler;

    new-instance v9, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;

    move-object v1, v9

    move/from16 v2, p6

    move-object v3, p1

    move-object v4, p2

    move-wide v5, p3

    move v7, p5

    move v8, p0

    invoke-direct/range {v1 .. v8}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter$3;-><init>(ZLjava/lang/String;Ljava/util/List;JZI)V

    invoke-virtual {v0, v9}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private static createConnection(ILjava/lang/String;Ljava/util/List;J)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;J)V"
        }
    .end annotation

    .line 157
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->isDownloadConnectionExist(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 161
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;

    move-object v1, v0

    move v2, p0

    move-object v3, p1

    move-object v4, p2

    move-wide v5, p3

    invoke-direct/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;-><init>(ILjava/lang/String;Ljava/util/List;J)V

    .line 162
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object p0

    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->putCachedDownloadConnections(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;)V

    .line 164
    :try_start_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->execute()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 166
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static fetchHeadInfo(Ljava/lang/String;Ljava/util/List;J)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;J)V"
        }
    .end annotation

    .line 172
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->isHeadConnectionExist(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 175
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;-><init>(Ljava/lang/String;Ljava/util/List;J)V

    .line 176
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object p1

    invoke-virtual {p1, p0, v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->putCachedHeadConnections(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;)V

    .line 178
    :try_start_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->execute()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 184
    :goto_0
    :try_start_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->cancel()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception p0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 180
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_1
    :goto_1
    return-void

    .line 184
    :goto_2
    :try_start_3
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHeadHttpConnection;->cancel()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 187
    :catchall_2
    throw p0
.end method

.method private static getExtraHeaders(JLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/util/List;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    if-nez p2, :cond_0

    const/4 p2, 0x0

    goto :goto_0

    .line 132
    :cond_0
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->geteTag()Ljava/lang/String;

    move-result-object p2

    :goto_0
    move-object v1, p2

    const-wide/16 v4, 0x0

    move-object v0, p3

    move-wide v2, p0

    invoke-static/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->addRangeHeader(Ljava/util/List;Ljava/lang/String;JJ)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static getLooper()Landroid/os/Looper;
    .locals 1

    .line 58
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sPreconnectThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method

.method private static init()V
    .locals 5

    .line 124
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-wide/32 v1, 0x493e0

    const-string v3, "preconnect_connection_outdate_time"

    invoke-virtual {v0, v3, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v3

    sput-wide v3, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sConnectionOutdatedTime:J

    .line 125
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v3, "preconnect_head_info_outdate_time"

    invoke-virtual {v0, v3, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    sput-wide v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sHeadInfoOutdatedTime:J

    .line 126
    invoke-static {}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->getInstance()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "preconnect_max_cache_size"

    const/4 v3, 0x3

    .line 127
    invoke-virtual {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 126
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;->setMaxCachedDownloadConnectionSize(I)V

    return-void
.end method

.method public static preconnect(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;ZZ)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;ZZ)V"
        }
    .end annotation

    .line 66
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 69
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloadingStatus()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isDownloaded()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    goto :goto_0

    .line 73
    :cond_0
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getFirstOffset(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)J

    move-result-wide v0

    goto :goto_1

    :cond_1
    :goto_0
    return-void

    :cond_2
    const-wide/16 v0, 0x0

    :goto_1
    move-wide v5, v0

    .line 75
    invoke-static {v5, v6, p2, p3}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->getExtraHeaders(JLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/util/List;)Ljava/util/List;

    move-result-object v4

    move v2, p0

    move-object v3, p1

    move v7, p4

    move v8, p5

    .line 76
    invoke-static/range {v2 .. v8}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->asyncPreconnect(ILjava/lang/String;Ljava/util/List;JZZ)V

    return-void
.end method

.method public static preconnect(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 6

    const/4 v0, -0x1

    const/4 v3, 0x0

    const/4 v5, 0x1

    move-object v1, p0

    move-object v2, p1

    move v4, p2

    .line 62
    invoke-static/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->preconnect(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;ZZ)V

    return-void
.end method
