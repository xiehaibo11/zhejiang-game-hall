.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadExtListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;)V
    .locals 0

    .line 922
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 989
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 991
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 1

    .line 980
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 982
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onFirstStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 998
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onFirstStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1000
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onFirstSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 1007
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onFirstSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1009
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 962
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 964
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 935
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 937
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 953
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 955
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 1

    .line 1016
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1018
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onRetryDelay(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 1

    .line 1025
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onRetryDelay(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1027
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 944
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 946
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 971
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 973
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 926
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$31;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 928
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method
