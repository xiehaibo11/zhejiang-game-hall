.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback$Default;
    }
.end annotation


# virtual methods
.method public abstract onDiskCleaned()V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
