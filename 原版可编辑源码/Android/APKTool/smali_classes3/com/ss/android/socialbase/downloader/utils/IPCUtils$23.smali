.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;
.super Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertForbiddenCallbackToAidl(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$forbiddenCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;)V
    .locals 0

    .line 800
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;->val$forbiddenCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlCallback$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public hasCallback()Z
    .locals 1

    .line 809
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;->val$forbiddenCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;

    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;->hasCallback()Z

    move-result v0

    return v0
.end method

.method public onCallback(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 804
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$23;->val$forbiddenCallback:Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenCallback;->onCallback(Ljava/util/List;)V

    return-void
.end method
