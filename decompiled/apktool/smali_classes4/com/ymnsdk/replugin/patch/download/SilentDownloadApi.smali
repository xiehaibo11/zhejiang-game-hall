.class public Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"


# static fields
.field public static activity:Landroid/app/Activity;

.field private static downloadApi:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

.field public static downloadType:I

.field public static startSilentDownloadTime:J


# instance fields
.field public beforeProcess:J

.field private countDownLatch:Ljava/util/concurrent/CountDownLatch;

.field public hasZeroDownloadPointMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field public volatile maxDownloadNum:I

.field public silentDownloadDur:J

.field public silentPlugin:Ljava/lang/String;

.field public silentRecoveryTime:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 55
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadApi:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    const/4 v0, 0x0

    .line 63
    sput v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadType:I

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    .line 67
    iput-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->beforeProcess:J

    const-wide/16 v0, 0x0

    .line 69
    iput-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 70
    iput-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    const-string v0, ""

    .line 71
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    .line 72
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 74
    iput v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->maxDownloadNum:I

    const/4 v0, 0x0

    .line 76
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->countDownLatch:Ljava/util/concurrent/CountDownLatch;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)Ljava/util/concurrent/CountDownLatch;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->countDownLatch:Ljava/util/concurrent/CountDownLatch;

    return-object p0
.end method

