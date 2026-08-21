.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler$Default;
    }
.end annotation


# virtual methods
.method public abstract onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
