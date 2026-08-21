.class public Lcom/ss/android/downloadlib/utils/pt;
.super Ljava/lang/Object;


# direct methods
.method public static c(I)Z
    .locals 2

    .line 224
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const/4 v0, 0x0

    const-string v1, "clean_space_switch"

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    move v0, v1

    :cond_0
    return v0
.end method

.method public static df(I)J
    .locals 3

    .line 187
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string v0, "storage_min_size"

    const-wide/16 v1, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public static df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 0

    .line 43
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/download/api/download/DownloadModel;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0
.end method

.method public static df()Z
    .locals 2

    .line 256
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "fix_notification_anr"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static df(Lcom/ss/android/downloadad/api/rg/rg;)Z
    .locals 3

    .line 168
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "pause_reserve_on_wifi"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 169
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->z()Z

    move-result p0

    if-eqz p0, :cond_0

    move v1, v2

    :cond_0
    return v1
.end method

.method public static df(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    const-string v1, "kllk_need_rename_apk"

    .line 243
    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    return v1

    :cond_0
    return v0
.end method

.method public static fw(I)Z
    .locals 2

    .line 233
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const/4 v0, 0x0

    const-string v1, "clean_app_cache_dir"

    invoke-virtual {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    move v0, v1

    :cond_0
    return v0
.end method

.method public static pp()J
    .locals 4

    .line 282
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "next_install_min_interval"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    const-wide/16 v0, 0x2710

    :cond_0
    return-wide v0
.end method

.method public static pp(I)Z
    .locals 4

    .line 215
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string v0, "clean_space_before_download_switch"

    const-wide/16 v1, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    const-wide/16 v2, 0x1

    cmp-long p0, v0, v2

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static pt()J
    .locals 4

    .line 274
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "start_install_interval"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    const-wide/32 v0, 0x493e0

    :cond_0
    return-wide v0
.end method

.method public static pt(I)Z
    .locals 4

    .line 206
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string v0, "clean_fetch_apk_switch"

    const-wide/16 v1, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    const-wide/16 v2, 0x1

    cmp-long p0, v0, v2

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static q(Lcom/ss/android/download/api/download/DownloadModel;)I
    .locals 0

    .line 162
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->df(Lcom/ss/android/download/api/download/DownloadModel;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    .line 163
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)I

    move-result p0

    return p0
.end method

.method public static q(I)J
    .locals 3

    .line 197
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string v0, "clean_fetch_apk_head_time_out"

    const-wide/16 v1, 0x320

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public static q()Z
    .locals 2

    .line 266
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "is_enable_start_install_again"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static rg(I)D
    .locals 3

    .line 178
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    const-string v0, "clean_min_install_size"

    const-wide/16 v1, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    return-wide v0
.end method

.method public static rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)I
    .locals 2

    const-string v0, "external_storage_permission_path_type"

    const/4 v1, 0x0

    .line 158
    invoke-virtual {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    if-nez p0, :cond_0

    .line 49
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0

    .line 51
    :cond_0
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->qx()I

    move-result v0

    if-eqz v0, :cond_1

    .line 52
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->qx()I

    move-result p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0

    .line 54
    :cond_1
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->q()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 55
    invoke-static {}, Lcom/ss/android/downloadlib/utils/pt;->rg()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0

    .line 57
    :cond_2
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->r()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 58
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->r()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0

    .line 60
    :cond_3
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0
.end method

.method public static rg()Lorg/json/JSONObject;
    .locals 2

    .line 27
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "ad"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method public static rg(Lcom/ss/android/download/api/download/DownloadModel;)Lorg/json/JSONObject;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 34
    :cond_0
    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 35
    invoke-static {}, Lcom/ss/android/downloadlib/utils/pt;->rg()Lorg/json/JSONObject;

    move-result-object p0

    return-object p0

    .line 37
    :cond_1
    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadSettings()Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method