.method static synthetic access$002(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Ljava/util/concurrent/CountDownLatch;)Ljava/util/concurrent/CountDownLatch;
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->countDownLatch:Ljava/util/concurrent/CountDownLatch;

    return-object p1
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V
    .locals 0

    .line 53
    invoke-direct {p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->decreaseCountDownLatch()V

    return-void
.end method

.method private decreaseCountDownLatch()V
    .locals 4

    .line 137
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->countDownLatch:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->getCount()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    return-void

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->countDownLatch:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;
    .locals 1

    .line 58
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadApi:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    return-object v0
.end method


# virtual methods
.method public downloadOnePlugin(Landroid/app/Activity;ZI)V
    .locals 14

    move-object v13, p0

    move-object v2, p1

    move/from16 v12, p3

    .line 146
    iget v0, v13, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->maxDownloadNum:I

    if-gt v12, v0, :cond_9

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    :cond_0
    const-wide/16 v0, -0x1

    .line 147
    iput-wide v0, v13, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->beforeProcess:J

    const-wide/16 v0, 0x0

    .line 148
    iput-wide v0, v13, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 149
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 154
    :cond_1
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getPluginId()Ljava/lang/String;

    move-result-object v3

    .line 155
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u63d2\u4ef6id \u662f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u4e0b\u8f7d"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    if-eqz v3, :cond_8

    .line 156
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_2

    goto/16 :goto_1

    .line 162
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v1

    .line 163
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    if-nez v4, :cond_3

    return-void

    .line 165
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-static {v3}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v5

    if-nez v5, :cond_4

    return-void

    .line 167
    :cond_4
    invoke-static {p1, v4}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkPatch(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 168
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v4

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v4

    .line 169
    invoke-interface {v4, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 171
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v7}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_5

    add-int/lit8 v1, v12, 0x1

    .line 173
    invoke-virtual {p0, p1, v0, v1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadOnePlugin(Landroid/app/Activity;ZI)V

    return-void

    .line 176
    :cond_5
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v0, v4}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object v0

    .line 177
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->hasOldApk(Ljava/lang/String;)Z

    move-result v11

    if-eqz v0, :cond_6

    if-eqz v11, :cond_6

    if-nez p2, :cond_6

    .line 180
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_path()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    .line 182
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_size()J

    move-result-wide v6

    .line 183
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object v8

    .line 184
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    const/4 v9, 0x5

    const/16 v10, 0xf

    move-object v0, p0

    move-object v2, p1

    move/from16 v12, p3

    invoke-virtual/range {v0 .. v12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadPlugin(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    goto/16 :goto_0

    .line 187
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getRelease_path()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    .line 189
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v6

    .line 190
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v8

    .line 191
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    const/4 v9, 0x5

    const/16 v10, 0xf

    move-object v0, p0

    move-object v2, p1

    move/from16 v12, p3

    invoke-virtual/range {v0 .. v12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadPlugin(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    goto :goto_0

    .line 196
    :cond_7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getRelease_path()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    .line 198
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v6

    .line 199
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v8

    .line 200
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    const/4 v9, 0x5

    const/16 v10, 0xf

    const/4 v11, 0x1

    move-object v0, p0

    move-object v2, p1

    move/from16 v12, p3

    invoke-virtual/range {v0 .. v12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadPlugin(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    :goto_0
    return-void

    .line 159
    :cond_8
    :goto_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    :cond_9
    :goto_2
    return-void
.end method

.method public downloadPlugin(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V
    .locals 17

    move-object/from16 v3, p2

    move-object/from16 v10, p8

    .line 206
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0, v10}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 207
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    move-object/from16 v11, p4

    invoke-virtual {v0, v10, v11, v9}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 208
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    move-object/from16 v5, p8

    move-wide/from16 v6, p6

    move-object/from16 v8, p4

    invoke-virtual/range {v4 .. v9}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getDownSize(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)J

    move-result-wide v0

    move-object/from16 v4, p3

    move/from16 v6, p5

    .line 209
    invoke-static {v4, v0, v1, v6}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkSilentFilter(Ljava/lang/String;JI)I

    move-result v0

    if-eqz v0, :cond_0

    .line 212
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;

    invoke-direct {v2, v3, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void

    .line 215
    :cond_0
    invoke-static/range {p3 .. p3}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update_filter()Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 218
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;->getCustom_api_url()Ljava/lang/String;

    move-result-object v0

    .line 219
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 221
    invoke-static {}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getInstance()Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    move-result-object v14

    .line 222
    invoke-virtual {v14, v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->setActivity(Landroid/app/Activity;)V

    .line 223
    new-instance v15, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;

    invoke-direct {v15, v3, v0}, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 224
    new-instance v0, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustomRequestEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustomRequestEnity;-><init>()V

    .line 225
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUserId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustomRequestEnity;->setNum_id(Ljava/lang/String;)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    .line 226
    invoke-virtual {v15, v1}, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->putReqData([Ljava/lang/Object;)V

    .line 227
    new-instance v13, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;

    move-object v0, v13

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move-object/from16 v5, p4

    move/from16 v6, p5

    move-wide/from16 v7, p6

    move-object/from16 v9, p8

    move/from16 v10, p9

    move/from16 v11, p10

    move/from16 v12, p11

    move-object/from16 v16, v13

    move/from16 v13, p12

    move-object/from16 p1, v15

    invoke-direct/range {v0 .. v15}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZILcom/ymnsdk/replugin/util/RequestRetryUtils;Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;)V

    move-object/from16 v0, p1

    move-object/from16 v1, v16

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->addObserver(Ljava/util/Observer;)V

    .line 255
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->actionStart()V

    goto :goto_0

    .line 257
    :cond_1
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v0, :cond_2

    return-void

    .line 258
    :cond_2
    invoke-virtual/range {p0 .. p12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    goto :goto_0

    .line 261
    :cond_3
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v0, :cond_4

    return-void

    .line 262
    :cond_4
    invoke-virtual/range {p0 .. p12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    :goto_0
    return-void
.end method

.method public endSilentDownload()V
    .locals 6

    .line 541
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setOpenSilentDownload(Z)V

    .line 542
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 543
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadStop()V

    .line 544
    iget-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    sub-long/2addr v2, v4

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 545
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;

    sget-object v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->activity:Landroid/app/Activity;

    iget-wide v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    invoke-direct {v1, v2, v3, v4}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;-><init>(Landroid/app/Activity;J)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void
.end method

.method public getApkPluginId()Ljava/lang/String;
    .locals 9

    .line 477
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v0

    .line 478
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getAllPlugin()Ljava/util/List;

    move-result-object v1

    .line 479
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const-string v3, ""

    if-eqz v1, :cond_8

    .line 480
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-nez v4, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v4, 0x0

    move v5, v4

    .line 482
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v6

    if-ge v5, v6, :cond_4

    .line 484
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update()I

    move-result v6

    const/4 v7, 0x1

    if-eq v6, v7, :cond_1

    goto :goto_1

    :cond_1
    if-eqz v0, :cond_3

    .line 489
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 491
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 492
    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v7}, Lcom/ymnsdk/replugin/entity/Plugin;->getVersion()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    goto :goto_1

    .line 496
    :cond_2
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 499
    :cond_3
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 502
    :cond_4
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_5

    return-object v3

    .line 503
    :cond_5
    invoke-virtual {p0, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->sortPlugin(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    .line 504
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v2

    .line 506
    :goto_2
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_8

    .line 508
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ymnsdk/replugin/entity/Plugin;

    .line 509
    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 510
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v0, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v8}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v8

    invoke-static {v6, v7, v8}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object v6

    if-nez v6, :cond_6

    .line 512
    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_6
    add-int/lit8 v4, v4, 0x1

    goto :goto_2

    .line 515
    :cond_7
    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_8
    :goto_3
    return-object v3
.end method

.method public getPatchPluginId()Ljava/lang/String;
    .locals 9

    .line 436
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v0

    .line 437
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getAllPlugin()Ljava/util/List;

    move-result-object v1

    .line 438
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const-string v3, ""

    if-eqz v1, :cond_7

    .line 439
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-nez v4, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v4, 0x0

    move v5, v4

    .line 441
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v6

    if-ge v5, v6, :cond_4

    .line 443
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update()I

    move-result v6

    const/4 v7, 0x1

    if-eq v6, v7, :cond_1

    goto :goto_1

    :cond_1
    if-eqz v0, :cond_3

    .line 446
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 448
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 449
    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v7}, Lcom/ymnsdk/replugin/entity/Plugin;->getVersion()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    goto :goto_1

    .line 453
    :cond_2
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 456
    :cond_3
    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 459
    :cond_4
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_5

    return-object v3

    .line 460
    :cond_5
    invoke-virtual {p0, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->sortPlugin(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    .line 461
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v2

    .line 462
    :goto_2
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_7

    .line 464
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ymnsdk/replugin/entity/Plugin;

    if-eqz v0, :cond_6

    .line 465
    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_6

    .line 466
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-interface {v2, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v0, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v8}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v8

    invoke-static {v6, v7, v8}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object v6

    if-eqz v6, :cond_6

    .line 468
    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_6
    add-int/lit8 v4, v4, 0x1

    goto :goto_2

    :cond_7
    :goto_3
    return-object v3
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 4

    .line 390
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getUserPluginId()Ljava/lang/String;

    move-result-object v0

    .line 391
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object v1

    sget-object v2, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    const/4 v3, 0x0

    if-eq v1, v2, :cond_0

    move-object v0, v3

    :cond_0
    if-eqz v0, :cond_1

    .line 392
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    const/4 v1, 0x0

    .line 394
    sput v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadType:I

    return-object v0

    .line 398
    :cond_1
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getPatchPluginId()Ljava/lang/String;

    move-result-object v0

    .line 399
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object v1

    sget-object v2, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    if-eq v1, v2, :cond_2

    sget v1, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->isNoWifiDownload:I

    :cond_2
    if-eqz v0, :cond_3

    .line 400
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    const/4 v1, 0x1

    .line 402
    sput v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadType:I

    return-object v0

    .line 406
    :cond_3
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getApkPluginId()Ljava/lang/String;

    move-result-object v0

    .line 407
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object v1

    sget-object v2, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    if-eq v1, v2, :cond_4

    goto :goto_0

    :cond_4
    move-object v3, v0

    :goto_0
    if-eqz v3, :cond_5

    .line 408
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_5

    const/4 v0, 0x2

    .line 410
    sput v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadType:I

    return-object v3

    :cond_5
    const-string v0, ""

    return-object v0
.end method

.method public getUserPluginId()Ljava/lang/String;
    .locals 5

    .line 419
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 420
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 421
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 422
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 423
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update()I

    move-result v3

    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    .line 424
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 427
    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_2

    const-string v0, ""

    return-object v0

    .line 429
    :cond_2
    invoke-virtual {p0, v1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->sortPlugin(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    .line 430
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public loadHostConfig(Landroid/app/Activity;)V
    .locals 5

    .line 110
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getAllPlugin()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 112
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 114
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ymnsdk/replugin/entity/Plugin;

    .line 116
    new-instance v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    invoke-direct {v3, p1}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;-><init>(Landroid/app/Activity;)V

    .line 117
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v2

    new-instance v4, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;

    invoke-direct {v4, p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V

    invoke-virtual {v3, v2, v4}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public saveDownload(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;II)V
    .locals 1

    .line 550
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEnd()V

    .line 552
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalDownedPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    const/4 p2, 0x1

    if-ne p3, p2, :cond_1

    .line 555
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p3

    invoke-virtual {p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->gutMergePatchData()Ljava/util/Map;

    move-result-object p3

    .line 556
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 557
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/util/Map;)V

    goto :goto_0

    .line 559
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p3

    invoke-virtual {p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object p3

    .line 560
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 561
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/util/Map;)V

    .line 562
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p3

    invoke-virtual {p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object p3

    .line 563
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 564
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/util/Map;)V

    .line 566
    :goto_0
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->activity:Landroid/app/Activity;

    const/4 p3, 0x0

    add-int/2addr p4, p2

    invoke-virtual {p0, p1, p3, p4}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadOnePlugin(Landroid/app/Activity;ZI)V

    return-void
.end method

.method public sortPlugin(Ljava/util/List;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;"
        }
    .end annotation

    .line 524
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$5;

    invoke-direct {v0, p0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$5;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V

    invoke-static {p1, v0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    return-object p1
.end method

.method public startSilentDownload(Landroid/app/Activity;)V
    .locals 2

    .line 80
    sput-object p1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->activity:Landroid/app/Activity;

    .line 81
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$1;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Landroid/app/Activity;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 103
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V
    .locals 17

    move-object/from16 v8, p1

    move-object/from16 v10, p2

    move-object/from16 v11, p3

    move/from16 v12, p5

    move-object/from16 v13, p8

    .line 269
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static/range {p3 .. p3}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 270
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/StartSilentDownloadEvent;

    invoke-direct {v1, v10, v12}, Lcom/ymnsdk/replugin/event/silentdownload/StartSilentDownloadEvent;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 271
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    invoke-virtual {v0, v13}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resume(Ljava/lang/String;)Z

    .line 272
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0, v8, v13}, Lcom/ymnsdk/replugin/util/DownloadUtils;->addMd5(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {v8, v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->setMd5List(Ljava/util/List;)V

    .line 273
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0, v11, v8}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 274
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/DownloadOnePluginEvent;

    invoke-virtual/range {p1 .. p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v10, v11, v2}, Lcom/ymnsdk/replugin/event/silentdownload/DownloadOnePluginEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    if-nez v12, :cond_0

    .line 277
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;

    move/from16 v2, p11

    invoke-direct {v1, v10, v11, v2}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto :goto_0

    .line 279
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadEvent;

    invoke-direct {v1, v10, v11}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 281
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    move-object/from16 v14, p0

    iput-wide v0, v14, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    .line 282
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v15, 0x1

    .line 284
    new-instance v16, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p8

    move-wide/from16 v5, p6

    move/from16 v7, p5

    move-object/from16 v8, p1

    move/from16 v9, p12

    invoke-direct/range {v0 .. v9}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JILcom/ymnsdk/replugin/entity/PluginInfo;I)V

    move-object/from16 v0, p2

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move/from16 v3, p5

    move-wide/from16 v4, p6

    move-object/from16 v6, p8

    move/from16 v7, p9

    move/from16 v8, p10

    move v9, v15

    move-object/from16 v10, v16

    invoke-static/range {v0 .. v10}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadPatch(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V

    return-void
.end method
