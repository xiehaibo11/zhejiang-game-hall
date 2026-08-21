.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$26;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$diskSpaceAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;)V
    .locals 0

    .line 845
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$26;->val$diskSpaceAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Z
    .locals 6

    .line 850
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$26;->val$diskSpaceAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    invoke-static {p5}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDiskSpaceCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;

    move-result-object v5

    move-wide v1, p1

    move-wide v3, p3

    invoke-interface/range {v0 .. v5}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;->cleanUpDisk(JJLcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlCallback;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 852
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method
