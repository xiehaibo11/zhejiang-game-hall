.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$6;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenHandlerToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;)V
    .locals 0

    .line 390
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$6;->val$forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 393
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$6;->val$forbiddenHandler:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenCallbackFromAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenHandler;->onForbidden(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Z

    move-result p1

    return p1
.end method
