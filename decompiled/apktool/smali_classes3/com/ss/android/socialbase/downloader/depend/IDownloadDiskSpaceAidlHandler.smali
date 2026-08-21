.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Default;
    }
.end annotation


# virtual methods
.method public abstract cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
