.class public Lcom/ss/android/downloadlib/addownload/ux;
.super Ljava/lang/Object;


# direct methods
.method public static df(I)Z
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x2

    if-eq p0, v1, :cond_1

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_0
    return v0
.end method

.method public static df(Lcom/ss/android/download/api/download/DownloadModel;)Z
    .locals 1

    if-eqz p0, :cond_0

    .line 65
    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->getModelType()I

    move-result p0

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/model/pp;ZLcom/ss/android/socialbase/appdownloader/c;)I
    .locals 10

    if-eqz p2, :cond_7

    .line 79
    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->rg()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 86
    :cond_0
    :try_start_0
    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->rg()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/socialbase/appdownloader/c;Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 88
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v1

    const-string v2, "redirectSavePathIfPossible"

    invoke-interface {v1, v0, v2}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    const/4 v0, 0x4

    .line 92
    :goto_0
    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/appdownloader/c;->rg(I)V

    if-nez v0, :cond_1

    .line 96
    new-instance v0, Lcom/ss/android/downloadlib/q/rg;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/q/rg;-><init>()V

    .line 97
    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/appdownloader/c;

    .line 100
    :cond_1
    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->ey()Z

    move-result v0

    if-nez v0, :cond_2

    .line 102
    new-instance v0, Lcom/ss/android/downloadlib/q/df;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/q/df;-><init>()V

    .line 103
    invoke-virtual {p2, v0}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/appdownloader/c;

    .line 106
    :cond_2
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/c;)I

    move-result v0

    .line 108
    invoke-static {p0, v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;I)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v1

    .line 109
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 110
    invoke-virtual {v1, v0}, Lcom/ss/android/downloadad/api/rg/df;->fw(I)V

    .line 111
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/ss/android/downloadad/api/rg/df;->ux(J)V

    const-wide/16 v2, 0x0

    .line 112
    invoke-virtual {v1, v2, v3}, Lcom/ss/android/downloadad/api/rg/df;->rz(J)V

    .line 114
    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->vd()Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    .line 116
    invoke-static {p2, v1, v0}, Lcom/ss/android/downloadlib/addownload/ux;->rg(Lcom/ss/android/socialbase/appdownloader/c;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;I)Z

    move-result v2

    if-nez v2, :cond_6

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->isShowToast()Z

    move-result v2

    if-eqz v2, :cond_6

    .line 117
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getStartToast()Ljava/lang/String;

    move-result-object v2

    .line 118
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v2, "download_start_toast_text"

    .line 119
    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 121
    :cond_3
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    if-eqz p1, :cond_4

    const-string p1, "\u5df2\u5f00\u59cb\u4e0b\u8f7d\uff0c\u53ef\u5728\"\u6211\u7684\"\u91cc\u67e5\u770b\u7ba1\u7406"

    goto :goto_1

    :cond_4
    const-string p1, "\u5df2\u5f00\u59cb\u4e0b\u8f7d"

    :goto_1
    move-object v2, p1

    :cond_5
    move-object v7, v2

    .line 124
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->q()Lcom/ss/android/download/api/config/hq;

    move-result-object v3

    const/4 v4, 0x2

    .line 125
    invoke-virtual {p2}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    const/4 v8, 0x0

    const/4 v9, 0x0

    .line 124
    invoke-interface/range {v3 .. v9}, Lcom/ss/android/download/api/config/hq;->rg(ILandroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Ljava/lang/String;Landroid/graphics/drawable/Drawable;I)V

    :cond_6
    return v0

    :cond_7
    :goto_2
    const/4 p0, 0x0

    return p0
.end method

