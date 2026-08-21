.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$20;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertDownloadDependFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$aidlDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;)V
    .locals 0

    .line 730
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$20;->val$aidlDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public monitorLogSend(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 736
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$20;->val$aidlDepend:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;->monitorLogSend(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 738
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method
