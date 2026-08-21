.class public Lcom/ss/android/downloadlib/df/q;
.super Ljava/lang/Object;


# direct methods
.method public static rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 3

    .line 32
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result v0

    if-nez v0, :cond_0

    .line 34
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-lt v1, v2, :cond_0

    .line 35
    invoke-static {}, Lcom/ss/android/downloadlib/utils/b;->df()V

    .line 38
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result v1

    if-nez v0, :cond_1

    if-eqz v1, :cond_1

    if-eqz p0, :cond_1

    const/4 v0, 0x1

    .line 42
    invoke-virtual {p0, v0}, Lcom/ss/android/downloadad/api/rg/df;->hq(Z)V

    .line 45
    :cond_1
    invoke-interface {p1}, Lcom/ss/android/downloadlib/guide/install/rg;->rg()V

    .line 47
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AppInstallOptimiseHelper-->isAppForegroundSecond:::"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "AppInstallOptimiseHelper"

    invoke-static {v2, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v1, :cond_2

    .line 51
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/df/q$1;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/df/q$1;-><init>(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/guide/install/rg;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    :cond_2
    return-void
.end method
