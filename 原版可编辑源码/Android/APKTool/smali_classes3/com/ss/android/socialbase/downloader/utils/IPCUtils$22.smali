.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$22;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenHandlerFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$forbiddenAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;)V
    .locals 0

    .line 784
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$22;->val$forbiddenAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Z
    .locals 1

    .line 788
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$22;->val$forbiddenAidlHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;->onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)Z

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 790
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method
