.class public Lcom/bykv/vk/openvk/live/rg;
.super Ljava/lang/Object;


# static fields
.field private static rg:Landroid/content/SharedPreferences;


# direct methods
.method public static df(J)V
    .locals 4

    .line 166
    sget-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 167
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "csj_live"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    .line 170
    :cond_0
    :try_start_0
    sget-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_1

    .line 171
    sget-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 172
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "live_init_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 173
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 176
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static pt(J)V
    .locals 1

    :try_start_0
    const-string v0, "com.byted.live.lite"

    .line 198
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->unInstallPlugin(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 200
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 202
    :goto_0
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/live/rg;->df(J)V

    return-void
.end method

.method public static q(J)Z
    .locals 4

    .line 187
    sget-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 188
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "csj_live"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    .line 190
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "live_init_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    goto :goto_0

    :cond_1
    move p0, v1

    :goto_0
    const/4 p1, 0x5

    if-ge p0, p1, :cond_2

    const/4 v1, 0x1

    :cond_2
    return v1
.end method

.method public static rg(Lcom/bykv/vk/openvk/api/plugin/c;Ljava/lang/String;)Landroid/os/Bundle;
    .locals 1

    .line 42
    new-instance p0, Landroid/os/Bundle;

    invoke-direct {p0}, Landroid/os/Bundle;-><init>()V

    const-string v0, "app_id"

    .line 43
    invoke-virtual {p0, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "com.byted.live.lite"

    .line 44
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 45
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "0.0.0.0"

    :cond_0
    const-string v0, "plugin_version"

    invoke-virtual {p0, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/bykv/vk/openvk/live/rg;->rg(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "sdk_version"

    invoke-virtual {p0, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method public static rg(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 74
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 75
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x80

    .line 76
    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    if-nez p0, :cond_0

    return-object v0

    .line 80
    :cond_0
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "ZEUS_PLUGIN_LIVE"

    .line 81
    invoke-virtual {p0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 82
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    .line 85
    :cond_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "apiVersionCode"

    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 86
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 88
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v0
.end method

.method public static rg(J)V
    .locals 4

    const-string v0, "live_init_"

    .line 150
    sget-object v1, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 151
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "csj_live"

    invoke-virtual {v1, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    sput-object v1, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    .line 154
    :cond_0
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_1

    .line 155
    sget-object v1, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    .line 156
    sget-object v2, Lcom/bykv/vk/openvk/live/rg;->rg:Landroid/content/SharedPreferences;

    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 157
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    add-int/lit8 v1, v1, 0x1

    invoke-interface {v2, p0, v1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 158
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 161
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;Lcom/bykv/vk/openvk/TTPluginListener;)V
    .locals 1

    .line 52
    new-instance v0, Lcom/bykv/vk/openvk/live/rg$1;

    invoke-direct {v0, p2, p1}, Lcom/bykv/vk/openvk/live/rg$1;-><init>(Lcom/bykv/vk/openvk/TTPluginListener;Landroid/os/Bundle;)V

    invoke-virtual {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bykv/vk/openvk/TTPluginListener;)V

    return-void
.end method

.method public static rg()Z
    .locals 2

    .line 113
    :try_start_0
    invoke-static {}, Lcom/bykv/vk/openvk/df/rg;->rg()Lcom/bykv/vk/openvk/df/rg;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/live/rg$3;

    invoke-direct {v1}, Lcom/bykv/vk/openvk/live/rg$3;-><init>()V

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/df/rg;->rg(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v0

    .line 126
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method

.method public static rg(Landroid/content/Context;Landroid/os/Bundle;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    if-eqz p1, :cond_2

    const-string v1, "room_id"

    .line 132
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    .line 135
    :cond_0
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v1

    .line 137
    :try_start_0
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->getLiveRoomService()Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    move-result-object v3

    check-cast v3, Lcom/bytedance/android/live/base/api/IOuterLiveService;

    if-eqz v3, :cond_1

    .line 139
    invoke-interface {v3, p0, v1, v2, p1}, Lcom/bytedance/android/live/base/api/IOuterLiveService;->enterLiveRoom(Landroid/content/Context;JLandroid/os/Bundle;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0

    :catchall_0
    move-exception p0

    .line 144
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_0
    return v0
.end method

.method public static rg(Landroid/content/Context;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)Z
    .locals 2

    .line 94
    :try_start_0
    invoke-static {}, Lcom/bykv/vk/openvk/df/rg;->rg()Lcom/bykv/vk/openvk/df/rg;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/live/rg$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/bykv/vk/openvk/live/rg$2;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/df/rg;->rg(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    .line 106
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method
