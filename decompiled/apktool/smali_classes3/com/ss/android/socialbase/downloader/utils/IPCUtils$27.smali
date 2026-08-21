.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$27;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$diskSpaceCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)V
    .locals 0

    .line 862
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$27;->val$diskSpaceCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public onDiskCleaned()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 865
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$27;->val$diskSpaceCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;->onDiskCleaned()V

    return-void
.end method
