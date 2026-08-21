.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$notificationClickAidlCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;)V
    .locals 0

    .line 677
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;->val$notificationClickAidlCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 702
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;->val$notificationClickAidlCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;->onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 704
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 692
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;->val$notificationClickAidlCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;->onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 694
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 682
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$18;->val$notificationClickAidlCallback:Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;->onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 684
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method
