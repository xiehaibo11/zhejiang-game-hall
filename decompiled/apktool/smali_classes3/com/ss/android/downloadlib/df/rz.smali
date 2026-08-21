.class public Lcom/ss/android/downloadlib/df/rz;
.super Ljava/lang/Object;


# direct methods
.method public static rg(Lcom/ss/android/downloadad/api/rg/rg;)Z
    .locals 3

    .line 25
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/c/pt;->pt()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-ge v0, v2, :cond_0

    .line 27
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 28
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->b()Lcom/ss/android/download/api/config/df;

    move-result-object v0

    invoke-interface {v0}, Lcom/ss/android/download/api/config/df;->rg()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 29
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/pt;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v2, "invoke_app_form_background_switch"

    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v0

    if-ne v0, v1, :cond_0

    .line 30
    invoke-interface {p0}, Lcom/ss/android/downloadad/api/rg/rg;->z()Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method
