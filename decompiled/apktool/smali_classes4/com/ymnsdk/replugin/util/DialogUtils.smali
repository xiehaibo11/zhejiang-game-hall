.class public Lcom/ymnsdk/replugin/util/DialogUtils;
.super Ljava/lang/Object;
.source "DialogUtils.java"


# static fields
.field private static volatile dialogUtils:Lcom/ymnsdk/replugin/util/DialogUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/util/DialogUtils;
    .locals 2

    .line 39
    sget-object v0, Lcom/ymnsdk/replugin/util/DialogUtils;->dialogUtils:Lcom/ymnsdk/replugin/util/DialogUtils;

    if-nez v0, :cond_1

    .line 40
    const-class v0, Lcom/ymnsdk/replugin/util/DialogUtils;

    monitor-enter v0

    .line 41
    :try_start_0
    sget-object v1, Lcom/ymnsdk/replugin/util/DialogUtils;->dialogUtils:Lcom/ymnsdk/replugin/util/DialogUtils;

    if-nez v1, :cond_0

    .line 42
    new-instance v1, Lcom/ymnsdk/replugin/util/DialogUtils;

    invoke-direct {v1}, Lcom/ymnsdk/replugin/util/DialogUtils;-><init>()V

    sput-object v1, Lcom/ymnsdk/replugin/util/DialogUtils;->dialogUtils:Lcom/ymnsdk/replugin/util/DialogUtils;

    .line 44
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 46
    :cond_1
    :goto_0
    sget-object v0, Lcom/ymnsdk/replugin/util/DialogUtils;->dialogUtils:Lcom/ymnsdk/replugin/util/DialogUtils;

    return-object v0
.end method


