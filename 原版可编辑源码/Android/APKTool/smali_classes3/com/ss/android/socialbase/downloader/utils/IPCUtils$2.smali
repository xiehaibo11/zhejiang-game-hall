.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertListenerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$isInMainThread:Z

.field final synthetic val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;Z)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    iput-boolean p2, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public getOriginHashCode()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 157
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    return v0
.end method

.method public onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 247
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 248
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$7;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$7;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 255
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 233
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 234
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$6;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 241
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_0
    return-void
.end method

.method public onFirstStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 261
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 262
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$8;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$8;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 269
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onFirstStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onFirstSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 275
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 276
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$9;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$9;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 283
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onFirstSuccess(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 205
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 206
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$4;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$4;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 213
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 162
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 163
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$1;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$1;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 170
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 191
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 192
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$3;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$3;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 199
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 289
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 290
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$10;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$10;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 297
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_0
    return-void
.end method

.method public onRetryDelay(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 303
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 304
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$11;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$11;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 311
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onRetryDelay(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V

    :goto_0
    return-void
.end method

.method public onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 177
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 178
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$2;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 185
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 219
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v0, :cond_0

    .line 220
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$5;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$5;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 227
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;->onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :goto_0
    return-void
.end method

.method public onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 317
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$listener:Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;

    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadExtListener;

    if-eqz v1, :cond_1

    .line 318
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;->val$isInMainThread:Z

    if-eqz v1, :cond_0

    .line 319
    invoke-static {}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->access$000()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$12;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2$12;-><init>(Lcom/ss/android/socialbase/downloader/utils/IPCUtils$2;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 326
    :cond_0
    check-cast v0, Lcom/ss/android/socialbase/downloader/depend/IDownloadExtListener;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadExtListener;->onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    :cond_1
    :goto_0
    return-void
.end method
