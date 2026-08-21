.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)V
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;->val$notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public getNotifyProcessName()Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 350
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;->val$notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->getNotifyProcessName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public interceptAfterNotificationSuccess(Z)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 345
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;->val$notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->interceptAfterNotificationSuccess(Z)Z

    move-result p1

    return p1
.end method

.method public onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 340
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$3;->val$notificationEventListener:Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;->onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
