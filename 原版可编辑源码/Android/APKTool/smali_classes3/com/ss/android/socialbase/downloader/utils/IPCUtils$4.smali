.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;
.super Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)V
    .locals 0

    .line 358
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;->val$notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 371
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;->val$notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 366
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;->val$notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method

.method public onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 361
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$4;->val$notificationClickCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;->onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    return p1
.end method
