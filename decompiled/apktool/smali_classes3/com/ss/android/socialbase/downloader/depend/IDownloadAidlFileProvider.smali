.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Default;
    }
.end annotation


# virtual methods
.method public abstract getUriForFile(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
