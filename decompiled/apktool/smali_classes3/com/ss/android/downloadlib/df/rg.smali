.class public Lcom/ss/android/downloadlib/df/rg;
.super Ljava/lang/Object;


# direct methods
.method public static df(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 7

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 152
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v1

    const-string v2, "app_link_opt"

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 153
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->c()Ljava/lang/String;

    move-result-object v0

    .line 155
    :cond_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {v1, p0}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v3, "applink_source"

    const-string v4, "dialog_click_by_sdk"

    .line 158
    invoke-static {v1, v3, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 161
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v3

    const-string v4, "applink_click"

    invoke-virtual {v3, v4, v1, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 163
    invoke-static {v0, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v3

    .line 164
    invoke-virtual {v3}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v4

    const/4 v5, 0x2

    const-string v6, "dialog_by_url"

    if-ne v4, v5, :cond_3

    .line 165
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 166
    invoke-static {v6, v3, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 168
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v3

    .line 171
    :cond_3
    invoke-virtual {v3}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v0

    if-eq v0, v2, :cond_6

    const/4 v2, 0x3

    const-string v4, "dialog_by_package"

    if-eq v0, v2, :cond_5

    const/4 v2, 0x4

    if-eq v0, v2, :cond_4

    .line 182
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string v0, "AppLinkClickDialog default"

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    goto :goto_0

    .line 179
    :cond_4
    invoke-static {v4, v3, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 173
    :cond_5
    invoke-static {v4, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 176
    :cond_6
    invoke-static {v6, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    :goto_0
    return-void
.end method

.method public static df(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 1

    const-string v0, "applink_source"

    .line 320
    invoke-static {p2, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 321
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p1, "error_code"

    invoke-static {p2, p1, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 322
    invoke-interface {p3}, Lcom/ss/android/downloadad/api/rg/rg;->n()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p1, "download_scene"

    invoke-static {p2, p1, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 323
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string p1, "deeplink_url_open_fail"

    invoke-virtual {p0, p1, p2, p3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 8

    const-string v0, "applink_source"

    .line 275
    invoke-static {p1, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 276
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->n()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "download_scene"

    invoke-static {p1, v1, v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 277
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v1, "deeplink_url_open"

    invoke-virtual {v0, v1, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 279
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v0, "dialog_by_url"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_1

    :sswitch_1
    const-string v0, "notify_by_url"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :sswitch_2
    const-string v0, "by_url"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :sswitch_3
    const-string v0, "auto_by_url"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    if-eqz v0, :cond_1

    if-eq v0, v3, :cond_1

    if-eq v0, v2, :cond_1

    if-eq v0, v1, :cond_1

    goto :goto_2

    .line 284
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "check_applink_mode"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    and-int/2addr v0, v3

    if-eqz v0, :cond_2

    .line 286
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string v0, "check_applink_result_by_sdk"

    invoke-static {p1, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 287
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object p0

    new-instance v0, Lcom/ss/android/downloadlib/df/rg$2;

    invoke-direct {v0, p1, p2}, Lcom/ss/android/downloadlib/df/rg$2;-><init>(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;)V

    goto :goto_2

    .line 302
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->df()Lcom/ss/android/download/api/config/q;

    move-result-object v1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    .line 303
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->ou()Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v3

    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->fo()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v4

    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->y()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v5

    .line 304
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->pp()Ljava/lang/String;

    move-result-object v6

    move-object v7, p0

    .line 302
    invoke-interface/range {v1 .. v7}, Lcom/ss/android/download/api/config/q;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x66a1d5e9 -> :sswitch_3
        -0x51ef0279 -> :sswitch_2
        -0x7b8b0c3 -> :sswitch_1
        0x3174fc5e -> :sswitch_0
    .end sparse-switch
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 6

    .line 110
    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->c()Ljava/lang/String;

    move-result-object v0

    .line 111
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {v1, p0}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "applink_source"

    const-string v3, "notify_click_by_sdk"

    .line 114
    invoke-static {v1, v2, v3}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 117
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v2

    const-string v3, "applink_click"

    invoke-virtual {v2, v3, v1, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 119
    invoke-static {v0, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v2

    .line 120
    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v3

    const-string v4, "notify_by_url"

    const/4 v5, 0x2

    if-ne v3, v5, :cond_1

    .line 121
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 122
    invoke-static {v4, v2, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 124
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v2

    .line 127
    :cond_1
    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v0

    const/4 v3, 0x1

    if-eq v0, v3, :cond_4

    const/4 v3, 0x3

    const-string v4, "notify_by_package"

    if-eq v0, v3, :cond_3

    const/4 v3, 0x4

    if-eq v0, v3, :cond_2

    .line 138
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string v0, "AppLinkClickNotification default"

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    goto :goto_0

    .line 135
    :cond_2
    invoke-static {v4, v2, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 129
    :cond_3
    invoke-static {v4, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 132
    :cond_4
    invoke-static {v4, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    :goto_0
    return-void
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V
    .locals 4

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 405
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->df()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/4 v1, 0x1

    const-string v2, "open_market"

    aput-object v2, v0, v1

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->rg([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 406
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "ttdownloader_type"

    const-string v3, "backup"

    .line 407
    invoke-static {v1, v2, v3}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 408
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v2

    const/4 v3, 0x5

    if-eq v2, v3, :cond_1

    const/4 p2, 0x6

    if-eq v2, p2, :cond_0

    goto :goto_0

    .line 413
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p2, "error_code"

    invoke-static {v1, p2, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 414
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/pp;->n()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p2, "download_scene"

    invoke-static {v1, p2, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 415
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string p2, "market_open_failed"

    invoke-virtual {p0, p2, v1, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_0

    .line 410
    :cond_1
    invoke-static {v0, v1, p1, p2}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    :goto_0
    return-void
.end method

.method public static rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 1

    const-string v0, "applink_source"

    .line 313
    invoke-static {p2, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 314
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p1, "error_code"

    invoke-static {p2, p1, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 315
    invoke-interface {p3}, Lcom/ss/android/downloadad/api/rg/rg;->n()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p1, "download_scene"

    invoke-static {p2, p1, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 316
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string p1, "deeplink_app_open_fail"

    invoke-virtual {p0, p1, p2, p3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V
    .locals 8

    const-string v0, "applink_source"

    .line 237
    invoke-static {p1, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 238
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->n()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "download_scene"

    invoke-static {p1, v1, v0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 239
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v1, "deeplink_app_open"

    invoke-virtual {v0, v1, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 241
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v0, "dialog_by_package"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_1

    :sswitch_1
    const-string v0, "by_package"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :sswitch_2
    const-string v0, "auto_by_package"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :sswitch_3
    const-string v0, "notify_by_package"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    if-eqz v0, :cond_1

    if-eq v0, v3, :cond_1

    if-eq v0, v2, :cond_1

    if-eq v0, v1, :cond_1

    goto :goto_2

    .line 246
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "check_applink_mode"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    and-int/2addr v0, v3

    if-eqz v0, :cond_2

    .line 248
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string v0, "check_applink_result_by_sdk"

    invoke-static {p1, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 249
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object p0

    new-instance v0, Lcom/ss/android/downloadlib/df/rg$1;

    invoke-direct {v0, p1, p2}, Lcom/ss/android/downloadlib/df/rg$1;-><init>(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;)V

    goto :goto_2

    .line 263
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->df()Lcom/ss/android/download/api/config/q;

    move-result-object v1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    .line 264
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->ou()Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v3

    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->fo()Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v4

    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->y()Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v5

    .line 265
    invoke-interface {p2}, Lcom/ss/android/downloadad/api/rg/rg;->pp()Ljava/lang/String;

    move-result-object v6

    move-object v7, p0

    .line 263
    invoke-interface/range {v1 .. v7}, Lcom/ss/android/download/api/config/q;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x4c6ad8ec -> :sswitch_3
        -0x1a50fb12 -> :sswitch_2
        -0xb155fa2 -> :sswitch_1
        0x15f55bb5 -> :sswitch_0
    .end sparse-switch
.end method

.method public static rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V
    .locals 8

    if-eqz p1, :cond_0

    goto :goto_0

    .line 359
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :goto_0
    const-string v0, "applink_source"

    .line 360
    invoke-static {p1, v0, p0}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "download_scene"

    .line 361
    invoke-virtual {p2}, Lcom/ss/android/downloadlib/addownload/model/pp;->n()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    if-eqz p3, :cond_1

    .line 364
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p3

    const-string v0, "market_open_success"

    invoke-virtual {p3, v0, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 367
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object p3

    const-string v0, "check_applink_mode"

    invoke-virtual {p3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    const/4 v0, 0x4

    and-int/2addr p3, v0

    if-eqz p3, :cond_2

    .line 368
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object p3

    new-instance v1, Lcom/ss/android/downloadlib/df/rg$3;

    invoke-direct {v1, p0, p2, p1}, Lcom/ss/android/downloadlib/df/rg$3;-><init>(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;Lorg/json/JSONObject;)V

    invoke-virtual {p3, v1}, Lcom/ss/android/downloadlib/df/pp;->df(Lcom/ss/android/downloadlib/df/pt;)V

    goto :goto_1

    .line 385
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->df()Lcom/ss/android/download/api/config/q;

    move-result-object v1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v4, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    iget-object v5, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object p1, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    .line 386
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v6

    move-object v7, p0

    .line 385
    invoke-interface/range {v1 .. v7}, Lcom/ss/android/download/api/config/q;->rg(Landroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;Ljava/lang/String;Ljava/lang/String;)V

    .line 388
    :goto_1
    new-instance p0, Lcom/ss/android/downloadad/api/rg/df;

    iget-object p1, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object p3, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object p2, p2, Lcom/ss/android/downloadlib/addownload/model/pp;->pt:Lcom/ss/android/download/api/download/DownloadController;

    invoke-direct {p0, p1, p3, p2}, Lcom/ss/android/downloadad/api/rg/df;-><init>(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    const/4 p1, 0x2

    .line 390
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadad/api/rg/df;->pp(I)V

    .line 391
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    invoke-virtual {p0, p2, p3}, Lcom/ss/android/downloadad/api/rg/df;->c(J)V

    .line 392
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadad/api/rg/df;->ux(I)V

    .line 393
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadad/api/rg/df;->rz(I)V

    .line 394
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 396
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "onMarketSuccess"

    invoke-virtual {p1, p0, p2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public static rg(J)Z
    .locals 1

    .line 430
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->pt(J)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Z
    .locals 10

    .line 45
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    .line 46
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/download/api/model/DeepLink;->getOpenUrl()Ljava/lang/String;

    move-result-object v0

    .line 47
    :goto_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {v1, p0}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "applink_source"

    const-string v3, "click_by_sdk"

    .line 50
    invoke-static {v1, v2, v3}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 53
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v2

    const-string v3, "applink_click"

    invoke-virtual {v2, v3, v1, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 55
    invoke-static {v0, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v2

    .line 56
    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v3

    const-string v4, "by_url"

    const/4 v5, 0x2

    if-ne v3, v5, :cond_2

    .line 57
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 58
    invoke-static {v4, v2, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 60
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, p0}, Lcom/ss/android/downloadlib/utils/ux;->rg(Landroid/content/Context;Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v2

    .line 64
    :cond_2
    iget-wide v6, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-static {v6, v7}, Lcom/ss/android/downloadlib/df/rg;->rg(J)Z

    move-result v0

    const/4 v3, 0x4

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-eqz v0, :cond_4

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v8, "link_ad_click_event"

    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    if-ne v0, v7, :cond_4

    .line 65
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    instance-of v0, v0, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    if-eqz v0, :cond_3

    .line 66
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    check-cast v0, Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    .line 67
    invoke-virtual {v0, v3}, Lcom/ss/android/downloadad/api/download/AdDownloadModel;->setFunnelType(I)Lcom/ss/android/downloadad/api/download/AdDownloadModel;

    .line 69
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-wide v8, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-virtual {v0, v8, v9, v6}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    move v0, v7

    goto :goto_1

    :cond_4
    move v0, v6

    .line 74
    :goto_1
    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v8

    if-eq v8, v7, :cond_7

    const/4 v4, 0x3

    const-string v9, "by_package"

    if-eq v8, v4, :cond_6

    if-eq v8, v3, :cond_5

    .line 88
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v1

    const-string v2, "AppLinkClick default"

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    goto :goto_3

    .line 84
    :cond_5
    invoke-static {v9, v2, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_3

    .line 76
    :cond_6
    invoke-static {v9, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    goto :goto_2

    .line 80
    :cond_7
    invoke-static {v4, v1, p0}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    :goto_2
    move v6, v7

    :goto_3
    if-eqz v6, :cond_a

    if-nez v0, :cond_a

    .line 95
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/event/df;->df()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 96
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/event/df;->df(JLjava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 97
    :cond_8
    invoke-static {}, Lcom/ss/android/downloadlib/event/df;->rg()Lcom/ss/android/downloadlib/event/df;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/event/df;->q()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 98
    :cond_9
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-virtual {v0, v1, v2, v5}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    :cond_a
    return v6
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/model/pp;I)Z
    .locals 8

    .line 330
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 331
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/pp;->n()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "download_scene"

    invoke-static {v0, v2, v1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 333
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    const-string v3, "market_click_open"

    invoke-virtual {v1, v3, v0, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 334
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v3}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, p0, v3}, Lcom/ss/android/downloadlib/utils/ux;->rg(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/pp;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v1

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    .line 336
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->df()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-string v4, "open_market"

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-static {v3}, Lcom/ss/android/downloadlib/utils/b;->rg([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 337
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v4

    const/4 v7, 0x5

    if-eq v4, v7, :cond_1

    const/4 v3, 0x6

    if-eq v4, v3, :cond_0

    const/4 v0, 0x7

    if-eq v4, v0, :cond_2

    return v5

    .line 344
    :cond_0
    invoke-virtual {v1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "error_code"

    invoke-static {v0, v1, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 345
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/addownload/model/pp;->n()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-static {v0, v2, p1}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 346
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    const-string v1, "market_open_failed"

    invoke-virtual {p1, v1, v0, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v5

    .line 339
    :cond_1
    invoke-static {v3, v0, p0, v6}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadlib/addownload/model/pp;Z)V

    .line 341
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    invoke-virtual {v0, v1, v2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JI)V

    return v6
.end method

.method public static rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)Z
    .locals 6

    .line 199
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->om()I

    move-result v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/ux;->df(I)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 202
    :cond_0
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v1

    .line 206
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->getInstance()Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;

    move-result-object p0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->qx()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/notification/DownloadNotificationManager;->cancelNotification(I)V

    .line 208
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 209
    invoke-static {p0, p1}, Lcom/ss/android/downloadlib/utils/pp;->rg(Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)Lorg/json/JSONObject;

    const-string v0, "applink_source"

    const-string v2, "auto_click"

    .line 211
    invoke-static {p0, v0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 213
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v2, "applink_click"

    invoke-virtual {v0, v2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 214
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->c()Ljava/lang/String;

    move-result-object v0

    .line 215
    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->pp()Ljava/lang/String;

    move-result-object v2

    .line 214
    invoke-static {p1, v0, v2}, Lcom/ss/android/downloadlib/utils/ux;->rg(Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;

    move-result-object v0

    .line 217
    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->getType()I

    move-result v2

    const-string v3, "auto_by_url"

    const/4 v4, 0x1

    if-eq v2, v4, :cond_5

    const/4 v5, 0x2

    if-eq v2, v5, :cond_4

    const/4 v3, 0x3

    const-string v5, "auto_by_package"

    if-eq v2, v3, :cond_3

    const/4 v3, 0x4

    if-eq v2, v3, :cond_2

    return v1

    .line 225
    :cond_2
    invoke-static {v5, v0, p0, p1}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v1

    .line 219
    :cond_3
    invoke-static {v5, p0, p1}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v4

    .line 228
    :cond_4
    invoke-static {v3, v0, p0, p1}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v1

    .line 222
    :cond_5
    invoke-static {v3, p0, p1}, Lcom/ss/android/downloadlib/df/rg;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return v4
.end method
