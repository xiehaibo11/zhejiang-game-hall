.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$9;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;)V
    .locals 0

    .line 437
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$9;->val$diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 441
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$9;->val$diskSpaceHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;

    invoke-static {p5}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;

    move-result-object v5

    move-wide v1, p1

    move-wide v3, p3

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;->cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Z

    move-result p1

    return p1
.end method
