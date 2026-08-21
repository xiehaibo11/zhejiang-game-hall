.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public binderDied()V
    .locals 4

    const/4 v0, 0x0

    .line 104
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$002(Z)Z

    .line 105
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$100(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 107
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    iget-object v0, v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$700(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2$1;->this$1:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;

    iget-object v1, v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->access$600(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/16 v2, 0x7d0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method
