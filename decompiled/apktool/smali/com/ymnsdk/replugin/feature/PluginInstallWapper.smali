.class public Lcom/ymnsdk/replugin/feature/PluginInstallWapper;
.super Ljava/lang/Object;
.source "PluginInstallWapper.java"


# static fields
.field private static wapper:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;


# instance fields
.field public beforeProcess:J

.field public downloadDur:J

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

.field public recoveryTime:J

.field public userPlugin:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 58
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->wapper:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    .line 64
    iput-wide v0, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->beforeProcess:J

    const-wide/16 v0, 0x0

    .line 65
    iput-wide v0, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    .line 66
    iput-wide v0, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    const-string v0, ""

    .line 67
    iput-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->userPlugin:Ljava/lang/String;

    .line 68
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 0

    .line 56
    invoke-direct/range {p0 .. p15}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPluginApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;Ljava/lang/String;JLjava/lang/String;IJJZLcom/ymnsdk/replugin/patch/download/DownloadFileInfo;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 0

    .line 56
    invoke-direct/range {p0 .. p15}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadFailToPost(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;Ljava/lang/String;JLjava/lang/String;IJJZLcom/ymnsdk/replugin/patch/download/DownloadFileInfo;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method private downloadFailToPost(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;Ljava/lang/String;JLjava/lang/String;IJJZLcom/ymnsdk/replugin/patch/download/DownloadFileInfo;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 16

    move-object/from16 v12, p2

    move-object/from16 v0, p4

    move-wide/from16 v5, p5

    move-object/from16 v13, p7

    .line 389
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 390
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getDownloadType()I

    move-result v1

    const-string v2, "|"

    if-nez v1, :cond_0

    .line 392
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v14

    new-instance v15, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkResponseEvent;

    const/16 v3, 0x3ee

    const/4 v7, -0x1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static/range {p3 .. p3}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v10, v0, p9

    const-string v4, ""

    move-object v0, v15

    move-object/from16 v1, p1

    move v2, v3

    move-object/from16 v3, p2

    move-wide/from16 v5, p5

    move/from16 v9, p8

    invoke-direct/range {v0 .. v11}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;JILjava/lang/String;IJ)V

    invoke-virtual {v14, v15}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 393
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v2, 0x415

    const/4 v3, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v4, v4, p11

    const-string v6, ""

    const-string v7, "\u4e0b\u8f7d\u5931\u8d25"

    move-object/from16 p3, v1

    move-object/from16 p4, p1

    move/from16 p5, v2

    move-object/from16 p6, p2

    move-object/from16 p7, v6

    move/from16 p8, v3

    move-object/from16 p9, v7

    move-wide/from16 p10, v4

    invoke-direct/range {p3 .. p11}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto/16 :goto_0

    .line 395
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v14

    new-instance v15, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchResponseEvent;

    const/16 v3, 0x3ee

    const/4 v7, -0x1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static/range {p3 .. p3}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v10, v0, p9

    const-string v4, ""

    move-object v0, v15

    move-object/from16 v1, p1

    move v2, v3

    move-object/from16 v3, p2

    move-wide/from16 v5, p5

    move/from16 v9, p8

    invoke-direct/range {v0 .. v11}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;JILjava/lang/String;IJ)V

    invoke-virtual {v14, v15}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 396
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    move-object/from16 v1, p14

    invoke-virtual {v0, v12, v13, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->clrarPatchResource(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    .line 397
    invoke-static {}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-result-object v0

    const/4 v1, 0x5

    const/16 v2, 0xf

    const/4 v3, 0x1

    move-object/from16 p3, v0

    move-object/from16 p4, p1

    move-object/from16 p5, p2

    move/from16 p6, v1

    move/from16 p7, v2

    move/from16 p8, p13

    move/from16 p9, v3

    move-object/from16 p10, p15

    invoke-virtual/range {p3 .. p10}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    :goto_0
    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;
    .locals 1

    .line 61
    sget-object v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->wapper:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    return-object v0
.end method

.method private installPluginApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 25

    move-object/from16 v12, p2

    move-object/from16 v13, p4

    move-object/from16 v10, p5

    move-wide/from16 v14, p7

    move-object/from16 v11, p9

    move-object/from16 v9, p15

    .line 335
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEnd()V

    .line 336
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v7

    new-instance v8, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u4e0b\u8f7d\u6210\u529f|"

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "|"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget v16, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v17, v0, p10

    const v2, 0x21f0c

    const/4 v3, 0x0

    const-string v19, ""

    const/16 v20, 0x0

    move-object v0, v8

    move-object/from16 v1, p2

    move-object/from16 v21, v5

    move-object/from16 v5, v19

    move-object/from16 v22, v6

    move/from16 v6, v16

    move-object/from16 v23, v7

    move-object/from16 v24, v8

    move-wide/from16 v7, v17

    move/from16 v9, v20

    invoke-direct/range {v0 .. v9}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    move-object/from16 v0, v23

    move-object/from16 v1, v24

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    if-eqz p6, :cond_0

    goto/16 :goto_0

    .line 340
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    move-object/from16 v1, p1

    invoke-virtual {v0, v13, v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalDownedPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 342
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 343
    invoke-interface {v0, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0, v13}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 344
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/util/Map;)V

    .line 345
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 346
    invoke-interface {v0, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0, v13}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 347
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/util/Map;)V

    .line 348
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v9

    new-instance v8, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkResponseEvent;

    const/16 v2, 0x3ed

    const/4 v7, 0x0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v1, v22

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v21

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v11, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v16, v0, p10

    const-string v4, ""

    move-object v0, v8

    move-object/from16 v1, p2

    move-object/from16 v3, p4

    move-wide/from16 v5, p7

    move-object v14, v8

    move-object v8, v10

    move-object v15, v9

    move v9, v11

    move-wide/from16 v10, v16

    invoke-direct/range {v0 .. v11}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;JILjava/lang/String;IJ)V

    invoke-virtual {v15, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :goto_0
    if-eqz p14, :cond_3

    .line 356
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;

    invoke-direct {v1, v12}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void

    .line 359
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/RepluginInstallRequestEvent;

    invoke-direct {v1, v12, v13}, Lcom/ymnsdk/replugin/event/installplugin/RepluginInstallRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 361
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getIsLog()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_4

    goto :goto_1

    :cond_4
    const/4 v1, 0x0

    :goto_1
    move-object/from16 v0, p3

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/RePlugin;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    .line 362
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v1

    if-eqz v0, :cond_6

    .line 365
    invoke-interface {v1, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "\u5bbf\u4e3b\u914d\u7f6e\u7684\u63d2\u4ef6\u4e2d\u4e0d\u5b58\u5728\u8be5pluginIc"

    move-object/from16 v2, p15

    .line 366
    invoke-interface {v2, v0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void

    :cond_5
    move-object/from16 v2, p15

    .line 369
    invoke-interface {v1, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 370
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v13, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 371
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v3, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v4, 0x21efd

    const/4 v5, 0x0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    const-string v7, "\u5b89\u88c5\u6210\u529f"

    move-object/from16 p5, v3

    move-object/from16 p6, p2

    move/from16 p7, v4

    move/from16 p8, v5

    move-object/from16 p9, v7

    move-object/from16 p10, v6

    invoke-direct/range {p5 .. p10}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 372
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v3, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v4, 0x414

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long v6, v6, p12

    const-string v8, "\u5b89\u88c5\u6210\u529f"

    move-object/from16 p5, v3

    move/from16 p7, v4

    move-object/from16 p8, p4

    move-object/from16 p9, v0

    move/from16 p10, v5

    move-object/from16 p11, v8

    move-wide/from16 p12, v6

    invoke-direct/range {p5 .. p13}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 374
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;

    const/16 v3, 0x414

    invoke-direct {v1, v12, v3, v13}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 375
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->deleteInstallPluginLog()V

    .line 376
    invoke-interface/range {p15 .. p15}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onSuccess()V

    goto :goto_2

    :cond_6
    move-object/from16 v2, p15

    .line 379
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v3, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v4, 0x21efd

    const/4 v5, -0x1

    invoke-interface {v1, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    const-string v7, "info\u4e3a\u7a7a\uff0c\u5b89\u88c5\u5931\u8d25"

    move-object/from16 p5, v3

    move-object/from16 p6, p2

    move/from16 p7, v4

    move/from16 p8, v5

    move-object/from16 p9, v7

    move-object/from16 p10, v6

    invoke-direct/range {p5 .. p10}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 380
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v3, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v4, 0x415

    invoke-interface {v1, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long v6, v6, p12

    const-string v8, "info\u4e3a\u7a7a\uff0c\u5b89\u88c5\u5931\u8d25"

    move-object/from16 p5, v3

    move/from16 p7, v4

    move-object/from16 p8, p4

    move-object/from16 p9, v1

    move/from16 p10, v5

    move-object/from16 p11, v8

    move-wide/from16 p12, v6

    invoke-direct/range {p5 .. p13}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 381
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;

    const/16 v3, 0x415

    invoke-direct {v1, v12, v3, v13}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string v0, "info\u4e3a\u7a7a\uff0c\u5b89\u88c5\u5931\u8d25"

    .line 382
    invoke-interface {v2, v0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    :goto_2
    return-void
.end method


# virtual methods
.method public installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 19

    move-object/from16 v10, p1

    move-object/from16 v14, p2

    move-object/from16 v15, p3

    move-object/from16 v11, p8

    move-wide/from16 v8, p14

    move-object/from16 v6, p18

    .line 155
    invoke-static/range {p3 .. p3}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v0

    invoke-static {v14, v0}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkDowningPlugin(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/Plugin;)V

    .line 156
    invoke-static {v14, v10}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkPatch(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 159
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/ResourceUtil;->urlOnSdCard4Public()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    move-object v1, v0

    .line 161
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    :goto_0
    if-eqz v0, :cond_0

    .line 164
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/util/ApkUtils;->isLocalApkExist()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 165
    invoke-static {v14, v15, v8, v9, v6}, Lcom/ymnsdk/replugin/util/ApkUtils;->installLocalApk(Landroid/app/Activity;Ljava/lang/String;JLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    goto/16 :goto_2

    .line 167
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0, v11}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 168
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    const-wide/high16 v2, 0x4004000000000000L    # 2.5

    move-wide/from16 v4, p9

    invoke-virtual {v1, v4, v5, v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMemory(JD)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v0, "\u5f53\u524d\u5269\u4f59\u5185\u5b58\u78c1\u76d8\u7a7a\u95f4\u4e0d\u8db3"

    .line 170
    invoke-interface {v6, v0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    .line 171
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v2, 0x21efd

    const/4 v3, -0x1

    const-string v4, "\u5f53\u524d\u5269\u4f59\u5185\u5b58\u78c1\u76d8\u7a7a\u95f4\u4e0d\u8db3"

    const-string v5, ""

    move-object/from16 p4, v1

    move-object/from16 p5, p2

    move/from16 p6, v2

    move/from16 p7, v3

    move-object/from16 p8, v4

    move-object/from16 p9, v5

    invoke-direct/range {p4 .. p9}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 172
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v2, 0x415

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v8

    const-string v6, ""

    const-string v7, "\u5f53\u524d\u5269\u4f59\u5185\u5b58\u78c1\u76d8\u7a7a\u95f4\u4e0d\u8db3"

    move-object/from16 p4, v1

    move/from16 p6, v2

    move-object/from16 p7, p3

    move-object/from16 p8, v6

    move/from16 p9, v3

    move-object/from16 p10, v7

    move-wide/from16 p11, v4

    invoke-direct/range {p4 .. p12}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void

    :cond_1
    if-nez p5, :cond_2

    .line 177
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v3, v10}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    move/from16 v4, p16

    invoke-direct {v2, v14, v15, v3, v4}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Z)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto :goto_1

    .line 179
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;

    const/16 v3, 0x417

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v4

    invoke-virtual {v4, v10}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v14, v3, v15, v4}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 181
    :goto_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    .line 183
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v1, v10, v11}, Lcom/ymnsdk/replugin/util/DownloadUtils;->addMd5(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-virtual {v10, v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->setMd5List(Ljava/util/List;)V

    .line 184
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v15, v10}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 186
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    move-object/from16 v7, p4

    invoke-virtual {v1, v11, v7, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 187
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    invoke-virtual {v0, v11}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resume(Ljava/lang/String;)Z

    .line 188
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    move-object/from16 v5, p0

    iput-wide v0, v5, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    const/4 v0, 0x0

    .line 190
    new-instance v18, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    move-object/from16 v1, v18

    move-object/from16 v2, p0

    move-object/from16 v3, p2

    move-object/from16 v4, p3

    move-object/from16 v5, p8

    move-wide/from16 v6, p6

    move-object/from16 v8, p11

    move/from16 v9, p5

    move-object/from16 v10, p1

    move-object/from16 v11, p4

    move-wide/from16 v14, p14

    move/from16 v16, p17

    move-object/from16 v17, p18

    invoke-direct/range {v1 .. v17}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;-><init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    move-object/from16 v3, p4

    move/from16 v4, p5

    move-wide/from16 v5, p6

    move-object/from16 v7, p8

    move/from16 v8, p12

    move/from16 v9, p13

    move v10, v0

    move-object/from16 v11, v18

    invoke-static/range {v1 .. v11}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadPatch(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V

    :goto_2
    return-void
.end method

.method public installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 11

    .line 71
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeing:Z

    if-eqz v0, :cond_0

    const-string v0, "\u6b63\u5728\u9759\u9ed8\u5408\u5305\u4e2d"

    move-object/from16 v5, p7

    .line 73
    invoke-interface {v5, v0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void

    :cond_0
    move-object/from16 v5, p7

    .line 76
    new-instance v0, Ljava/lang/Thread;

    new-instance v10, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;

    move-object v1, v10

    move-object v2, p0

    move-object v3, p2

    move-object v4, p1

    move/from16 v6, p6

    move v7, p3

    move v8, p4

    move/from16 v9, p5

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Ljava/lang/String;Landroid/app/Activity;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;ZIIZ)V

    invoke-direct {v0, v10}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 150
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method
