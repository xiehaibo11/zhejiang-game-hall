.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertMonitorDependToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)V
    .locals 0

    .line 475
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;->val$depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public getAdditionalMonitorStatus()[I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 495
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;->val$depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadMonitorDepend;

    if-eqz v1, :cond_0

    .line 496
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadMonitorDepend;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadMonitorDepend;->getAdditionalMonitorStatus()[I

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getEventPage()Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 490
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;->val$depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;->getEventPage()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public monitorLogSend(Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 478
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 481
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 482
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$12;->val$depend:Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    invoke-interface {p1, v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;->monitorLogSend(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 484
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method
