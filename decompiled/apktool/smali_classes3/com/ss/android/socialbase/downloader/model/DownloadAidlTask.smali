.class public interface abstract Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;,
        Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Default;
    }
.end annotation


# virtual methods
.method public abstract getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadCompleteHandlerSize()I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadListenerSize(I)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
