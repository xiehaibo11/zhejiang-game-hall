.class public Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;
.super Ljava/lang/Object;
.source "PatchDownloadApi.java"


# static fields
.field private static downloadApi:Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadApi:Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static clearCache(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V
    .locals 3

    .line 40
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 41
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsDownloadRecovery(Z)V

    .line 42
    invoke-static {}, Lcom/ymnsdk/replugin/util/FileUtils;->getInstance()Lcom/ymnsdk/replugin/util/FileUtils;

    move-result-object v0

    const-string v1, "temp.patch"

    invoke-virtual {v0, p0, p1, v1}, Lcom/ymnsdk/replugin/util/FileUtils;->getPluginFile(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    .line 43
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    .line 44
    :cond_0
    invoke-interface {p2}, Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;->clearSuccess()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 47
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 48
    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {p2, p0}, Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;->clearFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static downloadPatch(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V
    .locals 16

    move-object/from16 v11, p1

    move-object/from16 v12, p6

    move-object/from16 v13, p10

    .line 56
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsNoNetTimeout(Z)V

    .line 58
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getLoadState()Z

    move-result v0

    if-nez v0, :cond_3

    .line 59
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 66
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move/from16 v4, p3

    move-wide/from16 v5, p4

    move-object/from16 v7, p6

    move/from16 v8, p7

    move/from16 v9, p8

    move-object/from16 v10, p10

    invoke-virtual/range {v0 .. v10}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->init(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V

    .line 67
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual/range {p0 .. p0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->setWriteablePath(Ljava/lang/String;)V

    .line 68
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "old.apk"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 69
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v1, v0, v12}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    const-wide/16 v2, 0x64

    if-eqz v1, :cond_0

    .line 71
    invoke-interface {v13, v2, v3}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloading(J)V

    .line 72
    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadSuccess(Ljava/lang/String;)V

    return-void

    .line 76
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0, v12}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 77
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v1, v0, v12}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 79
    invoke-interface {v13, v2, v3}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloading(J)V

    .line 80
    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadSuccess(Ljava/lang/String;)V

    return-void

    .line 84
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_2

    .line 85
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v3, 0x21f0b

    const/4 v4, 0x0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v8, p2

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v5, p3

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v9, p4

    invoke-virtual {v1, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v5, "\u4e0b\u8f7d\u5f00\u59cb"

    move-object v1, v7

    move-object/from16 v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    goto :goto_0

    :cond_2
    move-object/from16 v8, p2

    move-wide/from16 v9, p4

    .line 89
    :goto_0
    new-instance v14, Ljava/lang/Thread;

    new-instance v15, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;

    move-object v0, v15

    move-object/from16 v1, p10

    move-object/from16 v2, p6

    move-object/from16 v3, p2

    move-object/from16 v4, p0

    move-object/from16 v5, p1

    move-wide/from16 v6, p4

    move/from16 v8, p9

    invoke-direct/range {v0 .. v8}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$1;-><init>(Lcom/ymnsdk/replugin/patch/download/DownloadCallback;Ljava/lang/String;Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;JI)V

    invoke-direct {v14, v15}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 117
    invoke-virtual {v14}, Ljava/lang/Thread;->start()V

    return-void

    .line 63
    :cond_3
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadCallback;->downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    return-void
.end method

.method public static downloadRecovery(Lcom/ymnsdk/replugin/entity/DownloadEntity;I)V
    .locals 4

    .line 122
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isIsDownloadRecovery()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "ymn"

    const-string p1, "downloadRecovery isIsDownloadRecovery"

    .line 124
    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 127
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsDownloadRecovery(Z)V

    .line 128
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 129
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    .line 130
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/RecoveryDownloadingEvent;

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getPluginId()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/ymnsdk/replugin/event/silentdownload/RecoveryDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 132
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 133
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getValid()Z

    move-result v0

    if-nez v0, :cond_2

    .line 135
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 136
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getDownloadUri()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 137
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->resume(Ljava/lang/String;)Z

    .line 138
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi$2;-><init>(Lcom/ymnsdk/replugin/entity/DownloadEntity;I)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 150
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    :cond_2
    return-void
.end method

.method public static downloadStop()V
    .locals 8

    .line 156
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsDownloadRecovery(Z)V

    .line 157
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->getInstance()Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;->pause()V

    .line 158
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 159
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getActivity()Landroid/app/Activity;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 160
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-wide v2, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v6

    iget-wide v6, v6, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    sub-long/2addr v4, v6

    add-long/2addr v2, v4

    iput-wide v2, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 161
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/silentdownload/StopDownloadingEvent;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getActivity()Landroid/app/Activity;

    move-result-object v3

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getPluginId()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Lcom/ymnsdk/replugin/event/silentdownload/StopDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :cond_0
    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;
    .locals 1

    .line 32
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadApi:Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;

    return-object v0
.end method
