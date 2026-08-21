.class public interface abstract Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "IndependentHolderCreator"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;
    }
.end annotation


# virtual methods
.method public abstract createCache(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;)Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;
.end method

.method public abstract createProxy()Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
.end method

.method public abstract createServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
.end method
