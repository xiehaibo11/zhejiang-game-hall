.class public Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;
.super Ljava/lang/Object;
.source "SharedPreferencesUtils.java"


# static fields
.field private static final ANDROID_ID:Ljava/lang/String; = "replugin_android_id"

.field private static final CP_SID:Ljava/lang/String; = "replugin_cp_sid"

.field private static final DOWNLOADED_PLUGIN_LIST:Ljava/lang/String; = "replugin_downloaded_plugin_list"

.field private static final DOWNLOAD_FILEDATA:Ljava/lang/String; = "replugin_download_file_data"

.field private static final HOST_APP_ID:Ljava/lang/String; = "replugin_host_app_id"

.field private static final HOST_APP_INFO:Ljava/lang/String; = "replugin_host_app_info"

.field private static final IS_LOG:Ljava/lang/String; = "replugin_is_log"

.field private static final LOCAL_PLUGIN:Ljava/lang/String; = "local_plugin"

.field private static final MERGE_PATCH_DATA:Ljava/lang/String; = "replugin_merge_patch_data"

.field private static final PLUGIN_GRAY:Ljava/lang/String; = "replugin_plugin_gray"

.field private static final PLUGIN_ID:Ljava/lang/String; = "replugin_plugin_id"

.field private static final PLUGIN_INFO_DETAIL:Ljava/lang/String; = "plugin_info_detail"

.field private static final PLUGIN_LIST:Ljava/lang/String; = "plugin_list"

.field private static final REPLUGIN_TRACE:Ljava/lang/String; = "replugin_trace"

.field private static final SLIENT_DOWNLOADING_PLUGIN_LIST:Ljava/lang/String; = "replugin_slient_downloading_plugin_list"

.field private static final UPDATE_SERVER_ADDRESS:Ljava/lang/String; = "update_server_address"

.field private static final USER_DOWNLOADING_PLUGIN_LIST:Ljava/lang/String; = "replugin_user_downloading_plugin_list"

.field private static final USER_ID:Ljava/lang/String; = "replugin_user_id"

.field private static volatile preferencesUtils:Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAndroidId()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_android_id"

    .line 136
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_host_app_id"

    .line 151
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getAppInfo()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_host_app_info"

    .line 166
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getCpSid()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_cp_sid"

    .line 287
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDownloadFiledata()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_download_file_data"

    .line 226
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDownloadedPluginInfoList()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_downloaded_plugin_list"

    .line 211
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;
    .locals 2

    .line 35
    sget-object v0, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->preferencesUtils:Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    if-nez v0, :cond_1

    .line 36
    const-class v0, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    monitor-enter v0

    .line 37
    :try_start_0
    sget-object v1, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->preferencesUtils:Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    if-nez v1, :cond_0

    .line 38
    new-instance v1, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-direct {v1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;-><init>()V

    sput-object v1, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->preferencesUtils:Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    .line 40
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 42
    :cond_1
    :goto_0
    sget-object v0, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->preferencesUtils:Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    return-object v0
.end method

.method public static getIsLog()I
    .locals 1

    const-string v0, "replugin_is_log"

    .line 317
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static getLocalPlugin()Ljava/lang/String;
    .locals 1

    const-string v0, "local_plugin"

    .line 90
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getLocalPluginInfoDetail()Ljava/lang/String;
    .locals 1

    const-string v0, "plugin_info_detail"

    .line 106
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getMergePatchData()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_merge_patch_data"

    .line 241
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPluginData()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_plugin_gray"

    .line 257
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_plugin_id"

    .line 302
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPluginList()Ljava/lang/String;
    .locals 1

    const-string v0, "plugin_list"

    .line 58
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getRepluginTrace()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_trace"

    .line 121
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getSilentDownloadingPluginInfoList()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_slient_downloading_plugin_list"

    .line 196
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUpdateServerAddress()Ljava/lang/String;
    .locals 1

    const-string v0, "update_server_address"

    .line 74
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUserDownloadingPluginInfoList()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_user_downloading_plugin_list"

    .line 181
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUserId()Ljava/lang/String;
    .locals 1

    const-string v0, "replugin_user_id"

    .line 272
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static setAndroidId(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_android_id"

    .line 127
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 130
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_host_app_id"

    .line 142
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 145
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setAppInfo(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_host_app_info"

    .line 157
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 160
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setCpSid(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_cp_sid"

    .line 278
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 281
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setDownloadFiledata(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_download_file_data"

    .line 217
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 220
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setDownloadedPluginInfoList(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_downloaded_plugin_list"

    .line 202
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 205
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setIsLog(I)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_is_log"

    .line 308
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 311
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setLocalPlugin(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "local_plugin"

    .line 81
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 84
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setLocalPluginInfoDetail(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "plugin_info_detail"

    .line 97
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 100
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setMergePatchData(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_merge_patch_data"

    .line 232
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 235
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPluginData(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_plugin_gray"

    .line 248
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 251
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPluginId(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_plugin_id"

    .line 293
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 296
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setPluginList(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "plugin_list"

    .line 49
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 52
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setRepluginTrace(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_trace"

    .line 112
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 115
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setSilentDownloadingPluginInfoList(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_slient_downloading_plugin_list"

    .line 187
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 190
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setUpdateServerAddress(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "update_server_address"

    .line 65
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 68
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setUserDownloadingPluginInfoList(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_user_downloading_plugin_list"

    .line 172
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 175
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static setUserId(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "replugin_user_id"

    .line 263
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 266
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
