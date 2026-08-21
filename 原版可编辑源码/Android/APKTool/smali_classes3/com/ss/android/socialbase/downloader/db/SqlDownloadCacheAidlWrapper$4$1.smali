.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;
.super Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;)V
    .locals 0

    .line 159
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public callback(Ljava/util/Map;Ljava/util/Map;)V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$downloadInfoSparseArray:Landroid/util/SparseArray;

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->sparseArrayPutAll(Landroid/util/SparseArray;Ljava/util/Map;)V

    .line 163
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$chunkListSparseArray:Landroid/util/SparseArray;

    invoke-static {p1, p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->sparseArrayPutAll(Landroid/util/SparseArray;Ljava/util/Map;)V

    .line 164
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$callback:Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;

    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;->callback()V

    .line 165
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;

    iget-object p1, p1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V

    return-void
.end method