# virtual methods
.method public getDownloadRemain(Ljava/lang/String;Ljava/lang/String;)J
    .locals 5

    .line 282
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v0

    .line 283
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-wide/16 p1, 0x0

    return-wide p1

    .line 284
    :cond_0
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 287
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v2

    .line 288
    invoke-interface {v2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 289
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-static {p1, v0, p2}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object p2

    .line 290
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->hasOldApk(Ljava/lang/String;)Z

    move-result p1

    if-eqz p2, :cond_1

    if-eqz p1, :cond_1

    .line 293
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_size()J

    move-result-wide v0

    .line 294
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p1

    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 295
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/util/DialogUtils;->getFileSize(Ljava/lang/String;)J

    move-result-wide p1

    goto :goto_1

    .line 297
    :cond_1
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide p1

    .line 298
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 299
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DialogUtils;->getFileSize(Ljava/lang/String;)J

    move-result-wide v0

    goto :goto_0

    .line 302
    :cond_2
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide p1

    .line 303
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 304
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/DialogUtils;->getFileSize(Ljava/lang/String;)J

    move-result-wide v0

    :goto_0
    move-wide v3, p1

    move-wide p1, v0

    move-wide v0, v3

    :goto_1
    sub-long/2addr v0, p1

    const-wide/16 p1, 0x400

    .line 306
    div-long/2addr v0, p1

    div-long/2addr v0, p1

    const-wide/16 p1, 0x1

    cmp-long v2, v0, p1

    if-gez v2, :cond_3

    move-wide v0, p1

    :cond_3
    return-wide v0
.end method

.method public getFileSize(Ljava/lang/String;)J
    .locals 3

    const-wide/16 v0, 0x0

    .line 315
    :try_start_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 317
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 319
    new-instance p1, Ljava/io/FileInputStream;

    invoke-direct {p1, v2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 320
    invoke-virtual {p1}, Ljava/io/FileInputStream;->available()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    int-to-long v0, p1

    :cond_0
    return-wide v0

    :catch_0
    move-exception p1

    .line 325
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-wide v0
.end method

.method public getUpdateBtnTitle(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 0

    if-eqz p2, :cond_0

    const-string p1, "\u5b89\u88c5"

    return-object p1

    .line 230
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object p2

    .line 231
    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "\u66f4\u65b0"

    return-object p1

    :cond_1
    const-string p1, "\u4e0b\u8f7d"

    return-object p1
.end method

.method public getUpdateContent(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 1

    if-eqz p3, :cond_0

    const-string p1, "\u8d44\u6e90\u4e0b\u8f7d\u5b8c\u6210\uff0c\u7acb\u5373\u5b89\u88c5\uff08\u4e0d\u8017\u8d39\u6d41\u91cf\uff09"

    return-object p1

    .line 215
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/ymnsdk/replugin/util/DialogUtils;->getDownloadRemain(Ljava/lang/String;Ljava/lang/String;)J

    move-result-wide p2

    .line 216
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v0

    .line 217
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 218
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u53d1\u73b0\u65b0\u7248\u672c"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p2, "MB\uff0c\u7acb\u5373\u66f4\u65b0"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 220
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u5373\u5c06\u5f00\u59cb\u4e0b\u8f7d\uff0c"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p2, "MB"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getUpdateTitle(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 0

    if-eqz p2, :cond_0

    const-string p1, "\u6e38\u620f\u5b89\u88c5\u63d0\u793a"

    return-object p1

    .line 201
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object p2

    .line 202
    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "\u6e38\u620f\u66f4\u65b0\u63d0\u793a"

    return-object p1

    :cond_1
    const-string p1, "\u6e38\u620f\u4e0b\u8f7d\u63d0\u793a"

    return-object p1
.end method

.method public isDownloadComplete(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    .line 240
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v0

    .line 241
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 242
    :cond_0
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    if-nez v1, :cond_1

    return v2

    .line 244
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v3

    if-nez v3, :cond_2

    return v2

    .line 246
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "old.apk"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 247
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v3, v5}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_3

    return v4

    .line 251
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v3

    .line 252
    invoke-interface {v3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 253
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-static {p1, v0, p2}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 256
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p2

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 257
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p2, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    return v4

    .line 262
    :cond_4
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 263
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p2

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    return v4

    .line 269
    :cond_5
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 270
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object p2

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    return v4

    :cond_6
    return v2
.end method

.method public showErrorDialog(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 180
    invoke-static {p2}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getIsShowErrorDialog(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 182
    new-instance v0, Lcom/ymnsdk/replugin/util/DialogUtils$4;

    invoke-direct {v0, p0, p1, p2}, Lcom/ymnsdk/replugin/util/DialogUtils$4;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public showMaintainDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 0

    .line 51
    new-instance p2, Lcom/ymnsdk/replugin/util/DialogUtils$1;

    invoke-direct {p2, p0, p1, p3, p4}, Lcom/ymnsdk/replugin/util/DialogUtils$1;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    invoke-virtual {p1, p2}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showStartDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 7

    .line 137
    new-instance v6, Lcom/ymnsdk/replugin/util/DialogUtils$3;

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/ymnsdk/replugin/util/DialogUtils$3;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    invoke-virtual {p1, v6}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showUpdateDialog(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 11

    move-object v9, p0

    move-object v3, p2

    move-object/from16 v5, p5

    .line 65
    invoke-virtual {p0, p2, v5}, Lcom/ymnsdk/replugin/util/DialogUtils;->isDownloadComplete(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v4

    .line 66
    new-instance v10, Lcom/ymnsdk/replugin/util/DialogUtils$2;

    move-object v0, v10

    move-object v1, p0

    move-object v2, p1

    move-object/from16 v6, p6

    move-object v7, p3

    move v8, p4

    invoke-direct/range {v0 .. v8}, Lcom/ymnsdk/replugin/util/DialogUtils$2;-><init>(Lcom/ymnsdk/replugin/util/DialogUtils;Landroid/app/Activity;Ljava/lang/String;ZLjava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;I)V

    move-object v0, p1

    invoke-virtual {p1, v10}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