.method private static rg(Lcom/ss/android/socialbase/appdownloader/c;Ljava/lang/String;)I
    .locals 5

    .line 235
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->vd()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "download_dir"

    .line 236
    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_9

    const-string v2, "dir_name"

    .line 237
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_1

    .line 241
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->df()Ljava/lang/String;

    move-result-object v1

    .line 242
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->cd()Ljava/lang/String;

    move-result-object v2

    .line 243
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 244
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->hq()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-static {p1, v1, v2, v3}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v2

    .line 246
    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/16 v4, 0xff

    if-le v3, v4, :cond_2

    .line 247
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    sub-int/2addr v3, v4

    invoke-virtual {v2, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    .line 249
    :cond_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    move-object v1, v2

    .line 254
    :cond_3
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->q()Ljava/lang/String;

    move-result-object v3

    .line 255
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 256
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/q;->df()Ljava/lang/String;

    move-result-object v3

    .line 259
    :cond_4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v1, v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 262
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v3

    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v3, v4, p1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 263
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSavePathRedirected()Z

    move-result v3

    if-eqz v3, :cond_5

    const/4 v0, 0x0

    .line 267
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getSavePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/appdownloader/c;->q(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    .line 270
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadSettingString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/appdownloader/c;->rg(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/appdownloader/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_5
    if-nez p1, :cond_6

    .line 273
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v3

    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c;->hq()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "application/vnd.android.package-archive"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 277
    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)I

    move-result v0

    if-nez v0, :cond_8

    .line 279
    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/appdownloader/c;->q(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/c;

    goto :goto_0

    :cond_6
    if-eqz p1, :cond_7

    const/16 v0, 0x8

    goto :goto_0

    :cond_7
    const/16 v0, 0x9

    :catchall_0
    :cond_8
    :goto_0
    return v0

    :cond_9
    :goto_1
    const/4 p0, -0x1

    return p0
.end method

.method private static rg(Lcom/ss/android/downloadlib/addownload/model/pp;I)Lcom/ss/android/downloadad/api/rg/df;
    .locals 4

    .line 133
    new-instance v0, Lcom/ss/android/downloadad/api/rg/df;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-direct {v0, v1, v2, v3, p1}, Lcom/ss/android/downloadad/api/rg/df;-><init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;I)V

    .line 134
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const/4 v1, 0x1

    const-string v2, "download_event_opt"

    invoke-virtual {p1, v2, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-le p1, v1, :cond_1

    .line 136
    :try_start_0
    iget-object p0, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object p0

    .line 137
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 138
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    const/4 v2, 0x0

    invoke-virtual {p1, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    .line 139
    :goto_0
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->ux(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-object v0
.end method

.method public static rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 212
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getExtra()Ljava/lang/String;

    move-result-object p0

    .line 213
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 214
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "notification_jump_url"

    .line 215
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 218
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method public static rg(I)Z
    .locals 1

    const/4 v0, 0x1

    if-eqz p0, :cond_1

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_0
    return v0
.end method

.method public static rg(Lcom/ss/android/download/api/download/DownloadModel;)Z
    .locals 2

    .line 58
    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    instance-of v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v0, :cond_0

    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->getModelType()I

    move-result p0

    if-ne p0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public static rg(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z
    .locals 0

    .line 72
    invoke-interface {p0}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result p0

    if-eqz p0, :cond_0

    if-eqz p1, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static rg(Lcom/ss/android/socialbase/appdownloader/c;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;I)Z
    .locals 11

    const-string p0, "ah_plans"

    .line 153
    invoke-virtual {p1, p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p0, :cond_6

    .line 154
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_5

    .line 157
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    const/4 v2, 0x0

    move v3, v0

    move-object v4, v2

    :goto_0
    const/4 v5, 0x1

    if-ge v3, v1, :cond_4

    .line 160
    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v6

    if-eqz v6, :cond_3

    const-string v7, "type"

    .line 162
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "plan_c"

    if-eq v7, v8, :cond_1

    .line 164
    invoke-static {v6}, Lcom/ss/android/socialbase/appdownloader/c/rg;->rg(Lorg/json/JSONObject;)Z

    move-result v9

    if-nez v9, :cond_1

    goto/16 :goto_2

    :cond_1
    const/4 v9, -0x1

    .line 168
    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v10

    packed-switch v10, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    const-string v8, "plan_h"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x5

    goto :goto_1

    :pswitch_1
    const-string v8, "plan_g"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x6

    goto :goto_1

    :pswitch_2
    const-string v8, "plan_f"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x3

    goto :goto_1

    :pswitch_3
    const-string v8, "plan_e"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x2

    goto :goto_1

    :pswitch_4
    const-string v8, "plan_d"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x4

    goto :goto_1

    :pswitch_5
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v9, 0x7

    goto :goto_1

    :pswitch_6
    const-string v8, "plan_b"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    move v9, v5

    goto :goto_1

    :pswitch_7
    const-string v8, "plan_a"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    move v9, v0

    :cond_2
    :goto_1
    packed-switch v9, :pswitch_data_1

    goto :goto_2

    :pswitch_8
    move-object v4, v6

    goto :goto_2

    .line 182
    :pswitch_9
    invoke-static {v6, p1}, Lcom/ss/android/socialbase/appdownloader/df;->df(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object v6

    .line 183
    iget v6, v6, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-nez v6, :cond_3

    goto :goto_3

    .line 173
    :pswitch_a
    invoke-static {v6, p1}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Lorg/json/JSONObject;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;)Lcom/ss/android/socialbase/appdownloader/rg;

    move-result-object v6

    .line 174
    iget v6, v6, Lcom/ss/android/socialbase/appdownloader/rg;->df:I

    if-nez v6, :cond_3

    goto :goto_3

    :cond_3
    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_4
    :goto_3
    :pswitch_b
    if-eqz v4, :cond_6

    const-string p0, "show_unknown_source_on_startup"

    .line 194
    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    if-ne p0, v5, :cond_5

    goto :goto_4

    :cond_5
    move v5, v0

    :goto_4
    if-eqz v5, :cond_6

    .line 196
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p0

    new-instance p1, Lcom/ss/android/socialbase/appdownloader/rg;

    invoke-direct {p1}, Lcom/ss/android/socialbase/appdownloader/rg;-><init>()V

    invoke-static {p0, v2, v4, p2, p1}, Lcom/ss/android/socialbase/appdownloader/df;->rg(Landroid/content/Context;Landroid/content/Intent;Lorg/json/JSONObject;ILcom/ss/android/socialbase/appdownloader/rg;)Z

    move-result p0

    return p0

    :cond_6
    :goto_5
    return v0

    :pswitch_data_0
    .packed-switch -0x3ac18f35
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x0
        :pswitch_a
        :pswitch_a
        :pswitch_a
        :pswitch_a
        :pswitch_b
        :pswitch_b
        :pswitch_9
        :pswitch_8
    .end packed-switch
.end method
