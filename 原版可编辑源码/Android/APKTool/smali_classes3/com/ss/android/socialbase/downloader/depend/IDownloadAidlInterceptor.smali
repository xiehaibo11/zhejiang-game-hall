.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor$Default;
    }
.end annotation


# virtual methods
.method public abstract intercept()Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
