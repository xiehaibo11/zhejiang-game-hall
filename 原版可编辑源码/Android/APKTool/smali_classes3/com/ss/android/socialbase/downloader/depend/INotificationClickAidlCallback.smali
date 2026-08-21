.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Default;
    }
.end annotation


# virtual methods
.method public abstract onClickWhenInstalled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract onClickWhenSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract onClickWhenUnSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
