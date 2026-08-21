.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Default;
    }
.end annotation


# virtual methods
.method public abstract getAdditionalMonitorStatus()[I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract getEventPage()Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method

.method public abstract monitorLogSend(Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
