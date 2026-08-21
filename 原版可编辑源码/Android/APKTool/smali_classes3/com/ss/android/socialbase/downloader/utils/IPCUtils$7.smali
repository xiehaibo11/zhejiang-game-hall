.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$7;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertFileProviderToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;)V
    .locals 0

    .line 401
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$7;->val$fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public getUriForFile(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 404
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$7;->val$fileUriProvider:Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadFileUriProvider;->getUriForFile(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    return-object p1
.end method
