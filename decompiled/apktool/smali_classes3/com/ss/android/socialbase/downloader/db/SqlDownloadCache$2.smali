.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->removeAllDownloadChunk(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$id:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;I)V
    .locals 0

    .line 434
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;->val$id:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 438
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getDeleteStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 439
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;->val$id:I

    invoke-static {v1, v2, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$600(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 441
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
