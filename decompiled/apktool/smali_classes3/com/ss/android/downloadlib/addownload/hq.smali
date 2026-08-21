.class public Lcom/ss/android/downloadlib/addownload/hq;
.super Ljava/lang/Object;


# static fields
.field private static rg:Lcom/ss/android/downloadlib/addownload/rg/q;


# direct methods
.method public static rg()Lcom/ss/android/downloadlib/addownload/rg/q;
    .locals 1

    .line 30
    sget-object v0, Lcom/ss/android/downloadlib/addownload/hq;->rg:Lcom/ss/android/downloadlib/addownload/rg/q;

    return-object v0
.end method

.method public static rg(Lcom/ss/android/downloadlib/addownload/rg/q;)V
    .locals 0

    .line 34
    sput-object p0, Lcom/ss/android/downloadlib/addownload/hq;->rg:Lcom/ss/android/downloadlib/addownload/rg/q;

    return-void
.end method

.method public static rg(I)Z
    .locals 2

    const/4 v0, 0x1

    if-eq p0, v0, :cond_1

    const/4 v1, 0x2

    if-eq p0, v1, :cond_1

    const/4 v1, 0x3

    if-eq p0, v1, :cond_1

    const/4 v1, 0x4

    if-eq p0, v1, :cond_1

    const/4 v1, 0x5

    if-eq p0, v1, :cond_1

    const/4 v1, 0x7

    if-eq p0, v1, :cond_1

    const/16 v1, 0x8

    if-ne p0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_0
    return v0
.end method

.method public static rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ILcom/ss/android/downloadlib/addownload/q/q;)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 39
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string p1, "tryReverseWifi nativeModel null"

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    return v0

    :cond_0
    if-nez p1, :cond_1

    .line 43
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p0

    const-string p1, "tryReverseWifi info null"

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    return v0

    .line 46
    :cond_1
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v1

    .line 47
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->df(Lcom/ss/android/downloadad/api/rg/rg;)Z

    move-result v2

    .line 48
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const/4 v4, 0x1

    :try_start_0
    const-string v5, "switch_status"

    if-eqz v2, :cond_2

    move v6, v4

    goto :goto_0

    :cond_2
    move v6, v0

    .line 50
    :goto_0
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v3, v5, v6}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v5

    .line 52
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    .line 54
    :goto_1
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v5

    const-string v6, "pause_reserve_wifi_switch_status"

    invoke-virtual {v5, v6, v3, p0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    if-nez v2, :cond_3

    return v0

    .line 59
    :cond_3
    invoke-static {p2}, Lcom/ss/android/downloadlib/addownload/hq;->rg(I)Z

    move-result p2

    if-nez p2, :cond_4

    return v0

    .line 62
    :cond_4
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result p2

    if-eqz p2, :cond_5

    return v0

    .line 66
    :cond_5
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->hasPauseReservedOnWifi()Z

    move-result p1

    if-nez p1, :cond_6

    .line 68
    new-instance p1, Lcom/ss/android/downloadlib/addownload/hq$1;

    invoke-direct {p1, v1, p0, p3}, Lcom/ss/android/downloadlib/addownload/hq$1;-><init>(ILcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/q/q;)V

    .line 93
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/hq;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)V

    .line 94
    invoke-static {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Lcom/ss/android/downloadad/api/rg/rg;)V

    return v4

    :cond_6
    return v0
.end method
