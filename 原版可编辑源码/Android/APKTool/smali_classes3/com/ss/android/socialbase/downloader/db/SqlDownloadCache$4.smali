.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateDownloadChunk(IIJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$chunkIndex:I

.field final synthetic val$currentOffset:J

.field final synthetic val$id:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIJ)V
    .locals 0

    .line 517
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$id:I

    iput p3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$chunkIndex:I

    iput-wide p4, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$currentOffset:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .line 521
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getUpdateStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v6

    .line 522
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$id:I

    iget v3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$chunkIndex:I

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;->val$currentOffset:J

    invoke-static/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$800(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIJLandroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 524
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
