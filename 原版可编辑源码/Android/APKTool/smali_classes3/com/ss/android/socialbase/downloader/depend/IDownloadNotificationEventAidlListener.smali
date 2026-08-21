.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Default;
    }
.end annotation


# virtual methods
.method public abstract getNotifyProcessName()Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract interceptAfterNotificationSuccess(Z)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
