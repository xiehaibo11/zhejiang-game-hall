.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

.field final synthetic val$callback:Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;

.field final synthetic val$chunkListSparseArray:Landroid/util/SparseArray;

.field final synthetic val$downloadInfoSparseArray:Landroid/util/SparseArray;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$downloadInfoSparseArray:Landroid/util/SparseArray;

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$chunkListSparseArray:Landroid/util/SparseArray;

    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$callback:Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 159
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    new-instance v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4$1;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V

    const/4 v0, 0x1

    .line 170
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$400(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/util/concurrent/CountDownLatch;

    move-result-object v1

    const-wide/16 v2, 0x1388

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v1, v2, v3, v4}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    xor-int/2addr v1, v0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 172
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_0

    .line 176
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$800(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/util/concurrent/Future;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 178
    invoke-interface {v2, v0}, Ljava/util/concurrent/Future;->cancel(Z)Z

    .line 183
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->init()V

    if-eqz v1, :cond_1

    .line 185
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$4;->val$callback:Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;

    if-eqz v0, :cond_1

    .line 186
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;->callback()V

    :cond_1
    return-void
.end method
