.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;
.super Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadTaskToAidl(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadTask;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 75
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getChunkStrategy()Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertCntCalculatorToAidl(Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;)Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    move-result-object v0

    return-object v0
.end method

.method public getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 110
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDependToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    move-result-object v0

    return-object v0
.end method

.method public getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 130
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    move-result-object v0

    return-object v0
.end method

.method public getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 145
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadCompleteHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadCompleteHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadCompleteHandlerSize()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 140
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadCompleteHandlers()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0
.end method

.method public getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 70
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    return-object v0
.end method

.method public getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 90
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListenerByIndex(Lcom/ss/android/socialbase/downloader/constants/ListenerType;I)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object p2

    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v0

    if-ne p1, v0, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1

    return-object p1
.end method

.method public getDownloadListenerSize(I)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 85
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getDownloadListenerSize(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)I

    move-result p1

    return p1
.end method

.method public getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 95
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadNotificationEventListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v0

    return-object v0
.end method

.method public getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 135
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getFileUriProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertFileProviderToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object v0

    return-object v0
.end method

.method public getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    move-result-object v0

    return-object v0
.end method

.method public getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 105
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertInterceptorToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadInterceptor;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;

    move-result-object v0

    return-object v0
.end method

.method public getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 115
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertMonitorDependToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadMonitorDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    move-result-object v0

    return-object v0
.end method

.method public getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 100
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertNotificationClickCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object v0

    return-object v0
.end method

.method public getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 125
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertRetryDelayTimeCalculatorToAidl(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    move-result-object v0

    return-object v0
.end method

.method public getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 80
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$1;->val$downloadTask:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->convertListenerType(I)Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->getSingleDownloadListener(Lcom/ss/android/socialbase/downloader/constants/ListenerType;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    move-result-object v0

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->SUB:Lcom/ss/android/socialbase/downloader/constants/ListenerType;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/constants/ListenerType;->ordinal()I

    move-result v1

    if-ne p1, v1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1

    return-object p1
.end method
