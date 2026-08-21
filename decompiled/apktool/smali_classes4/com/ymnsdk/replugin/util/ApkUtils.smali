.class public Lcom/ymnsdk/replugin/util/ApkUtils;
.super Ljava/lang/Object;
.source "ApkUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static copySDFileToAppFiles(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 37
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 38
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/16 v0, 0x400

    const/4 v1, 0x0

    .line 44
    :try_start_0
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, p1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 p1, 0x0

    .line 45
    :try_start_1
    invoke-virtual {p0, p2, p1}, Landroid/app/Activity;->openFileOutput(Ljava/lang/String;I)Ljava/io/FileOutputStream;

    move-result-object v1

    new-array p0, v0, [B

    .line 48
    :goto_0
    invoke-virtual {v2, p0}, Ljava/io/InputStream;->read([B)I

    move-result p2

    const/4 v0, -0x1

    if-eq p2, v0, :cond_1

    .line 49
    invoke-virtual {v1, p0, p1, p2}, Ljava/io/FileOutputStream;->write([BII)V

    goto :goto_0

    .line 51
    :cond_1
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->flush()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 56
    :try_start_2
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V

    .line 57
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object p1, v1

    move-object v1, v2

    goto :goto_3

    :catch_0
    move-exception p0

    move-object p1, v1

    move-object v1, v2

    goto :goto_1

    :catchall_1
    move-exception p0

    move-object p1, v1

    goto :goto_3

    :catch_1
    move-exception p0

    move-object p1, v1

    .line 53
    :goto_1
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 56
    :try_start_4
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    .line 57
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_2
    move-exception p0

    .line 59
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-void

    :catchall_2
    move-exception p0

    .line 56
    :goto_3
    :try_start_5
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    .line 57
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_4

    :catch_3
    move-exception p1

    .line 59
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 61
    :goto_4
    throw p0
.end method

.method public static getSDAvailableSize()J
    .locals 4

    .line 117
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    .line 118
    new-instance v1, Landroid/os/StatFs;

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    .line 119
    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockSize()I

    move-result v0

    int-to-long v2, v0

    .line 120
    invoke-virtual {v1}, Landroid/os/StatFs;->getAvailableBlocks()I

    move-result v0

    int-to-long v0, v0

    mul-long/2addr v2, v0

    return-wide v2
.end method

.method public static getSDTotailSize()J
    .locals 4

    .line 126
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    .line 127
    new-instance v1, Landroid/os/StatFs;

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    .line 128
    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockSize()I

    move-result v0

    int-to-long v2, v0

    .line 129
    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockCount()I

    move-result v0

    int-to-long v0, v0

    mul-long/2addr v2, v0

    return-wide v2
.end method

.method public static installLocalApk(Landroid/app/Activity;Ljava/lang/String;JLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 11

    .line 78
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "plugin.apk"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 79
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 80
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 81
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/FileUtils;->deleteQuietly(Ljava/io/File;)Z

    .line 86
    :cond_0
    invoke-static {p0, v1, v1}, Lcom/ymnsdk/replugin/util/ApkUtils;->copySDFileToAppFiles(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 88
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v1, 0x0

    .line 89
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/RePlugin;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v1

    :cond_1
    if-eqz v1, :cond_3

    .line 93
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v0

    .line 94
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string p0, "\u5b89\u88c5 \u627e\u4e0d\u5230\u8be5pluginId"

    .line 95
    invoke-interface {p4, p0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void

    .line 98
    :cond_2
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 101
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v3, 0x21efd

    const/4 v4, 0x0

    const-string v5, "\u672c\u5730\u5b89\u88c5\u6210\u529f"

    const-string v6, ""

    move-object v1, v7

    move-object v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 102
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v3, 0x414

    const/4 v6, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long v8, v1, p2

    const-string v5, ""

    const-string v7, "\u672c\u5730\u5b89\u88c5\u6210\u529f"

    move-object v1, v10

    move-object v2, p0

    move-object v4, p1

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 103
    invoke-interface {p4}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onSuccess()V

    goto :goto_0

    .line 105
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    const v3, 0x21efd

    const/4 v4, -0x1

    const-string v5, "info\u4e3a\u7a7a\uff0c\u672c\u5730\u5b89\u88c5\u5931\u8d25"

    const-string v6, ""

    move-object v1, v7

    move-object v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 106
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    const/16 v3, 0x415

    const/4 v6, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sub-long v8, v1, p2

    const-string v5, ""

    const-string v7, "info\u4e3a\u7a7a\uff0c\u672c\u5730\u5b89\u88c5\u5931\u8d25"

    move-object v1, v10

    move-object v2, p0

    move-object v4, p1

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string p0, "info\u4e3a\u7a7a\uff0c\u5b89\u88c5\u5931\u8d25"

    .line 107
    invoke-interface {p4, p0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static isLocalApkExist()Z
    .locals 2

    .line 66
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "plugin.apk"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 67
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 68
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
